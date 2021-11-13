#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int a, b;
  cin >> a >> b;

  int ans = 0;
  for (int i = 1; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      for (int k = 0; k < 10; k++) {
        int x = 10001 * i + 1010 * j + 100 * k;
        if (x >= a && x <= b) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}