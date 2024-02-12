#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int m,n,l,sum = 0;
    cin >> m >> n;
    for(int i = 0;i < n;++i)
    {
        cin >> l;
        if(m >= l)
        {
            m -= l;
        }
        else
        {
            sum++;
        }
     }
     cout << sum;
    return 0;
}