#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,cnt=0, dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1}, pos;
	cin>>n;
	vector < vector<int> > a (n+2,vector <int> (n+2,0));
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			for(int k = 0; k<4; k++){
				if(a[i][j]<=a[i+dx[k]][j+dy[k]]) {
					pos = 0;
					break;
				}
				else pos = 1;
			}
			if(pos) cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
