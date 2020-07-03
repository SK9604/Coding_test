#include <iostream>
#include <math.h>
using namespace std;

int main() {
	string input,number;
	int num=0, div=0;
	cin>>input;
	for(int i = 0; i<input.size(); i++){
		if((int)input[i]-'0'>=0 && (int)input[i]-'0'<=9){
			num = num * 10 + (int)(input[i]-'0');
		}
	}
	for(int i =1; i<=num; i++){
		if(num%i==0) div++;
	}
	cout<<num<<'\n'<<div;
	return 0;
}
