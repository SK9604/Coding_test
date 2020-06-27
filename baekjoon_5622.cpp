#include <iostream>
using namespace std;

int main() {
	string dial[8] = {"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
	string input;
	int cnt = 0;
	cin>>input;
	for(int i = 0; i<input.length();i++){
		for(int j = 0; j<8;j++){
			for(int t = 0; t<dial[j].length();t++){
				if(input[i]==dial[j][t]) {
					cnt+=j+3;
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}
