//Question URL : https://www.acmicpc.net/problem/2447
#include <iostream>
#include <cmath>
using namespace std;
char print_star [2190][2190];

void star(int x, int y, int n){
	if(n == 1){
		print_star[x][y] = '*';
		return;
	}
	int num = n/3;
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			if(i == 1 && j == 1) continue;
			else{
				star(x+(i*num), y+(j*num), num);
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	for(int i = 0; i<n; i++){
		for(int j= 0; j<n; j++){
			print_star[i][j] = ' ';
		}
	}
	star(0,0,n);
	
	for(int i = 0; i<n; i++){
		for(int j= 0; j<n; j++){
			cout<<print_star[i][j];
		}
		cout<<'\n';
	}
}

