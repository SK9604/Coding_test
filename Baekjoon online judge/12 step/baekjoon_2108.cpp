#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	double n, sum = 0, max = -2147000000;
    int arithmetical_mean, median, mode, range;
    cin>>n;
    vector<int> num(n); 
    vector<int> array(8001,0); 
    vector<int> tmp(8001,0); 
    for(int i =0; i<n; i++){
        cin>>num[i];
        sum+=num[i];
        array[num[i]+4000]++;
    }
    sort(num.begin(), num.end()); 
    arithmetical_mean = round(sum/n); 
    median = num[n/2]; 
    range = num[n-1] - num[0]; 
    for(int i = 0; i<8001; i++){ 
        if(max<=array[i]) {
            max = array[i];
        }
    }
    int cnt = 0;
    int count = 0;
    for(int i = 0; i<8001; i++){
        if(max == array[i]){
            count++;
        }
    }
    if(count == 1){
        for(int i = 0; i<8001; i++){
            if(max == array[i]) mode = i-4000;
        }
    }
    else{
        for(int i = 0; i<8001; i++){
            if(max == array[i]){
                if(cnt == 1) {
                    mode = i-4000;
                    break;
                }
                cnt++;
            }
        }
    }
    cout<<arithmetical_mean<<'\n'<<median<<'\n'<<mode<<'\n'<<range<<'\n';
    return 0;
}