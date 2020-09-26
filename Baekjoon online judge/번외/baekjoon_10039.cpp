//Qusetion URL : https://www.acmicpc.net/problem/10039
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x,sum = 0;
	for(int i = 0; i<5;i++) {
		cin >> x;
		if (x < 40) x = 40;
		sum += x;
	}
	cout << sum / 5;
	return 0;
}
