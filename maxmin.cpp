/*
문제 : N(2<=N<=100)명의 나이가 입력됩니다. 이 N명의 사람 중 가장 나이차이가 많이 나는 경우는
몇 살일까요? 최대 나이 차이를 출력하는 프로그램을 작성하세요.
*/
#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt","rt", stdin);
	int n,age;
	int max = 0,min=100;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>age;
		if(age>=max) max = age;
		if(age<=min) min = age;
	}
	cout<<max-min;
	return 0;
}
