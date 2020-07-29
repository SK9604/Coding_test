#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m, cnt = 0, lt, rt, mid;
	cin>>n>>m;
	vector <int> array(n);
	for(int i = 0; i<n; i++){
		cin>>array[i];
	}
	sort(array.begin(),array.end());
	lt = 0; rt = n-1;
	while(lt<=rt){
		mid = (lt+rt)/2;
		if(array[mid] == m) {
			cout<<mid+1;
			return 0;	
		}
		else if(array[mid]>m){
			rt = mid-1;	
		} 
		else lt = mid+1;
	}
	return 0;
}
