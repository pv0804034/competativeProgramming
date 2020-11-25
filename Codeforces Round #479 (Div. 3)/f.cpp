#include <bits/stdc++.h>

#define ll long long
#define mx 200005

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto & a : arr)cin>>a;
    map<int,int> dp;
    int ans = 0;
    int last = 0;
    for(int i = 0;i<n;i++){
        int x = arr[i];
        dp[x] = dp[x-1]+1;
        if(ans < dp[x]){
            ans = dp[x];
            last = x;
        }
    }
    vector<int> result;
    for(int i = n-1;i>=0;i--){
        if(arr[i] == last){
            result.push_back(i+1);
            last --;
        }
    }
    reverse(result.begin(),result.end());
    cout<<ans<<endl;
    for(auto it:result){
        cout<<it<<" ";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while(t--)
        solve();
    return 0;
}