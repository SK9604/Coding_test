#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
int main() {
	int flag = 1;
	string p;
	stack <char>  s;
	cin>>p;
	for(int i = 0; i<p.length(); i++){
		if(p[i] == '('){
			s.push(p[i]);	
		}
		else{
			if(s.empty()) {
				flag = 0;
				break;	
			}
			s.pop();
		}
	}
	if(s.empty() && flag == 1) cout<<"YES";
	else cout<<"NO";
	return 0;
}
