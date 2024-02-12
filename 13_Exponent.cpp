#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a, n, x;
    cin >> a >> n;
    x = 1;
    for(int i = 0;i < n;i++)
    {
        x *= a;
    }
    cout << x;
}