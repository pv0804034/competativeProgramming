#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
void solve(){
    map<string,int> mp;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0;i<n-1;i++){
        mp[s.substr(i,2)]++;
    }
    vector<pair<int,string> > vec;
    for(auto it = mp.begin();it != mp.end();it++){
        vec.push_back(make_pair(it->second,it->first));
    }
    sort(vec.begin(),vec.end());
    cout<<vec[vec.size()-1].second;
}
 
int main(){
    int t = 1;
    while(t--)
        solve();
    return 0;
}