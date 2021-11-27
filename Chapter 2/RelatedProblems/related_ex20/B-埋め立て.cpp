#include <bits/stdc++.h>
using namespace std;

void fill_island(vector<vector<char>> &A, vector<vector<bool>> &checked, int y, int x) {
  if (y < 0 || x < 0 || y >= 10 || x >= 10) return;
  if (A.at(y).at(x) == 'x') return;
  if (checked.at(y).at(x)) return;

  checked.at(y).at(x) = true;
  fill_island(A, checked, y-1, x);  // 上
  fill_island(A, checked, y+1, x);  // 下
  fill_island(A, checked, y, x+1);  // 右
  fill_island(A, checked, y, x-1);  // 左
}

bool check_connected(vector<vector<char>> &A) {
  vector<vector<bool>> checked(10, vector<bool>(10, false));

  int y, x;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (A.at(i).at(j) == 'o') {
        y = i;
        x = j;
        break;
      }
    }
  }

  fill_island(A, checked, y, x);

  bool ok = true;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (A.at(i).at(j) == 'o') {
        if (!checked.at(i).at(j)) {
          ok = false;
        }
      }
    }
  }
  return ok;
}

int main() {
  vector<vector<char>> A(10, vector<char>(10));
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> A.at(i).at(j);
    }
  }

  for (int y = 0; y < 10; y++) {
    for (int x = 0; x < 10; x++) {
      if (A.at(y).at(x) == 'o') continue;

      A.at(y).at(x) = 'o';

      if (check_connected(A)) {
        cout << "YES" << endl;
        return 0;
      }

      A.at(y).at(x) = 'x';
    }
  }

  cout << "NO" << endl;
}
