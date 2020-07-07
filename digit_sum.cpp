#include <iostream>
using namespace std;

int digit_sum(int x){
	int sum = 0;
	while(1){
		sum += x % 10;
		x = x / 10;
		if(x < 1) break;
	}
	return sum;
}

int main() {
	int n, num, max = 0, maxs = 0;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>num;
		int sum = digit_sum(num);
		if(maxs < sum) {
			maxs = sum;
			max = num;
		}
		else if(sum == maxs){
			if(num>max) max = num;
		}
	}
	cout<<max;
	return 0;
}
