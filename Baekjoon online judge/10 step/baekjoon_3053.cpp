//Question URL : https://www.acmicpc.net/problem/4153
#include <iostream>
#define Pi 3.14159265358979323846264338327950288
using namespace std;

int main(){
	double r;
	cin>>r;
	double circle = r*r*Pi;
	double taxi = r*r*2;
	printf("%6lf\n", circle);
	printf("%6lf\n", taxi);
	return 0;
}

