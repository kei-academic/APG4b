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
    vector<pair<ll, ll>> arr(n);
    rep(i, n) {
        ll a, b;
        cin >> a >> b;
        arr.at(i) = make_pair(b, a);
    }

    sort(all(arr));
    rep(i, n) {
        ll b, a;
        tie(b, a) = arr.at(i);
        cout << a << " " << b << endl;
    }

    return 0;
}
