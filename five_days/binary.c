
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
    int i = 0;
    while (n != 0) {
        a[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf ("%d", a[j]);
    }

}

// int Binary(int n) {
//     int binary = 0;
//     for (int i=0; n != 0; i++) {
//         binary += (n%2)*pow(10, i); 
//         n /= 2;
//     }
//     return binary;
// }

int main() {
    int n;
    unsigned long long int res = 0;
    printf ("Input decimal n = ");
    scanf ("%d", &n);
    NhiPhan(n);
    // printf ("%d", Binary(n));
    return 0;
}

