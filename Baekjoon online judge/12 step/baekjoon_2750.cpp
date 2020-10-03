#include <iostream>
#include <vector>
using namespace std;

vector <int> sort(vector <int> ans){
	for(int i =0; i<ans.size(); i++){
		for(int j = i; j<ans.size(); j++){
			if(ans[i]>ans[j]){
				int tmp = ans[i];
				ans[i] = ans[j];
				ans[j] = tmp;
			}
		}
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	vector<int> ans(n);
	for(int i = 0; i<n; i++){
		cin>>ans[i];
	}
	ans = sort(ans);
	for(int i = 0; i<n; i++){
		cout<<ans[i]<<'\n';
	}
}