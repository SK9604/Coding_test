#include <iostream>
using namespace std;

int main() {
	string a;
	int year,age;
	char sex;
	cin>>a;
	if(a[7]=='1' || a[7]=='2') 
		year =1900+((int)(a[0]-'0')*10+(int)(a[1]-'0'));
	else 
		year = 2000+((int)(a[0]-'0')*10+(int)(a[1]-'0'));
	age = 2019-year+1;
	if(a[7]=='1' || a[7]=='3') sex = 'M';
	else sex = 'W';
	cout<<age<<' '<<sex;
	return 0;
}

