#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, j, sum = 0, cnt = 0, scnt = 0;
	cin>>n;
	for(int i = n; i>0; i--){
		sum+=i;
		cnt++;
		if(cnt>1 && sum == n){
			for(j = 0; j<cnt-1; j++){
				cout<<i+j<<" + ";
			}
			cout<<i+j<<" = "<<n<<"\n";
			i = i+cnt-1;
			sum = 0;
			cnt = 0;
			
			scnt++;
		}
		else if(cnt<=1 && sum == n){
			cnt = 0;
			sum = 0;
		}
		else if(sum>n){
			i = i+cnt-1;
			cnt = 0;
			sum = 0;
		}
		else continue;
	}
	cout<<scnt;
	return 0;
}
