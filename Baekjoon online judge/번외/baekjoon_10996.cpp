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
	for (int i = 1; i <= n * 2; i++) { //��ü �� �� = n*2
		if (n == 1) {
			cout << "*";
			break;
		}
		else if (n % 2 != 0) {//Ȧ���� ��
			if (i % 2 != 0) {//Ȧ����° ��
				for (int j = 0; j < (n + 1) / 2; j++) 
					cout << "* ";
			}
			if (i % 2 == 0) {
				for (int j = 0; j < (n - 1) / 2; j++)
					cout << " *";
			}
		}
		else {//¦���� ��
			if (i % 2 != 0) {//Ȧ����° ��
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
