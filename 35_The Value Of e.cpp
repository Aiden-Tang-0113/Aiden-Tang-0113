#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double t = 1,sum = 1;
    for(int i = 1;i <= n;i++)
    {
        t *= i;
        sum += 1.0/t;
    } 
    cout << fixed << setprecision(10) << sum;
    return 0;
}