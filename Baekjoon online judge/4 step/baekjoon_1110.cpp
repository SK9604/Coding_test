//Qusetion URL : https://www.acmicpc.net/problem/1110
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n,cnt;
	cin >> n;
	cnt = 0;
	int y = n;

	while(1) {
		int a = y / 10;
		int b = y % 10; 
		int c = a + b;  
		if (c >= 10) c = c % 10;
		y = b * 10 + c;
		cnt++; 
		if (y==n) break;
	}

	cout << cnt;
	
	
	return 0;
}
