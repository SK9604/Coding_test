#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

void recur(int x){
	if(x>7) return;
	/*  preorder
	else{ 
		cout<<x<<' ';
		recur(x*2);
		recur(x*2+1);
	}
	*/
	/*  Inorder
	else{
		recur(x*2);
		cout<<x<<' ';
		recur(x*2+1);
	}
	*/
	else{ //postorder
		recur(x*2);
		recur(x*2+1);
		cout<<x<<' ';
	}
}
int main() {
	recur(1);
	return 0;
}
