#include <bits/stdc++.h>
 
using namespace std;
 
#define endl '\n'
#define ll long long
#define mod 1000000007

void solve(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i = 0;i<n;i++)cin>>arr[i];
    ll n = 12164510040883200;
    for(int i = 2;i*i<=n;i++){
        while(n % i == 0){
            cout<<i<<" ";
            n /= i;
        }cout<<endl;
    }
    if(n > 1){
        cout<<n<<endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    } 
    return 0;
}