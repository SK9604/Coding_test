#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
/*
int top = -1;
char stack[10];
void push(int x){
	stack[++top] = x;
}
int pop(){
	return stack[top--];
}
*/
int main() {
	int n, k;
	stack <int>  s;
	char str[20] = "0123456789ABCDEF";
	cin>>n>>k;
	while(n > 0){
		s.push(n%k);
		n = n/k;
	}
	while(!s.empty()){
		cout<<str[s.top()];
		s.pop();
	}
	return 0;
}
