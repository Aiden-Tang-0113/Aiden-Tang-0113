#include<iostream>

using namespace std;

int main()
{
    int M, n, s, x;
    cin >> M;
    for(int i = 0; i < M; i++)
    {
        int sum = 0;
        int a = 0;
        cin >> n;
        s = n;
        while (s > 0)
    {
        a += 1;
        s /= 10;
    }
    s = n;
    while (s)
    {
        int b = 1;
        x = s % 10;
        for(int j = 0; j < a; j++) 
        {
            int b = 1;
        }
        sum += b;
        s /= 10;
    }
    if (sum == n)
        cout << 'T' << endl;
    else
        cout << 'F' << endl;
    }
    return 0;
}