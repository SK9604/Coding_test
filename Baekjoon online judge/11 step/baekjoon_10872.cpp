//Question URL : https://www.acmicpc.net/problem/10872
#include <iostream>
using namespace std;
int fac(int n){
	if(n == 1) return n;
	else if(n==0) return 1;
	else return n*fac(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<fac(n);
	return 0;
}

