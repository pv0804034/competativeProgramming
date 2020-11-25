#include <bits/stdc++.h>

#define ll long long
#define mx 200005

using namespace std;
 
vector<int> graph[mx+1];
bool visited[mx+1];
vector<int> degree(mx+1);
vector<int> comp;

void dfs(int src){
    visited[src] = true;
    comp.push_back(src);
    for(auto dest:graph[src]){
        if(!visited[dest])dfs(dest);
    }
}

void solve(){
    int n,m;
    cin>>n>>m;
    int x,y;
    for(int i = 0;i<m;i++){
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
        degree[x]++;
        degree[y]++;
    }
    int ans = 0;
    for(int i = 1;i<=n;i++){
        if(!visited[i]){
            comp.clear();
            dfs(i);
            bool ok = true;
            for(auto it:comp){
                if(degree[it] != 2){
                    ok = false;
                    break;
                }
            }
            if(ok)ans++;
        }
    }
    cout<<ans;
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