#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n,i;
    float m,sum=0.0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> m;
        sum += m;
    }
    cout << fixed << setprecision(4) << sum/n;

}