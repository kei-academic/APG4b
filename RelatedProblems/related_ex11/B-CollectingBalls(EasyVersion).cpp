#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, k;
  cin >> n >> k;

  int ans = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    if (abs(x - 0) < abs(x - k)) {
      ans += 2 * x;
    } else {
      ans += 2 * abs(x - k);
    }
  }
  cout << ans << endl;
  return 0;
}