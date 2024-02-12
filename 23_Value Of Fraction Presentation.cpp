#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    int n;
    double total;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        total += pow(-1, i - 1) / i;
    }
    cout << fixed << setprecision(4) << total;
    return 0;
}