//Qusetion URL : https://www.acmicpc.net/problem/2562
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int n=9, x, c = 0;
	int max = 0;
	int maxc;

	while (n--) {
		cin >> x;
		c++;
		if (x > max) {
			max = x;
			maxc = c;
		}
	}
	cout << max << '\n' << maxc;

	return 0;
}
