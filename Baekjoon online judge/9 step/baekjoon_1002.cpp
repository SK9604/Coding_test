//Question URL : https://www.acmicpc.net/problem/1002
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int t, x1, y1, r1, x2, y2, r2;
	cin>>t;
	for(int i = 0; i<t; i++){
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		double dis = sqrt(pow(x1-x2,2) + pow(y1-y2,2)); //Áß¾Ó°ú Áß¾Ó »çÀÌ °Å¸®
		double sum = r1+r2;
		double diff = abs(r1-r2);
		if(dis == 0){
			if(diff == 0) cout<<"-1\n";
			else cout<<"0\n";
		}
		else if( dis == sum || dis == diff){
			cout<<"1\n";
		}
		else if( dis < sum && dis > diff){
			cout<<"2\n";
		}
		else cout<<"0\n";
	}
	return 0;
}

