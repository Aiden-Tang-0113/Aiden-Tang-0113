#include<iostream>

using namespace std;
int main()
{
    int R, Y;
    double s, M;
    cin >> R >> M >> Y;
    for(int i = 0;i < Y;i++) 
    {
        M *= (1 + 0.01 * R);
    }
    cout << int(M);
    return 0;
} // namespace std
