#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007
#define endl '\n'

void solve(){
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    ll n0 = n;
    ll aa = a, bb = b;
    aa = max(x,aa-n);
    n0 -= (a - aa);
    bb = max(y,bb-n0);
    ll ans = aa * bb;
    aa = a,bb = b,n0 = n;
    bb = max(y,bb-n);
    n -= (b-bb);
    aa = max(x,aa-n);
    ans = min(ans,aa*bb);
    aa = a,bb = b;
    // ll n1 = n/2;
    // ll n2 = (n/2) + (n%2);
    cout<<ans<<endl;
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