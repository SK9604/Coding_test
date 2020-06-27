#include <iostream>
using namespace std;

int main() {
	int cnt = 0;
	string input;
	cin>>input;
	for(int i = 0; i<input.length();i++){
		if(input[i]=='d' && input[i+1]=='z' && input[i+2]=='=') cnt--;
		else if(input[i] == '-' || input[i]=='=') cnt--;
		else if(input[i] == 'n' || input[i]=='l'){
			if(input[i+1]== 'j') cnt--;
		}
		cnt++;
	}
	cout<<cnt;
	return 0;
}
