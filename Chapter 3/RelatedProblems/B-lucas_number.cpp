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

ll n;
//-----------------------------------------------------------------
int main(void) {
    cin >> n;
    vector<ll> arr = {2,1};
    rep(i, n-1) {
        arr.pb(arr.at(i)+arr.at(i+1));
    }
    cout << arr.at(n) << endl;

    return 0;
}
