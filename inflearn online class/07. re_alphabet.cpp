#include <iostream>
using namespace std;

int main() {
	string input,output;
	getline(cin, input);
	for(int i = 0; i<input.size(); i++){
		if(input[i]==' ') continue;
		else if(input[i]>='a' && input[i]<='z') output+=input[i];
		else if(input[i]>='A' && input[i]<='Z') output+=input[i]-'A'+'a';
	}
	cout<<output;
	return 0;
}
