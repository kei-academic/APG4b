#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int h, w;
  cin >> h >> w;

  vector<string> arr(h+2);
  for (int i = 0; i < w+2; i++) {
    arr.at(0) += "#";
    arr.at(h+1) += "#";
  }

  for (int i = 0; i < h; i++) {
    cin >> arr.at(i+1);
    arr.at(i+1) = "#" + arr.at(i+1) + "#";
  }

  for (int i = 0; i < h+2; i++) {
    cout << arr.at(i) << endl;
  }
  return 0;
}