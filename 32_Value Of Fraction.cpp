#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double tmp, p = 2, q = 1;
    double m, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        m = (p * 1.0) / (q * 1.0);
        tmp = p;
        p += q;
        q = tmp;
        sum += m;
    }
    cout << fixed << setprecision(4) << sum;
}