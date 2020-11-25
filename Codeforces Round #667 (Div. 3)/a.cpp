#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007
#define endl '\n'

void solve(){
    ll a,b;
    cin>>a>>b;
    int d = abs(a-b);
    cout<<d/10+(d%10==0?0:1)<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}