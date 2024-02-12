#include<iostream>

using namespace std;

int main()
{
    int n;
    int gold,silver,bronze;
    int sum_gold = 0,sum_silver = 0,sum_bronze = 0;
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> gold >> silver >> bronze;
        sum_gold  += gold;
        sum_silver += silver;
        sum_bronze += bronze;
    }
    cout << sum_gold << ' ';
    cout << sum_silver <<' ';
    cout << sum_bronze << ' ';
    cout << sum_gold + sum_silver + sum_bronze;
    return 0;
}