// Question URL: https://www.acmicpc.net/problem/10250
#include <iostream>
using namespace std;

int main() {
	int t,h,w,n,hi,wi;
	cin>>t;
	for(int i = 0; i<t; i++){
		cin>>h>>w>>n;
		for(wi = 1; wi<=w; wi++){
			for(hi = 1; hi<=h; hi++){
				n--;
				if(n == 0) break;	
			}
			if(n==0) break;
		}
		if(wi<10) cout<<hi<<'0'<<wi<<'\n';
		else cout<<hi<<wi<<'\n';
		
	}
	return 0;
}
