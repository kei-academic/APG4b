#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;

  string ans = "Three";
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if (s == "Y") {
      ans = "Four";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}