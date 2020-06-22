#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt","rt", stdin);
	int n,age;
	int max = 0,min=100;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>age;
		if(age>=max) max = age;
		if(age<=min) min = age;
	}
	cout<<max-min;
	return 0;
}
