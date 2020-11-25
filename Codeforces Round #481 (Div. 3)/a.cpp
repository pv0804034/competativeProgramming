#include <iostream>
#include <vector>
#include <unordered_set>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	unordered_set<int> set;
	vector<int> ans;
	for(int i = n-1;i>=0;i--){
		if(set.find(arr[i]) == set.end()){
			set.insert(arr[i]);
			ans.push_back(arr[i]);
		}
	}
	cout<<ans.size()<<endl;
	for(int i = ans.size()-1;i>=0;i--){
		cout<<ans[i]<<" ";
	}
	return 0;
}