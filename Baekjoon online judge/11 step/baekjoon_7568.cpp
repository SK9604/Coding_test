//Question URL: https://www.acmicpc.net/problem/7568
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, x, y;
	vector<pair<int,int> > p;
	cin>>n;
	vector<int> ans(n,1);
	for(int i = 0; i<n; i++){
		cin>>x>>y;
		p.push_back(make_pair(x,y));
	}
	for(int i = 0; i<p.size(); i++){
		for(int j = 0; j<p.size(); j++){
			if(p[i].first<p[j].first && p[i].second<p[j].second)
				ans[i]++;
		}
	}
	for(int i = 0; i<ans.size(); i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}

