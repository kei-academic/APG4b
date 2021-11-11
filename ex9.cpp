#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int x, a, b;
  cin >> x >> a >> b;

  int ans1 = ++x;
  cout << x << endl;

  int ans2 = ans1 * (a + b);
  cout << ans2 << endl;

  int ans3 = ans2 * ans2;
  cout << ans3 << endl;

  int ans4 = ans3 - 1;
  cout << ans4 << endl;
  return 0;
}