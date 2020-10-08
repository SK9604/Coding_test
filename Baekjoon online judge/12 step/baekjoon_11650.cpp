#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first){
        return a.second<b.second;
    }
    else return a.first<b.first;
}

int main()
{
	int n;
    cin>>n;
    vector <pair<int, int> > dot (n);
    for(int i = 0; i<n; i++){
        cin>>dot[i].first>>dot[i].second;
    }
    sort(dot.begin(), dot.end(), compare);

    for(int i = 0; i<n; i++){
        cout<<dot[i].first<<' '<<dot[i].second<<'\n';
    }
    return 0;
}