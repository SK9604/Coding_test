/*
문자와 숫자가 섞여있는 문자열이 주어지면 그 중 숫자만 추출하여 그 순서대로 자연수를 만
듭니다. 만들어진 자연수와 그 자연수의 약수 개수를 출력합니다.
만약 “t0e0a1c2her”에서 숫자만 추출하면 0, 0, 1, 2이고 이것을 자연수를 만들면 12가 됩니
다. 즉 첫 자리 0은 자연수화 할 때 무시합니다. 출력은 12를 출력하고, 다음 줄에 12의 약
수의 개수를 출력하면 됩니다.
추출하여 만들어지는 자연수는 100,000,000을 넘지 않습니다.
*/
#include <iostream>
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
