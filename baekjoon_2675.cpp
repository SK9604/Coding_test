#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t,r;
	char s;
	string ss;
	cin>>t;
	for(int i = 0; i<t; i++){
		cin>>r;
		while(1){
			cin.get(s);
			if(s == '\n') break;
			if(s==' ') continue;
			for(int j = 0; j<r; j++){
				ss+=s;
			}
		}
		ss+="\n";
	}
	cout<<ss;
	
	return 0;
}
