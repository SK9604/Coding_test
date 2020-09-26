//Qusetion URL : https://www.acmicpc.net/problem/10818
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int n,x;
	int min = 1000000;
	int max = -1000000;
	cin >> n;
	while (n--) {
		cin >> x;
		if (x > max) max = x;
		if (x < min) min = x;
	}
	cout << min << ' ' << max;

	return 0;
}
