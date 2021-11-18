#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr.at(i);
  }

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr.at(i);
  }
  int mean = sum / n;

  for (int i = 0; i < n; i++) {
    int dis = arr.at(i) - mean;
    cout << abs(dis) << endl;
  }
  return 0;
}