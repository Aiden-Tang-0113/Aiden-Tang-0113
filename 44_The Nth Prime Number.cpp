#include <iostream>

using namespace std;

int n, a, s[130030];
bool v[130030];

int main()
{
    for (int i = 0; i < 110000; i++)
    {
        if (!v[i])
        {
            a = 2 * i;
            s[s[0]++] = i;
            while (a <= 110000)
            {
                v[a] = 1;
                a += i;
            }
        }
    }
    cin >> n;
    cout << s[n] << endl;
    return 0;
}