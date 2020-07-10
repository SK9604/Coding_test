// Question URL: https://www.acmicpc.net/source/2908
#include <iostream>
using namespace std;

int Digits(int n){ // 각 자리 수 별로 나눠 숫자 재조합
	int one = n%10;
	int ten = n/10%10;
	int hundred = n/100;
	return one*100+ten*10+hundred; 
}
int main() {  // 두 개의 세자리 수를 받아 좌우 반전 한 후 더 큰 값을 출력
	int a,b,at,bt;
	cin>>a>>b;
	at = Digits(a);
	bt = Digits(b);
	if(at>=bt) cout<<at;
	else cout<<bt;
	return 0;
}
