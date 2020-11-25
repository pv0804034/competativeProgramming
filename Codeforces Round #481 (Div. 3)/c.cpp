#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define pb push_back
#define mod 1000000007

void solve(){
    int n, k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(auto &a:arr)cin>>a;
    for(int i = 1;i<n;i++){
        arr[i] += arr[i-1];
    }
    ll val;
    while(k--){
        cin>>val;
        int l = 0,r = n-1;
        while(l<r){
            int mid = (l+r)/2;
            if(arr[mid] >= val){
                r = mid;
            }else{
                l = mid+1;
            }
        }
        cout<<r+1<<" ";
        if(r == 0){
            cout<<val<<endl;
        }else{
            cout<<val-arr[r-1]<<endl;
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    while(t--)
        solve();
    return 0;
}