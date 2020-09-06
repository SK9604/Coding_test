#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<int> numbers, string hand) {
	string answer = "";
	int lx = 0, rx = 2, ly = 3, ry = 3;
	int x, y;
	for (int i = 0; i<numbers.size(); i++) {
		if (numbers[i] % 3 == 1) {
			answer += "L";
			lx = 0;
			ly = numbers[i] / 3;
		}
		else if (numbers[i] != 0 && numbers[i] % 3 == 0) {
			answer += "R";
			rx = 2;
			ry = (numbers[i] / 3) - 1;
		}
		else if (numbers[i] % 3 == 2 || numbers[i] == 0) {
			if (numbers[i] == 0) {
				x = 1;
				y = 3;
			}
			else {
				x = 1;
				y = numbers[i] / 3;
			}

			int d_r = abs(ry - y) + abs(rx - x);
			int d_l = abs(ly - y) + abs(lx - x);

			if (d_r < d_l) {
				answer += "R";
				rx = x;
				ry = y;
			}
			else if (d_r > d_l) {
				answer += "L";
				lx = x;
				ly = y;
			}
			else {
				if (hand == "right") {
					answer += "R";
					rx = x;
					ry = y;
				}
				else {
					answer += "L";
					lx = x;
					ly = y;
				}
			}
		}
	}
	return answer;
}

int main() {
	vector <int> numbers = { 7,0,8,2,8,3,1,5,7,6,2 };
	string hand = "left";
	cout << solution(numbers,hand);
}
