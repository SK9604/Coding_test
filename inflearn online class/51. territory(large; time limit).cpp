#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int h,w,hh,hw,sum,max=-2147000000;
	cin>>h>>w;
	vector <vector <int> > tree (h+1, vector <int> (w+1));
	vector <vector <int> > dy (h+1, vector <int> (w+1));
	for(int i =1; i<=h; i++){
		for(int j = 1; j<=w; j++){
			cin>>tree[i][j];
			dy[i][j] = dy[i][j-1]+dy[i-1][j]-dy[i-1][j-1]+tree[i][j];
		}
	}
	cin>>hh>>hw;
	for(int i = hh; i<=h; i++){
		for(int j = hw; j<=w; j++){
			int tmp = dy[i][j] - dy[i-hh][j] - dy[i][j-hw] + dy[i-hh][j-hw];
			if(tmp>max) max = tmp;
		}
	}
	cout<<max;
	return 0;
}
