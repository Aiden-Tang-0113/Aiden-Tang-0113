#include<iostream>

using namespace std;

int main()
{
    int i,m,n,sum = 0;
    cin >> m >> n;
    for(i = m;i <= n;++i)
    {
        if(i%2)sum += i;
    }
    cout << sum;
    return 0;
}