#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt","rt", stdin);
	int n, m =-1;
	cin>>n;
	double s[n],avg=0;
	for(int i = 0; i<n; i++){
		cin>>s[i];
		if(m<s[i])m=s[i];
	}
	for(int i = 0; i<n; i++){
		s[i]=s[i]/m*100;
		avg+=s[i];
	}
	cout<<avg/n;
	return 0;
}
