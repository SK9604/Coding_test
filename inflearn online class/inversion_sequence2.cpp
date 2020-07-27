#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,cnt;
	cin>>n;
	vector <int> is(n), res(n);
	for(int i = 0; i<n; i++){
		cin>>is[i];
	}
	for(int i = n; i>=1; i--){
		int pos = i-1;
		for(int j = 0; j<is[i-1]; j++){
			res[pos] = res[pos+1];
			pos++;
		}
		res[pos] = i;
	}
	/*
	���� �������� inversion sequence�� �����ϴ� �ڵ� 
	for(int i = 1; i<=n; i++){
		cnt=0;
		for(int j = 0; j<n; j++){
			if(i < is[j]){
				cnt++;
			}
			else if(i == is[j]){
				res[i-1] = cnt;
				break;
			}
			else continue;
		}
	}
	*/
	for(int i = 0; i<n; i++){
		cout<<res[i]<<' ';
	}
	return 0;
}
