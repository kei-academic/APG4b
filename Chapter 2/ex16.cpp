#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> a(5);
  for (int i = 0; i < 5; i++) {
    cin >> a.at(i);
  }

  string ans = "NO";
  for (int i = 0; i < 4; i++) {
    if (a.at(i) == a.at(i+1)) {
      ans = "YES";
      break;
    }
  }

  cout << ans << endl;

  return 0;
}