#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n, sum = 0;
    string m;
    for(int i = 0;i < n;i++)
    {
        cin >> m;
        if ((m[3]-'0') - (m[2]-'0') - (m[1]-'0') - (m[0]-'0') > 0) 
        {
            sum ++;
        } 
    }
    cout << sum;
}