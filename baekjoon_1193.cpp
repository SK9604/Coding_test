// Question URL: https://www.acmicpc.net/problem/1193
#include <iostream>
using namespace std;

int main() {
	int n,cnt = 1, i = 2;
	int x=1,y=1;
	cin>>n;
	for(int t = 0 ; t<n; t++){
		if(n==1) break;
		else if(x == 1 && y != i){
			y++; cnt++;
		}
		else if(y == 1 && x != i){
			x++; cnt++;
		}
		else if(x == 1 && y == i){
			for(int j = 1; j<i; j++){
				x++; y--; cnt++;
				if(cnt == n) break;
			}
			i++;
		}
		else if(y == 1 && x == i){
			for(int j = 1; j<i; j++){
				y++; x--; cnt++;
				if(cnt == n) break;
			}
			i++;
		}
		if(n==cnt) break;
	}
	cout<<x<<'/'<<y;
	return 0;
}
