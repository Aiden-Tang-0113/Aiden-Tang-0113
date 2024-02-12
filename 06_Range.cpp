#include<iostream>

using namespace std;

int main()
{
    int n,m,max,min;
    cin >> max;
    min = max;
    for(int i = 1;i < n;i++)
    {
        cin >> m;
        if(max < m)max = m;
        if(min > m)min = m;
    }
    cout << max - min;
    return 0;
}
