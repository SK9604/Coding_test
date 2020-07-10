//Qusetion URL : https://www.acmicpc.net/problem/2446
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int c = n*2-1;//별 개수
	for (int i = 1; i <= 2 * n - 1; i++) {//총 줄 개수
		
		if (i <= n) {//중간이 지나기 전
			for (int t = 1; t < i; t++) {
			std::cout << " ";
			}
			for (int j = 0; j < c; j++)
				cout << "*";
			if (c != 1)	c-=2;//한개씩 줄임
		}
		else{//별 개수가 입력값보다 적으면
			for (int t = 1; t < 2*n-i; t++) {
				cout << " ";
			}
			c+=2;
			for (int j = 0; j < c; j++)
				cout << "*";
			
		}
		cout << '\n';
	}
}
