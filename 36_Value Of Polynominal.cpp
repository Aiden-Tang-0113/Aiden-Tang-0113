#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    int n;
    float x, sum = 0;
    cin >> x >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += pow(x, i);
    }
    cout << fixed << setprecision(2) << sum;
    return 0;
}