#include <bits/stdc++.h>
using namespace std;

int main(void) {
  string s;
  cin >> s;

  int ans = 1;
  for (char c : s) {
    if (c == '+') {
      ans++;
    } else if (c == '-') {
      ans--;
    }
  }
  cout << ans << endl;
  return 0;
}