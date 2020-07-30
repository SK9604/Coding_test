#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string ch;
	int g=0,t=0;
	cin>>ch;
	for(int i = 1; i<ch.size(); i++){
		if(ch[i]=='H') {
			if(i==1)	g+=12;
			else g+=t*12;
			t = 0;
		}
		else if(ch[i]>='0'&&ch[i]<='9') t = t*10+(int)(ch[i]-'0');
	}
	if(t == 0)	g+=1;
	else		g+=t;
	
	cout<<g;
	return 0;
}
