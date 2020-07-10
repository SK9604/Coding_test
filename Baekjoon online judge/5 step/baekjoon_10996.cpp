//Qusetion URL : https://www.acmicpc.net/problem/10996
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n * 2; i++) { //ÀüÃ¼ ÁÙ ¼ö = n*2
		if (n == 1) {
			cout << "*";
			break;
		}
		else if (n % 2 != 0) {//È¦¼öÀÏ ¶§
			if (i % 2 != 0) {//È¦¼ö¹øÂ° ÁÙ
				for (int j = 0; j < (n + 1) / 2; j++) 
					cout << "* ";
			}
			if (i % 2 == 0) {
				for (int j = 0; j < (n - 1) / 2; j++)
					cout << " *";
			}
		}
		else {//Â¦¼öÀÏ ¶§
			if (i % 2 != 0) {//È¦¼ö¹øÂ° ÁÙ
				for (int j = 0; j < n / 2; j++)
					cout << "* ";
			}
			if (i % 2 == 0) {
				for (int j = 0; j < n / 2; j++)
					cout << " *";
			}
		}
		cout << '\n';
	}

	return 0;
}
