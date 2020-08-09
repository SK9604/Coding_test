#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

void recur(int x){
	if(x==0) return;
	else{
		recur(x/2);
		cout<<x%2;
		
	}
}
int main() {
	int n;
	cin>>n;
	recur(n);
	return 0;
}
