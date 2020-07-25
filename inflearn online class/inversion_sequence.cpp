#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,cnt;
	cin>>n;
	vector <int> is(n);
	vector <int> res(n);
	for(int i = 0; i<n; i++){
		cin>>is[i];
	}
	for(int i = 1; i<=n; i++){
		cnt = is[i-1]+1;
		for(int j = 0; j<n; j++){
			if(res[j] == 0&&cnt>0){
				cnt--;
			}
			if(cnt == 0&&res[j]==0){
				res[j] = i;
			}
			else if(cnt == 0&&res[j]!=0){
				continue;
			}
			
		}
	}
	/*
	원래 수열에서 inversion sequence로 변경하는 코드 
	for(int i = 1; i<=n; i++){
		cnt=0;
		for(int j = 0; j<n; j++){
			if(i < is[j]){
				cnt++;
			}
			else if(i == is[j]){
				res[i-1] = cnt;
				break;
			}
			else continue;
		}
	}
	*/
	for(int i = 0; i<n; i++){
		cout<<res[i]<<' ';
	}
	return 0;
}
