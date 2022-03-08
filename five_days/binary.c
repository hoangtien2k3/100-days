
// CHUYỂN TỪ SÔ THẬP PHÂN(cơ số 10) -> HỆ CƠ SỐ NHỊ PHÂN(số 2) 

// VD:      13 = 1101 = 1*10^3 + 1*10^2 + 0*10^1 + 1*10^0  
/*
            VD: n = 13
            13 % 2 = 1 * 10^0 = 1
             6 % 2 = 0 * 10^1 = 0
             3 % 2 = 1 * 10^2 = 100
             1 % 2 = 1 * 10^3 = 1000
            => 1000 + 100 + 0 + 1 = 1101

    Decimal(hệ cơ số 10) : thập phân
    Binary(hệ sơ số 2) : nhị phân
*/

#include <stdio.h>
#include <math.h>

void NhiPhan (int n) {
    int a[32];
    unsigned long long int res = 0;
    int p = 0;
    while (n > 0) {
        a[p] = n % 2;
        n /= 2;
        p++;

    }
    for (int j= p - 1; j >= 0; j--) {
        printf ("%d", a[j]);
    }

}

int main() {
    int n, p = 0;
    unsigned long long int res = 0;
    scanf ("%d", &n);
    NhiPhan(n);
    return 0;
}

// unsigned long long int res = 0;
// int p = 0;
// while (n > 0)
// {
//     int t = (n % 2);
//     unsigned long long int x = pow(10, p);
//     res += t * x;
//     n /= 2;
//     ++p;
// }
// return res;
