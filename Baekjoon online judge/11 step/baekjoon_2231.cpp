//Question URL: https://www.acmicpc.net/problem/2231
#include <iostream>
using namespace std;

int main(){
	int n,temp, sum = 0, min = 2147000000;
	cin>>n;
	for(int i = 0; i<n; i++){
		temp = i;
		sum = i;
		while(temp != 0){
			sum+= temp %10;
			temp = temp/10;
		}
		if(sum == n && sum < min)
			min = i;
	}
	if(min == 2147000000)
		cout<<'0';
	else
		cout<<min;
	return 0;
}

