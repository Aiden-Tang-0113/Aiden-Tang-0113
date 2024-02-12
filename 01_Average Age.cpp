#include<iostream>
#include<iomanip>

using namespace std;


int main()
{
    int n,m,i,sum = 0;
    float avg_age;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> m;
        sum += m;
    }
    avg_age = sum/n;
    cout << fixed << setprecision(2) << avg_age;
    return 0;
}