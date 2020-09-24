//Question URL : https://www.acmicpc.net/problem/10870
#include <iostream>
using namespace std;
int fi[21];
int fibo(int n){
	 if(n == 0) return fi[n];
	 else if(fi[n]!=0){
	 	return fi[n];
	 }
	 else{
	 	return fibo(n-1)+fibo(n-2);
	 } 
}
int main(){
	int n;
	cin>>n;
	fi[0] = 0;
	fi[1] = 1;
	cout<<fibo(n);
	return 0;
}

