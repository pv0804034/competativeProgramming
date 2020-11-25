#include <bits/stdc++.h>

#define ll long long
 
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    while(k){
        if(n % 10 == 0){
            n /= 10;
        }else{
            n -= 1;
        }
        k--;
    }
    cout<<n;
}
 
int main(){
    int t = 1;
    while(t--)
        solve();
    return 0;
}