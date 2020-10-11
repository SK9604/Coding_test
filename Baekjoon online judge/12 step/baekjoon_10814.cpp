#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,pair<int,string>> a, pair<int,pair<int,string>> b){
    if(a.second.first == b.second.first){
        return a.first < b.first;
    }
    else return a.second.first<b.second.first;
}

int main()
{
	int n;
    cin>>n;
    vector <pair<int,pair<int,string>>> member(n);
    for(int i = 0; i < n; i++){
        cin>>member[i].second.first>>member[i].second.second;
        member[i].first = i+1;
    }
    sort(member.begin(), member.end(), compare);
    for(int i = 0; i < n; i++){
        cout<<member[i].second.first<<' '<<member[i].second.second<<'\n';
    }
    return 0;
}