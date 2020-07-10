// Question URL: https://www.acmicpc.net/problem/2839
#include <iostream>
using namespace std;

int main() {
	int n, a, min = 5000;
	cin>>n;
	for(int i = 0; i<=n/5;i++){
		for(int j =0; j<=n/3; j++){
			if(5*i+3*j == n){
				if(i+j<min){
					min = i+j;
				}
			}			
		}
	}
	if(min==5000) cout<<-1;
	else cout<<min;
	
	return 0;
}
