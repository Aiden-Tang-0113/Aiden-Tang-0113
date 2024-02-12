#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int N, s = 0;
    cin >> N;
    if(N < 0)
        cout << '-';
    N = abs(N);
    do
    {
        s = s * 10 + N % 10;
        N /= 10;
    } while (N > 0);
    cout << s;
    return 0;
}