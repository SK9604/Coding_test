#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int s,n,a,tmp;
	bool isnew;
	cin>>s>>n;
	vector <int> cache(s);
	for(int i = 0; i<n; i++){
		cin>>a;
		for(int j = 0; j<s; j++){
			if(a==cache[j]){
				isnew = false;
				tmp = j;
			}
		}
		if(isnew){
			for(int j = s-1; j>0; j--){
				cache[j] = cache[j-1];
			}
		}
		else{
			for(int j = tmp; j>0; j--){
				cache[j] = cache[j-1];
			}
		}
		cache[0] = a;
		isnew = true;
	}
	for(int i = 0; i<s; i++){
		cout<<cache[i]<<' ';
	}
	return 0;
}
