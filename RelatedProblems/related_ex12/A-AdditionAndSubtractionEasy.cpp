#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int a, b;
  char op;
  cin >> a >> op >> b;

  int ans = a;
  if (op == '+') {
    ans += b;
  } else {
    ans -= b;
  }
  cout << ans << endl;
  return 0;
}