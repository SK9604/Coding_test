#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n, p2=0, p3=0, p5=0;
	cin>>n;
	vector <int> a(n);
	a[0] = 1;
	for(int i = 1; i<n; i++){
		int min = 2147000000;
		if(a[p2]*2<a[p3]*3) min = a[p2]*2;
		else min = a[p3]*3;
		if(a[p5]*5<min) min = a[p5]*5;
		if(a[p2]*2 == min) p2++;
		if(a[p3]*3 == min) p3++;
		if(a[p5]*5 == min) p5++;
		a[i] = min;
	}
	cout<<a[n-1];
	return 0;
}
