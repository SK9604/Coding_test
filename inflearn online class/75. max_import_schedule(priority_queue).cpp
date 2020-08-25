#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
using namespace std;

struct Data{
	int money;
	int when;
	Data(int a, int b){
		money = a;
		when = b;
	}
	bool operator<(Data &b){ // 구조체 정렬 
		return when>b.when;
	}
};

int main() {
	int n,m,d,res = 0, max = -2147000000;
	vector<Data> T;
	priority_queue<int> pQ;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>m>>d;
		T.push_back(Data(m,d));
		if(d>max) max = d;
	}
	sort(T.begin(), T.end());
	int j = 0;
	for(int i = max; i>=1; i--){
		for(;j<n;j++){
			if(T[j].when<i) break;
			pQ.push(T[j].money);
		}
		if(!pQ.empty()){
			res+=pQ.top();
			pQ.pop();
		}
	}
	cout<<res;
	return 0;
}
