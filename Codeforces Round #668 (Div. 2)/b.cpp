#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define mod  18014398777917439

using namespace std;

void solve(){
    string s,t;
    cin>>s>>t;
    int n = s.size();
    vector<int> arr(n);
    for(auto &a:arr)cin>>a;
    int l = 0,r = n;
    while(l < r){
        int mid = (l+r) / 2;
        string temp = s;
        for(int i = 0;i<mid;i++){
            temp.erase(arr[i] - 1,1);
        }
        if(find(temp,t)){
            l = mid;
        }else{
            
        }
    }
}
 
int main(){
    int t = 1;
    while(t--)
        solve();
    return 0;
}