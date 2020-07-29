#include <iostream>
using namespace std;

int main() {
	int n;
	char res;
	cin>>n;
	int a[n], b[n];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	for(int i = 0; i<n; i++){
		cin>>b[i];
	}
	for(int i = 0; i<n; i++){
		if(a[i]==b[i]) res ='D';
		else if(a[i]==1 && b[i]==3 || a[i]==2 && b[i]==1 || a[i]==3 && b[i]==2) res = 'A';
		else res = 'B';
		cout<<res<<'\n';
	}
	return 0;
}
