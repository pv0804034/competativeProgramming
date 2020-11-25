#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
 
using namespace std;
 
void fastIO(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
 
bool comp(pair<vector<int>,ll> a,pair<vector<int>,ll> b){
    return a.second < b.second;
}
 
void solve(){
    int k;
    cin>>k;
    vector<pair<int,pair<int,int> > > vec;
    for(int i = 0;i<k;i++){
        int n;
        cin>>n;
        vector<int> v(n);
        ll sum = 0;
        for(int j = 0;j<n;j++){
            cin>>v[j];
            sum += v[j];
        }
        for(int j = 0;j<n;j++){
            vec.push_back(make_pair(sum - v[j],make_pair(i,j)));
        }
    }
    sort(vec.begin(),vec.end());
    for(int i = 0;i<vec.size()-1;i++){
        if(vec[i].first == vec[i+1].first && (vec[i].second.first != vec[i+1].second.first)){
            cout<<"YES"<<endl;
            cout<<vec[i].second.first+1<<" "<<vec[i].second.second+1<<endl;
            cout<<vec[i+1].second.first+1<<" "<<vec[i+1].second.second+1<<endl;
            return;
        }
    }
    cout<<"NO";
}
 
int main(){
    fastIO();
    solve();    
    return 0;
}