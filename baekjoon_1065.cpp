//문제 URL : https://www.acmicpc.net/problem/1065
#include <iostream>
using namespace std;
int hansu(int n){  //한수 구하기(각 자리 숫자가 등차수열을 이루는 수
	int o,t,h;
	if(n<=99) return 1;       // 2자리 수 까지 모두 한수이다
	else if(n==1000) return 0;//1000은 한수가 아니다
	else{                     // 3자리 수 인 경우
		while(n!=0){
		o = n%10;
		t = n/10%10;
		h = n/100;
		if(o-t == t-h) return 1; // 3-2자리 수의 차, 2-1자리 수의 차가 같은 경우= 한수
		else return 0;
		}
	}
	
}
int main() {
	int n,cnt=0;
	cin>>n;
	for(int i = 1; i<=n; i++) {
		cnt+=hansu(i);
	}
	cout<<cnt;
	return 0;
}
