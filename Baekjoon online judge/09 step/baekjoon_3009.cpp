//Question URL : https://www.acmicpc.net/problem/3009
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int x, y;
	vector<int> xx(1000);
	vector<int> yy(1000);
	for(int i = 0; i<3; i++){
		cin>>x>>y;
		xx[x]++;
		yy[y]++;
	}
	for(int i = 0; i<xx.size(); i++){
		if(xx[i] == 1) x = i;
		if(yy[i] == 1) y = i;
	}
	cout<<x<<' '<<y;
	
	return 0;
}

