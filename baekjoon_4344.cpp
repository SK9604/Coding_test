#include <iostream>
using namespace std;
int main() {
	//freopen("input.txt","rt", stdin);
	cout<<fixed;
	cout.precision(3);
	
	int c, n;
	cin>>c;
	double avg,g;
	
	
	for(int i =0; i<c;i++)
	{
		g=0,avg=0; 
		cin>>n;
		int score[n];
		
		for(int j = 0; j<n;j++){
			cin>>score[j];
			avg += score[j];
		}
		
		avg=avg/n;
		
		for(int a = 0; a<n; a++){
			if(score[a]>avg) g++;
		}
		
		g=g/n*100;
		cout<<g<<"%\n";
	}
	return 0;
}

