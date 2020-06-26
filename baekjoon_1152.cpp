#include <iostream>
using namespace std;

int main() {
	char n; string s;
	int cnt = 0;
	while(1){
		cin.get(n);
		s+=n;
		if(n=='\n')break;
	}
	for(int i = 0 ; i<s.length(); i++){
		if(s[i]==' ' and i!=0 or s[i]=='\n'){
			if(s[i-1]!=' ') cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
