#include<iostream>
using namespace std;
int main()
{
    int n;
    double sum=0,m;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>m;
        sum+=m;
    }
    printf("%.0f %.5f",sum,sum/(double)n); 
    return 0;
}