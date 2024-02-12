#include<iostream>

using namespace std;

int main()
{
    int m, x, n, t;
    cin >> m >> n >> x;
    while (x>0)
    {
        t = m / n;
        if (m % n != 0)
            t++;
        if (x < t)
            break;
        x -= t;
        t = m / n;
        n += t;
    }
    cout << n;
    return 0;
}