#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, f, t, sc=0, fc=0;
	cin>>n;
	for(int i = 2; i<=n; i++){
		f = 2;
		t = i;
		while(1){
			if(t%f==0){
				if(f == 2) sc++;
				else if(f == 5) fc++;
				t/=f;
			}
			else if(f<5) f++;
			else break;
		}		
	}
	if(sc<fc) cout<<sc;
	else cout<<fc;
	return 0;
}
