/*
문제 : 괄호가 입력되면 올바른 괄호이면 “YES", 올바르지 않으면 ”NO"를 출력합니다.
(())() 이것은 괄호의 쌍이 올바르게 위치하는 거지만, (()()))은 올바른 괄호가 아니다.
*/
#include <iostream>
using namespace std;

int main() {
	string input;
	int cnt;
	cin>>input;
	for(int i = 0; i<input.size(); i++){
		if(input[i] == '(') cnt++;
		else if(input[i] == ')') cnt--;
		if(cnt<0) break;
	}
	if(cnt==0) cout<<"YES";
	else cout<<"NO";
	return 0;
}
