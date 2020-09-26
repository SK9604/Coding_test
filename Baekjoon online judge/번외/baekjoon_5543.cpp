// Question URL: https://www.acmicpc.net/source/5543
#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int min = 5000;
	int a[5], sum=0;
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
		if (a[i] < min)	min = a[i];
	}
	sum += min;
	for (int i = 3; i < 5; i++) {
		cin >> a[i];
		if (a[i] < min) min = a[i];
	}
	sum += min - 50;
	cout << sum;

	return 0;
}
