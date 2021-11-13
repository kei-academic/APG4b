#include <bits/stdc++.h>
using namespace std;

int main(void) {
  string s;
  getline(cin, s);

  string ans = "A";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == ' ') {
      ans += s[i+1];
    }
  }
  cout << ans << endl;
  return 0;
}