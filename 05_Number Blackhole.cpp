#include<iostream>

using namespace std;

int main()
{
    int N, cnt = 0;
    cin >> N;
    while(N != 495)
    {
        int a = N / 100;
        int b = N / 10 %10;
        int c = N % 10;

        int a_ = a > b ? a : b;
        a_ = a > c ? a_ : c;
        int c_ = a < b ? a : b;
        c_ = c_ < c ? c_ : c;
        int b_ = a + b + c - a_ - c_;

        int max = a_ * 100 + b_ * 10 + c_;
        int min = c_ * 100 + b_ * 10 + a_;

        N = max - min;
        cnt ++;
    }
    cout << cnt; 
} // namespace std;
