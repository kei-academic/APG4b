#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int a, b;
  cin >> a >> b;

  cout << "A:";
  int i = 0;
  while (i < a) {
    cout << "]";
    i++;
  }
  cout << endl;

  cout << "B:";
  int j = 0;
  while (j < b) {
    cout << "]";
    j++;
  }
  cout << endl;
  return 0;
}