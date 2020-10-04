#include<iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int number[10000] = {0};
    int num, n, count = 0;
    cin>>num;
    for(int i = 0; i < num; i++)
    {
        cin>>n;
        number[n - 1]++;
    }
    for(int i = 0; i < 10000; i++)
    {
        for(int j = 0; j < number[i]; j++)
        {
            count++;
            cout<<i+1<<'\n';
            if(count == num)
                return 0;
        }
    }
    return 0;
}