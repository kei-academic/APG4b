#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int p;
  cin >> p;

  if (p == 2) {
    string text;
    cin >> text;
    cout << text + "!" << endl;
  }

  int price, n;
  cin >> price >> n;

  cout << price * n << endl;
  return 0;
}