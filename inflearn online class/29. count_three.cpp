#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,cnt = 0;
	cin>>n;
	for(int i = 1; i<=n; i++){
		int tmp = i;
		while(tmp>1){
			if(tmp%10==3) cnt++;
			tmp/=10;
		}
	}
	cout<<cnt;
	return 0;
}
