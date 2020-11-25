#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define pb push_back
#define mod 1000000007
 
int f(string s){
    for(int i = 0;i<s.size()-2;i++){
        if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x'){
            return i;
        }
    }
    return -1;
}
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    int pos = f(s);
    while(pos != -1){
        ans ++;
        s.erase(pos,1);
        pos = f(s);
    }
    cout<<ans;
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    while(t--)
        solve();
    return 0;
}