#include <iostream>
using namespace std;

int Digits(int n){
	int one = n%10;
	int ten = n/10%10;
	int hundred = n/100;
	return one*100+ten*10+hundred;
}
int main() {
	int a,b,at,bt;
	cin>>a>>b;
	at = Digits(a);
	bt = Digits(b);
	if(at>=bt) cout<<at;
	else cout<<bt;
	return 0;
}
