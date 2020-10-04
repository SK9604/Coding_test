#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> ans(n);
	for(int i = 0; i<n; i++){
		cin>>ans[i];
	}
	sort(ans.begin(), ans.end());
	for(int i = 0; i<n; i++){
		cout<<ans[i]<<'\n';
	}
	return 0;
}