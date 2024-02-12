#include<iostream>

using namespace std;

void function(int i,int &count)
{
    while(i)
    {
        if(i%10 == 1)
        {
            count++;
        }
        i/=10;
    }
}
int main()
{
    int n,x;
    int sum = 0;
    cin >> n;
    for(int i = 1;i <= n; i++)
    {
        function(i,sum);
    }
    cout << sum;
    return 0;
}