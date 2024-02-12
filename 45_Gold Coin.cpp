#include <iostream>

using namespace std;

int get_coins(int days)
{
    int coins = 0;
    int n = 1;
    while (n <= days)
    {
        coins += n;
        n++;
    }
    if (n > days)
    {
        n--;
    }
    days -= n;
    coins += days * n;
    return coins;
}

int main()
{
    int days;
    cin >> days;
    cout << get_coins(days) << endl;
    return 0;
}