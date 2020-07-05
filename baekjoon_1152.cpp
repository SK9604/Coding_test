// Question URL: https://www.acmicpc.net/source/1152
#include <iostream>
using namespace std;

int main() { //문자열을 입력받아 문자열에 포함된 문자의 개수 구하기
	char n; string s;
	int cnt = 0;
	while(1){
		cin.get(n); //공백 문자포함 받기
		s+=n;
		if(n=='\n')break;
	}
	for(int i = 0 ; i<s.length(); i++){
		if(s[i]==' ' and i!=0 or s[i]=='\n'){ //첫번째자리 제외 공백문자인 경우, 엔터가 입력 된 경우
			if(s[i-1]!=' ') cnt++; // 공백문자 전 자리가 공백이 아닌경우 단어 갯수+1
		}
	}
	cout<<cnt;
	return 0;
}
