#include<iostream>

using namespace std;

int main()
{
    int k,j;
    int sum_1 = 0,sum_5 = 0,sum_10 = 0;
    cin >> k;
    for(int i = 0;i < k;i++)
    {
        cin >> j;
        if(j == 1)
            sum_1++;
        if(j == 5)
            sum_5++;
        if(j == 10)
            sum_10++;
    }
    cout << sum_1 << endl;
    cout << sum_5 << endl;
    cout << sum_10 << endl;
    return 0;
}