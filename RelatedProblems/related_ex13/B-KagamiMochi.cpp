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

  int ans = 1;
  int rice_cake = arr.at(0);
  for (int i = 1; i < n; i++) {
    if (arr.at(i) < rice_cake) {
      ans++;
      rice_cake = arr.at(i);
    }
  }

  cout << ans << endl;

  return 0;
}