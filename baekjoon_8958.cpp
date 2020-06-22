#include <iostream>
using namespace std;
int fn(char c[]){
	int g=0,sum=0;
	for(int i = 0; i<80; i++){
		if (c[i]=='O'){
			g++;
			sum+=g;
		}
		else if (c[i]=='X') g =0;
		else break;
	}
	return sum;
}
int main() {
	//freopen("input.txt","rt", stdin);
	int n;
	cin>>n;
	int sum[n];
	char c[80];
	for(int i=0; i<n;i++){
		cin>>c;
		sum[i]=fn(c);
	}
	for(int i = 0; i<n; i++){
		cout<<sum[i]<<'\n';
	}
	return 0;
}

