#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
int main() {
	int n,t,j=1;
	cin>>n;
	stack <int> s;
	vector <char> str;
	for(int i = 0; i<n; i++){
		cin>>t;
		s.push(t);
		str.push_back('P');
		while(1){
			if(s.empty()) break;
			if(j == s.top()){
				s.pop();
				j++;
				str.push_back('O');
			}
			else break;
		}
	}
	if(!s.empty()) cout<<"impossible";
	else{
		for(int i = 0; i<str.size(); i++){
			cout<<str[i];
		}
	}
	return 0;
}
