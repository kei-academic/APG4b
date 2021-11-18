#include <bits/stdc++.h>
using namespace std;

const int NMMAX = 50;

int main(void) {
  int n, m;
  cin >> n >> m;

  vector<int> a(NMMAX);
  vector<int> b(NMMAX);

  for (int i = 0; i < m; i++) {
    cin >> a.at(i) >> b.at(i);
  }

  vector<int> road(NMMAX);
  for (int i = 0; i < n; i++) {
    road.at(i) = 0;
  }

  for (int i = 0; i < m; i++) {
    road.at(a.at(i) - 1) += 1;
    road.at(b.at(i) - 1) += 1;
  }

  for (int i = 0; i < n; i++) {
    cout << road.at(i) << endl;
  }

  return 0;
}