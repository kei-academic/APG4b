#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> arr = {a, b, c};
  sort(arr.begin(), arr.end());

  int ans = arr.at(2) - arr.at(0);
  cout << ans << endl;

  return 0;
}