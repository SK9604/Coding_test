#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	vector<vector<int> > m(9, vector <int>(9));
	vector <int> avg(9);
	vector <int> res(9);
	int sum = 0;
	for(int i = 0; i<9; i++){
		sum = 0;
		for(int j = 0; j<9; j++){
			cin>>m[i][j];
			sum+=m[i][j];
		}
		avg[i] = (sum/9.0)+0.5;
	}
	for(int i = 0; i<9; i++){
		int min = 2147000000;
		for(int j = 0; j<9; j++){
			int tmp = abs(avg[i] - m[i][j]);
			if(tmp<min){
				min = tmp;
				res[i] = m[i][j];
			}
			else if(tmp == min){
				if(m[i][j]>res[i]) res[i] = m[i][j];
			} 
		}
	}
	for(int i = 0; i<9; i++){
		cout<<avg[i]<<' '<<res[i]<<'\n';
	}
	return 0;
}
