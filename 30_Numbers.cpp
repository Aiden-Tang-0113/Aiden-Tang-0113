#include<iostream>

using namespace std;

int main()
{
    int m, k, sum_3;
    cin >> m >> k;
    while (m)
    {
        if(m%10 == 3)
        {
            sum_3 ++;
        }
        m /= 10;
    }
    if(m%19 == 0 && sum_3 == k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}