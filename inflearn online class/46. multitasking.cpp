#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, k, bp = 0, pos = -1, tot = 0;
	cin>>n;
	vector <int> input(n);
	for(int i = 0; i<n; i++){
		cin>>input[i];
		tot+=input[i];
	}
	cin>>k;
	if(k>=tot){
		cout<<-1;
		return 0;
	}
	while(1){
		pos++;
		if(pos>=n) pos = 0;
		if(input[pos] == 0) continue;
		input[pos]--;
		bp++;
		if(bp == k) break;
	}
	while(1){
		pos++;
		if(pos>=n) pos = 0;
		if(input[pos]!=0) break;
	}
	cout<<pos+1;
	return 0;
}
