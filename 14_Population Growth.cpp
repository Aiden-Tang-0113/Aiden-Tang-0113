#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int n, i;
    double x;
    cin >> x >> n;
    for(i = 0;i < n;i++)
    {
        x *= 1.001;
    }
    cout << fixed << setprecision(4) << x;
    return 0;
} // namespace std;
