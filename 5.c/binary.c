
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

long NhiPhan (int n) {
    long res = 0;
    int p = 0;
    while (n > 0) {
        res = res + (n % 2) * pow(10, p);
        ++p;
        n /= 2;
    }
    return res;
}

int main() {
    int n, p = 0;
    long res = 0;
    scanf ("%d", &n);
    printf ("%d", NhiPhan(n));
    return 0;
}