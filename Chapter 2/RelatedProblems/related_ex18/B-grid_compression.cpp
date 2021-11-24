#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int long long
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
#define nrep(i,n) for (int i = 1; i <= (int)(n); ++i)
#define all(x) (x).begin(),(x).end()
#define bit(n,k) ((n>>k)&1) /*nのk bit目*/
#define debug(x) cout << #x << ": " << x << endl;
using P = pair<int,int>;
#define INF 1001001001
#define LINF (1LL<<60)
template<class T> inline bool chmax(T& a, T b){ if(a<b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b){ if(a>b){ a=b; return 1; } return 0; }

int32_t main() {
  int h, w;
  cin >> h >> w;

  vector<string> a(h);
  rep(i, h) cin >> a[i];

  vector<int> row(h), col(w);
  rep(i, h) rep(j, w) if(a.at(i).at(j) == '#') {
    row.at(i) = 1;
    col.at(j) = 1;
  }
  rep(i, h) {
    if (row.at(i) == 0) continue;
    rep(j, w) {
      if(col.at(j) == 1) cout << a.at(i).at(j);
    }
    cout << endl;
  }

  return 0;
}