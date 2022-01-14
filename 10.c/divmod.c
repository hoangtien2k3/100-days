#include<iostream>
using namespace std;

int main()
{
    bigint answer = 1;
    int N;
    cout << "Nhap so N = ";
    cin >> N;
    // Tinh giai thua
    for (int i = 2; i <= N; ++i)
    {
        answer *= i;
    }
    cout << N << "! = " << answer << '\n';
}