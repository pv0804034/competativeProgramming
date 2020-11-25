#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007
#define endl '\n'


void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> ans(n);
    int d = y - x;
    ans[0] = x;
    for(int i = 1;i<n;i++){
        ans[i] = ans[i-1] + d;
    }
    for(int i = 1;i<=x;i++){
        for(int j = 1;j<=50;j++){
            set<int> st;
            int a = n-1;
            int val = i;
            st.insert(val);
            while(a--){
                val += j;
                st.insert(val);
            }
            if(st.count(x) && st.count(y)){
                auto it = st.end();
                it --;
                if(*it < ans[n-1]){
                    int c = 0;
                    for(auto it:st){
                        ans[c] = it;
                        c++;
                    }
                }
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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