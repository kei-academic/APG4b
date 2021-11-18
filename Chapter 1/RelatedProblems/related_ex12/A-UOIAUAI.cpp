#include <bits/stdc++.h>
using namespace std;

int main(void) {
  char c;
  cin >> c;

  string ans = "consonant";
  string vowel = "aeiou";
  for (char v : vowel) {
    if (c == v) {
      ans = "vowel";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}