// Question URL: https://www.acmicpc.net/source/3052
#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt","rt", stdin);
	int n,i,cnt=0;
	int arr[42]={0};
	for(i = 0; i<10;i++){
		cin>>n;
		arr[n%42]++;
	}
	for(i=0;i<42;i++){
		if(arr[i]>0) cnt++;
	}
	cout<<cnt;
	return 0;
}
