#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a){
		long long s=0;
		for(int i = 0; i<a.size();i++){
			s+=a[i];
		}
		return s;
}
int main() {
	//freopen("input.txt","rt", stdin);
	vector<int> a;
	a.reserve(5);
	for(int i = 0; i<5; i++)
		a.push_back(10);
	long long s = sum(a);
	cout<<s;
	return 0;
}
