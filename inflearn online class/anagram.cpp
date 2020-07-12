#include <iostream>
using namespace std;

int main() {
	string a,b;
	int tempa['z']={0};
	int tempb['z']={0};
	bool res;
	cin>>a>>b;
	if(a.size()!=b.size()) res = false;
	else{
		for(int i = 0; i<a.size(); i++){
			tempa[a[i]-1]++;
			tempb[b[i]-1]++;
		}
		for(int i =0; i<'z'; i++){
			res = true;
			if(tempa[i]!=tempb[i]){
				res = false;
				break;
			}
		}
	}
	if(res) cout<<"YES";
	else cout<<"NO"; 
	return 0;
}
