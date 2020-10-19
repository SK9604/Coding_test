#include <iostream>
#include <string>
using namespace std;

int n, m;

bool CheckNumber(string num, char currnum)
{
    for (int i = 0; i < num.size(); i++)
    {
        if ( num[i] > currnum)
        {
            return false;
        }
    }
    return true;
}

void DFS(int currnum, string num, int chk)
{
    if (chk == m) return;

    for (int i = 1; i <= n; i++)
    {
        num.push_back(i + '0');
        num.push_back(' ');

        DFS(i + 1, num, chk + 1);

        if (num.size() == m * 2) cout << num << "\n";
        num.erase(num.end() - 2, num.end());
        
    }
}

int main()
{
    cin >> n >> m;
    DFS(1,"",0);
    return 0;
}