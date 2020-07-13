#include <iostream>
using namespace std;

int main() {
	int i,n,k,max = -214000000,sum = 0;
	cin>>n>>k;
	int temp[n];
	for(i = 0; i<n; i++){
		cin>>temp[i];
	}
	for(i = 0; i<k; i++){
		sum+=temp[i];
		max = sum;
	}
	for(i = k; i<n; i++){
		sum+=temp[i]-temp[i-k];
		if(sum>max) max = sum;
	}
	cout<<max;
	return 0;
}
