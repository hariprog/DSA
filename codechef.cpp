#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int tc;
    cin >> tc;
    
    while(tc--) {
        int D, d, P, Q;
        cin >> D >> d >> P >> Q;
        int f = D / d;
        int r = D % d;
        int tot = d * f * P + Q * d * (f * (f - 1)) / 2;
        tot += r * (P + f * Q);
        cout << tot << endl;
    }
    return 0;
}
