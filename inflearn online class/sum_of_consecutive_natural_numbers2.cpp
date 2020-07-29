#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, i, tmp, cnt = 0, t = 1;
	cin>>n;
	tmp = n;
	n--;
	while(n>0){
		t++;
		n = n-t;
		if(n%t == 0){
			for(i = 1; i<t; i++){
				cout<<(n/t)+i<<" + ";
			}
			cout<<(n/t)+i<<" = "<<tmp<<'\n';
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
