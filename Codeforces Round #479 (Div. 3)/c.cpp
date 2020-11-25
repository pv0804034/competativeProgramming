#include <bits/stdc++.h>

#define ll long long
 
using namespace std;
 
void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    if(k == n){
        cout<<arr[n-1];
    }else if(k == 0){
        if(arr[0] == 1){
            cout<<-1;
        }else{
            cout<<1;
        }
    }else{
        k--;
        if(arr[k] == arr[k+1]){
            cout<<-1;
        }else{
            cout<<arr[k];
        }
    }
 
}
 
int main(){
    int t = 1;
    while(t--)
        solve();
    return 0;
}