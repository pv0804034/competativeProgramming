#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	unordered_map<int,vector<int> > list;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
		if(list.find(arr[i]) != list.end()){
			list[arr[i]].push_back(i);
		}else{
			vector<int> vec;
			list.insert(make_pair(arr[i],vec));
			list[arr[i]].push_back(i);
		}
	}
	if(list.size() >= k){
		vector<int> ans;
		for(auto it = list.begin(); it!= list.end();it++){
			k--;
			ans.push_back(it -> second[0]);
			if(k == 0)break;
		}
		sort(ans.begin(),ans.end());
		cout<<"YES"<<endl;
		for(int i = 0;i<ans.size();i++)cout<<ans[i]+1<<" ";
	}else{
		cout<<"NO";
	}
	return 0;
}