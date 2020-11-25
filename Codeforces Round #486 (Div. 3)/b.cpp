#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
 
using namespace std;
 
void fastIO(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
 
bool comp(string s,string t){
    if(s.size() < t.size())return true;
    return false;
}
 
void solve(){
    int n;
    cin>>n;
    string s;
    vector<string> vec;
    for(int i = 0;i<n;i++){
        cin>>s;
        vec.push_back(s);
    }
    sort(vec.begin(),vec.end(),comp);
    for(int i = 1;i<n;i++){
        if(vec[i].size() == vec[i-1].size() && vec[i] != vec[i-1]){
            cout<<"NO";
            return;
        }
    }
    bool ok = true;
    for(int i = 1;i<n;i++){
        size_t pos = vec[i].find(vec[i-1]);
        if(pos == string::npos){
            ok = false;
            break;
        }
    }
    if(ok){
        cout<<"YES"<<endl;
        for(int i = 0;i<n;i++){
            cout<<vec[i]<<endl;
        }
    }else{
        cout<<"NO";
    }
 
}
 
int main(){
    fastIO();
    solve();    
    return 0;
}