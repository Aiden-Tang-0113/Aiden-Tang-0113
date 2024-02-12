#include<iostream>

using namespace std;

bool digit_7(int i)
{
    while(i)
    {
        if(i%10 == 7)
        {
            return true;
        }
        i/=10;
    }
    return false;
}

int main()
{
    int n, x;
    long long sum = 0;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        if(!(i%7 == 0 || digit_7(i)))
        {
            sum += i*i;
        }
    }
    cout << sum;
    return 0;
}