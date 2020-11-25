#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007
#define endl '\n'

int c = 0;
int mx = 10001;
vector<int> graph[mx];
bool visited[mx];
set<int> st;

void dfs(int src){
    visited[src] = true;
    for(auto dest:graph[src]){
        if(!visited[dest]){
            if(!st.count(dest))c++;
            dfs(dest);
        }
    }
}

void solve(){
    int n,f,s;
    cin>>n>>f>>s;
    int x,y;
    for(int i = 0;i<f;i++){
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int ans = 0;
	for(int i = 0;i<s;i++){
		cin>>x;
		st.insert(x);
	}
	for(auto it:st){
		dfs(it);
		ans += c;
		c = 0;
	}
    cout<<ans<<endl;
	st.clear();
	for(int i = 0;i<mx;i++)visited[i] = false;
	for(int i = 0;i<mx;i++)graph[i].clear();
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