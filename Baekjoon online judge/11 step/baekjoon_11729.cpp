//Question URL : https://www.acmicpc.net/problem/11729
#include <iostream>
#include <cmath>
using namespace std;
void solve(int n, int x, int y){
	if(n == 0) return; //원판이 없는 경우 끝 
	solve(n-1, x, 6-x-y); //맨 밑판을 제외한 4개를 2로 옮긴다 
	cout<<x<<' '<<y<<'\n'; //맨 밑판을 3으로 옮긴다 
	solve(n-1, 6-x-y, y); //2에 옮겨논 4개를 3에 옮긴다
}
int main(){
	int n;
	cin>>n;
	cout<<((1 << n) - 1)<<'\n';
	solve(n,1,3);//n개의 원판을 1에서 3으로 이동시킨다  
}

