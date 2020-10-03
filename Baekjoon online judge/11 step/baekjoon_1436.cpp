#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, num = 665, count = 0;
	cin>>n;
	while(num++){
		string str = to_string(num);
		if(str.find("666")!=string::npos) count++;
		if(n == count) {
			cout<<num;
			break;
		}
	}
	return 0;
}

