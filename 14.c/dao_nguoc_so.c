// đảo ngược số

#include<stdio.h>
#include<string.h>
#include<math.h>

int daoNguoc (int n) {
    // 12345 -> 54321
    int res = 0, du;
    while (n) {
        du = n % 10; // lấy ra phần tử cuối cùng
        res = res*10 + du;  // đảo ngược số dư đó lên đầu dãy
        n /= 10;  // bược nhảy: loại bỏ phần tử cuối cùng trong dãy
    }
    printf ("%d", res);
    return res;
}

int main() {
    int n;
    scanf ("%d", &n);
    daoNguoc(n);
    return 0;
}

// 

