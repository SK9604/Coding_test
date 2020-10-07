#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int x, int y) {  
    if(x == y)
        return x > y;
    else
        return x > y;
}

int main()
{
	int n;
    vector<int> num;
    cin>>n;
    while(n>0){
        num.push_back(n%10);
        n/=10;
    }
    sort(num.begin(), num.end(), compare);
    for(int i = 0; i<num.size(); i++){
        cout<<num[i];
    }
    return 0;
}