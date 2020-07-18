#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, lt=1, cur, rt, k=1, cnt = 0;
	cin>>n;//5367
	while(lt!=0){
		lt = n/(k*10);
		cur = (n/k)%10;
		rt = n%k;
		if(cur>3){
			cnt+=((lt+1)*k);
		}
		else if(cur == 3){
			cnt+=((lt*k)+(rt+1));
		}
		else if(cur<3){
			cnt+=(lt*k);
		}
		k *= 10;
	}
	cout<<cnt;
	return 0;
}
