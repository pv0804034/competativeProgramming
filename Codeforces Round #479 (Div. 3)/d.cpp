#include <bits/stdc++.h>

#define ll long long
 
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    set<ll> st;
    ll x;
    int cnt3 = 0;
    for(int i = 0;i<n;i++){
        cin>>x;
        st.insert(x);
        if(x % 3 == 0)cnt3++;
    }
    if(cnt3 == 0){
        for(auto it:st){
            cout<<it<<" ";
        }
    }else{
        vector<ll> ans;
        for(auto it:st){
            ans.push_back(it);
            ll val = it;
            while(true){
                if(val % 3 == 0 && st.count(val/3)){
                    val /= 3;
                    ans.push_back(val);
                }else if(st.count(val*2)){
                    val *= 2;
                    ans.push_back(val);
                }else{
                    ans.clear();
                    break;
                }
                if((int)ans.size() == n)break;
            }
            if((int) ans.size() == n)break;
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
    }
}
 
int main(){
    int t = 1;
    while(t--)
        solve();
    return 0;
}