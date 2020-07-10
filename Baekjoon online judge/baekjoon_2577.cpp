// Question URL: https://www.acmicpc.net/source/2577
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c; //받는 값
	cin >> a >> b >> c;
	int s = a * b * c; //모두 곱한 값
	int cnt[10] = { 0 };

	while (s > 0) {
		cnt[s % 10]++;
		s /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << cnt[i] << '\n';
	}

	return 0;
}
