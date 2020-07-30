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
