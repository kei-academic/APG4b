#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, m;
  cin >> n >> m;

  vector<int> a(m), b(m);
  for (int i = 0; i < m; i++) {
    cin >> a.at(i) >> b.at(i);
  }

  vector<vector<char>> table(n, vector<char>(n, '-'));

  for (int i = 0; i < m; i++) {
    a.at(i)--;
    b.at(i)--;
    table.at(a.at(i)).at(b.at(i)) = 'o';
    table.at(b.at(i)).at(a.at(i)) = 'x';
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << table.at(i).at(j);
      if (j == n - 1) {
        cout << endl;
      } else {
        cout << ' ';
      }
    }
  }

  return 0;
}