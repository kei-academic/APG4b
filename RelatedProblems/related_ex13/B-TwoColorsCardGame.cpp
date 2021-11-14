#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s.at(i);
  }

  int m;
  cin >> m;
  vector<string> t(m);
  for (int i = 0; i < m; i++) {
    cin >> t.at(i);
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    string word = s.at(i);
    int blue = count(s.begin(), s.end(), word);
    int red = count(t.begin(), t.end(), word);
    if ((blue - red) > ans) {
      ans = blue - red;
    }
  }

  cout << ans << endl;
  return 0;
}