#include<iostream>

using namespace std;

int main()
{
    int a, b, n;
    char c;
    cin >> a >> b >> c >> n;
    if (n == 1)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout << c;
            }
            cout << endl;
        }
    }
    else if (n == 0)
    {
        for (int i = 0; i < b; i++)
        {
            cout << c;
        }
        cout << endl;
        for (int j = 0; j < a - 2; j++)
        {
            cout << c;
            for (int i = 0; i < b - 2; i++)
            {
                cout << ' ';
            }
            cout << c << endl;
        }
        for (int i = 0; i < b; i++)
        {
            cout << c;
        }           
    }  
    return 0;
}