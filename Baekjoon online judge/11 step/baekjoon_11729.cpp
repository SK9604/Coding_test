//Question URL : https://www.acmicpc.net/problem/11729
#include <iostream>
#include <cmath>
using namespace std;
void solve(int n, int x, int y){
	if(n == 0) return; //������ ���� ��� �� 
	solve(n-1, x, 6-x-y); //�� ������ ������ 4���� 2�� �ű�� 
	cout<<x<<' '<<y<<'\n'; //�� ������ 3���� �ű�� 
	solve(n-1, 6-x-y, y); //2�� �Űܳ� 4���� 3�� �ű��
}
int main(){
	int n;
	cin>>n;
	cout<<((1 << n) - 1)<<'\n';
	solve(n,1,3);//n���� ������ 1���� 3���� �̵���Ų��  
}

