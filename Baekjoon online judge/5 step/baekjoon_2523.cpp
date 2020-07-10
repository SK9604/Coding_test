//Qusetion URL : https://www.acmicpc.net/problem/2523
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int c = 0;
	for (int i = 1; i <= 2 * n - 1; i++) {
		if (i > n) {
			c--;
			for (int j = 0; j < c; j++)
				cout << "*";
		}
		else {
			c++;
			for (int j = 0; j < c; j++)
				cout << "*";
		}
		cout << '\n';
	}
}
