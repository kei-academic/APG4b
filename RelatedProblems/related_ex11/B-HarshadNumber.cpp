#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, c = 0;
  cin >> n;

  int x = n;
  while (x > 0) {
    c += x % 10;
    x /= 10;
  }

  if (n % c == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}