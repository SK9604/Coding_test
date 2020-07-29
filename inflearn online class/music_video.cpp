#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m, cnt, lt=1, rt=0, mid, sum = 0, res;
	cin>>n>>m;
	vector <int> array(n);
	for(int i = 0; i<n; i++){
		cin>>array[i];
		rt+=array[i];
	}
	while(lt<=rt){
		mid = (lt+rt)/2;
		cnt = 1; sum = 0;
		for(int i = 0; i<n; i++){
			if(sum+array[i]>mid){
				cnt++;
				sum = array[i];
			}
			else sum += array[i];
		}
		if(cnt <= m){
			res = mid;
			rt = mid-1;
		}
		else lt = mid+1;
	}
	cout<<res;
	return 0;
}
