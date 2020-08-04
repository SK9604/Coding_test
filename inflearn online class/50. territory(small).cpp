#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int h,w,hh,hw,sum,max=-2147000000;
	cin>>h>>w;
	vector <vector <int> > tree (h, vector <int> (w));
	for(int i =0; i<h; i++){
		for(int j = 0; j<w; j++){
			cin>>tree[i][j];
		}
	}
	cin>>hh>>hw;
	for(int i = 0; i<h-hh+1; i++){
		for(int j = 0; j<w-hw+1; j++){
			sum = 0;
			for(int x = i; x<i+hh; x++){
				for(int y = j; y<j+hw; y++){
					sum+=tree[x][y];
				}
			}
			if(max<sum){
				max = sum;
			}
		}
	}
	cout<<max;
	return 0;
}
