#include <bits/stdc++.h>
using namespace std;


#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;
    while (tc--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int count = 0;

        for(int i=0; i<n; i++){
            if((a[i]-a[i+1]) == -1){
                count++;
                if((a[i+1]-a[i+2]) != -1){
                    int d=i;
                    while(count+1){
                       cout<<(d--)+2<<" ";
                       count--;
                    }
                    i=i+1;
                }
                continue;
            }
            else{
                cout<<i+1<<" ";
            }
        }
        cout<<"\n";
    }
}