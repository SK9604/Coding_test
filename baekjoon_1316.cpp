#include <iostream>
using namespace std;

int main() {
	int n;
	string words;
	cin>>n;
	int cnt = n;
	for(int i = 0; i<n; i++){
		cin>>words;
		int alphabet[26] = {0};
		for(int j= 0; j<words.length();j++){
			int t = words[j]-'a';
			alphabet[t]++;
			if(alphabet[t] > 1 && words[j] != words[j-1]){
				cnt--;
				break;
			}
		}
	}
	cout<<cnt;
	return 0;
}
