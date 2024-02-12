#include<iostream>
#define maxSize 50001
using namespace std;

int main()
{
    int arr[maxSize];  
    int n,i,j,m;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        arr[i]=1;   //initialy on
    }
    for(i=1;i<=m;i++)  //m people operating
    {
        for(j=i;j<=n;j=j+i)
        {
            arr[j]=-1*arr[j];  //every time gets the oppsite
        }
    }
    for(i=1;i<=n;i++)
    {
        if (arr[i]==-1)
        {
            if(i!=1) cout<<",";
            cout<<i;
        }
    }
    cout<<endl;
    return 0;
}