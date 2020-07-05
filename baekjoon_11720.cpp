// Question URL: https://www.acmicpc.net/source/11720
#include <iostream>
using namespace std;

int main() {
	int n,sum=0;
	char s;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>s;
		int t = s-'0';
		sum+=t;
	}
	cout<<sum;
	
	return 0;
}
