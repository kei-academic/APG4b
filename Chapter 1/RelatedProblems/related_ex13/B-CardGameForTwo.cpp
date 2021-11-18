#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr.at(i);
  }
  sort(arr.begin(), arr.end(), greater<int>());

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      ans += arr.at(i);
    } else {
      ans -= arr.at(i);
    }
  }

  cout << ans << endl;

  return 0;
}