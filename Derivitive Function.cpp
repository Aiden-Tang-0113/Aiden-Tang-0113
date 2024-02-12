#include<iostream>

using namespace std;

int main()
{
    int n, c;
    cin >> n;
    if (n == 0)
    {
        cin >> c;
        cout << 0;
        return 0;
    }
    for (int i = n; i >= 0; i--)
    {
        cin >> c;
        if (i != 0)
            cout << c * i << ' ';
    }
    return 0;
}