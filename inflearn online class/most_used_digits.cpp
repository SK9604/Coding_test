#include <iostream>
using namespace std;

int main() {
	int t, d[10]={0}, max = 0, res;
	string n;
	cin>>n;
	for(int i = 0; i<n.size(); i++){
		d[(int)(n[i]-'0')]++;
	}
	for(int i = 0; i<10; i++){
		if(max<=d[i]) {
			max = d[i];
			res = i;
		}
	}
	cout<<res;
	return 0;
}
