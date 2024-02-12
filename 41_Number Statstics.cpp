#include<iostream>

using namespace std;

int main()
{
    int L, R, sum = 0;
    cin >> L >> R;
    int j;
    for (int i = L; i <= R; i++)
    {
        j = i;
        while (j)
        {
            if (j % 10 == 2)
                sum ++;
            j /= 10;
        }
    }
    cout << sum;
    return 0;
}