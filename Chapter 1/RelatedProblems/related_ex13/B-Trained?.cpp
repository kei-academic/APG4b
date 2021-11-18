#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr.at(i);
  }

  int ans = 0;
  int now = 1;
  while (true) {
    now = arr.at(now-1);
    if (now == 2) {
      ans++;
      break;
    } else if (ans > n) {
      ans = -1;
      break;
    }
    ans++;
  }

  cout << ans << endl;
  return 0;
}