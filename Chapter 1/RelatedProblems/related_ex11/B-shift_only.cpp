#include <bits/stdc++.h>
using namespace std;

int a[210];
int main(void) {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans = 0;
  while(1) {
    bool odd = false;
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 1) {
        odd = true;
      }
    }
    if (odd) {
      break;
    } else {
      ans++;
      for (int i = 0; i < n; i++) {
        a[i] /= 2;
      }
    }
  }
  cout << ans << endl;
  return 0;
}