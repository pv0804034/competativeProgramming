#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
 
using namespace std;
 
void fastIO(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
 
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &a : arr)cin>>a;
    if(n == 1){
        cout<<"1 1"<<endl<<0<<endl;
        cout<<"1 1"<<endl<<0<<endl;
        cout<<"1 1"<<endl<<-arr[0]<<endl;
        return;
    }
    cout<<"1 1"<<endl<<-arr[0]<<endl;
    arr[0] = 0;
    cout<<1<<" "<<n<<endl;
    for(int i = 0;i<n;i++){
        cout<<-arr[i] * n<< " ";
    }cout<<endl;
    cout<<2<<" "<<n<<endl;
    for(int i = 1;i<n;i++){
        cout<<arr[i] * (n-1)<<" ";
    }
}
 
int main(){
    //fastIO();
    solve();    
    return 0;
}