#include<iostream>

using namespace std;
int main()
{
    int m, n, sum = 0, i;
    cin >> m >> n;
    for(i = m;i <= n;i++)
    {
        if(i % 17 == 0)
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
} // namespace std;
