#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float sum,balance=0;
    for (int i = 0; i < 12; i++)
    {
        cin >> balance;
        sum += balance;
    }
    cout <<'$' << fixed << setprecision(2) << sum/12;
    return 0;
}