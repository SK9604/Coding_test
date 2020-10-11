#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
    if(a.size() == b.size()){
        return a<b;
    }
    else return a.size()<b.size();
}

int main()
{
	int n;
    cin>>n;
    string temp;
    vector <string> word;
    for(int i = 0; i < n; i++){
        cin>>temp;
        if(find(word.begin(), word.end(), temp) == word.end())
            word.push_back(temp);
    }
    sort(word.begin(), word.end(), compare);
    for(int i = 0; i < word.size(); i++){
        cout<<word[i]<<'\n';
    }
    return 0;
}