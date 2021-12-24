#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second
using vl = vector<long>;
using vvl = vector<vl>;
typedef long long ll;
const double PI = 3.1415926535897932384626;
//-----------------------------------------------------------------
ll n;

int main(void) {
    cin >> n;
    vl arr(n);
    rep(i, n) {
        cin >> arr.at(i);
    }

    map<ll, ll> cnt;
    for (ll x : arr) {
        if (cnt.count(x)) {
            cnt.at(x)++;
        } else {
            cnt[x] = 1;
        }
    }

    ll max_cnt = 0;
    ll ans = -1;
    for (ll x : arr) {
        if (max_cnt < cnt.at(x)) {
            max_cnt = cnt.at(x);
            ans = x;
        }
    }

    cout << ans << " " << max_cnt << endl;

    return 0;
}
