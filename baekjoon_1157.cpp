#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char s,out;
	int max = -1;
	int alphabet[26]={0};
	while(1){
		cin.get(s);
		if(s=='\n')break;
		if((int)s>=97 and (int)s<=122)
			s -=32;
		alphabet[(int)s-'A']++;		
	}
	for(int i = 0; i<26; i++){
		int temp;
		if(alphabet[i]>max) {
			max = alphabet[i];
			temp = i;
			out = i+'A';
		}
		if(alphabet[i]==max and temp != i) out = '?';  
	}
	cout<<out;
	return 0;
}
