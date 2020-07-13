#include <iostream>
using namespace std;

int main() {
	int a[10], b[10], ascore=0, bscore=0;
	char res;
	for(int i = 0; i<10; i++){
		cin>>a[i];
	}
	for(int i = 0; i<10; i++){
		cin>>b[i];
	}
	for(int i = 0; i<10; i++){
		if(a[i]==b[i]) {
			ascore++;
			bscore++;	
		}
		else if(a[i]>b[i]) ascore+=3;
		else bscore+=3;
	}
	if(ascore == bscore){
		if(ascore == 10) res = 'D';
		else if(a[9]>b[9]) res = 'A';
		else res = 'B';
	}
	else if(ascore > bscore) res = 'A';
	else res = 'B';
	
	cout<<ascore<<' '<<bscore<<'\n'<<res;
	return 0;
}
