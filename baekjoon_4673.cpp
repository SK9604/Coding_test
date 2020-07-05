// Question URL: https://www.acmicpc.net/source/4673
#include <iostream>
#include <vector>
using namespace std;

void d(int n, bool* arr)
{
	int dn = n; 
	while(n!=0){ 
		dn +=n%10;  
		n/=10;
	}
	if(dn<=10000){  
		arr[dn-1]=1;
		d(dn,arr);
	}
}
int main() 
{
	//freopen("input.txt","rt", stdin);
	bool arr[10000]={0};
	for(int i = 0; i<10000; i++){
		d(i+1,arr);	
	}
	for(int i = 0; i<10000; i++){
		if(arr[i]!=1){
			cout<<i+1<<'\n';
		}
	}
	return 0;
}
