/*
문제 : N개의 자연수가 입력되면 각 자연수의 자릿수의 합을 구하고, 그 합이 최대인 자연수를 출력
하는 프로그램을 작성하세요. 각 자연수의 자릿수의 합을 구하는 함수를 int digit_sum(int x)를
꼭 작성해서 프로그래밍 하세요.
*/
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
