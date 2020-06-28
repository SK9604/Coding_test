// 문제 URL: https://www.acmicpc.net/problem/1712
#include <iostream>
using namespace std;

int main() {
	double a,b,c;
	cin>>a>>b>>c;
	int x = a/(c-b);
	if(c-b <= 0) cout<<-1;
	else cout<<x+1;
	return 0;
}
