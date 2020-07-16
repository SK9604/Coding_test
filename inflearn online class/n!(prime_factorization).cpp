#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> ch(n+1);
	for(int i = 2; i<=n; i++){
		int temp = i;
		int j = 2;
		while(1){
			if(temp%j == 0) {
				temp/=j;
				ch[j]++;
			}
			else j++;
			if(temp == 1) break;
		}
		
	}
	cout<<n<<"! = ";
	for(int i = 0; i<=n; i++){
		if(ch[i]!=0) cout<<ch[i]<<' ';
	}
	return 0;
}
