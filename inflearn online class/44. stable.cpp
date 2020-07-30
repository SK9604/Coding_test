#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, c, sum = 0, lt = 1, rt, mid, pos, cnt, res;
	cin>>n>>c;
	vector <int> m(n);
	for(int i = 0; i<n; i++){
		cin>>m[i];
	}
	sort(m.begin(), m.end());
	while(lt<=rt){
		mid = (lt+rt)/2;
		cnt = 1, pos = m[0];
		for(int i = 1; i<n; i++){
			if(m[i]-pos>=mid){
				cnt++;
				pos = m[i];
			}
		}
		if(cnt >= c){
			res = mid;
			lt = mid+1;
		}
		else rt = mid-1;
	}
	cout<<res;
	
	return 0;
}
