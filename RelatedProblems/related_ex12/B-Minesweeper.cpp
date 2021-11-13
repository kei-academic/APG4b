#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
string board[60];
int direction = 8;

int main(void) {
  int h, w;
  cin >> h >> w;
  for (int i = 0; i < h; i++) {
    cin >> board[i];
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (board[i][j] == '.') {
        int cnt = 0;
        for (int k = 0; k < direction; k++) {
          int x = i + dx[k];
          int y = j + dy[k];
          if ((x >= 0 && x < h) && (y >= 0 && y < w) && board[x][y] == '#') {
            cnt++;
          }
          board[i][j] = '0' + cnt;
        }
      }
    }
  }

  for (int i= 0; i < h; i++) {
    cout << board[i] << endl;
  }
  return 0;
}
