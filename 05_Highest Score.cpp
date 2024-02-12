#include<iostream>

using namespace std;

int main()
{
    int n;
    int max_score,m;
    cin >> n;
    cin >> max_score; //to pretend that the first score is the highest
    for(int i = 1;i < n;i++)
    {
        cin >> m;
        if(m > max_score)max_score=m;
    }
    cout << max_score << endl;
    return 0;
}