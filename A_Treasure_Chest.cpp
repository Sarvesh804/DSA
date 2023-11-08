#include <bits/stdc++.h>
using namespace std;

#define endl
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;
    while (tc--) {
        int x,y,k;
        cin>>x>>y>>k;

        if(x>=y){
            cout<<x<<"\n";
        }
        else if(x+k >= y){
            cout<<y<<"\n";
        }
        else{
            cout<< 2*y - (x+k)<<"\n";
        }
    }
}