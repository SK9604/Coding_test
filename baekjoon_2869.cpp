// Question URL: https://www.acmicpc.net/problem/2869
#include <iostream>
using namespace std;

int main() {
	int a,b,v,day = 0;
	cin>>a>>b>>v;
	if(((v-b)%(a-b))==0)
		day = (v-b)/(a-b);
	else
		day = (v-b)/(a-b)+1;
	cout<<day;
	return 0;
}
