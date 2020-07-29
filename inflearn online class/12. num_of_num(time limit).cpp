#include <iostream>
using namespace std;

int main() {
	int n, sum = 0, cnt = 1, d = 9, res = 0;
	cin>>n;
	while(sum+d<n){
		res += (cnt*d);
		sum+=d;
		cnt++;
		d *= 10;
	}
	res += ((n-sum) * cnt);
	cout<<res;
	return 0;
}
 
