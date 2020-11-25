#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    string s;
    int arr[26] = {0};
    for(int i = 0;i<n;i++){
        cin>>s;
        for(int j = 0;j<s.size();j++){
            arr[s[j] - 'a'] ++;
        }
    }
    for(int i = 0;i<26;i++){
        if(arr[i] % n != 0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}