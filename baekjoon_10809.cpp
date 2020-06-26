#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char s;
	int Alphabet[26];
	memset(Alphabet, -1, sizeof(Alphabet));
	int lo = 0;
	while(1){
		cin.get(s);
		if(s=='\n') {
			break;
		}
		if(Alphabet[(int)s-'a']==-1)
			Alphabet[(int)s-'a']=lo;
		lo++;
	}
	for(int i = 0; i<26; i++){
		cout<<Alphabet[i]<<' ';
	}
	return 0;
}
