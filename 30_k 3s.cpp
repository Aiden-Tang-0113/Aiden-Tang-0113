#include<iostream>

using namespace std;

int main()
{
    int m, k, sum = 0;
    cin >> m >> k;
    if (m % 19 == 0)    
    {
        while (m)
        {
            if (m % 10 == 3)
            sum ++;
            m /= 10;
        }
        if (sum == k)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}