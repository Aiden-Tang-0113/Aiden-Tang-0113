#include<iostream>

using namespace std;

int main()
{
    int N, m, cnt, sum = 0;
    cin >> N >> m; 
    for(int i = 0;i < N;i++)
    {
        cin >> cnt;
        if (cnt == m)
        {
            sum ++;
        }
    }
    cout << sum;
    return 0;
}