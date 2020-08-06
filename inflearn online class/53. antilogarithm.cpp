#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n, k, i, tmp;
	cin>>n>>k;
	char s[10]={0,};
	i = 9;
	while(n >= k){
		s[i--] = n%k + '0';
		n = n/k;
	}
	s[i] = n + '0';
	for(int i = 0; i<10; i++){
		if(s[i] != 0)  {
			tmp = i;
			break;	
		}
	}
	for(int i = tmp; i<10; i++){
		if(k == 16){
			if(s[i] > '9'){
				s[i] = (s[i] - '0')%10 +'A';
			}
		}
		cout<<s[i];
	}
	return 0;
}
