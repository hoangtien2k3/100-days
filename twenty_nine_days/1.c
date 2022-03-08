// Tìm ước chúng lớn nhất của hai số nguyên a và b

#include<stdio.h>

void Nhap_a_b (int a, int b) {
    do {
        printf ("\nNhap vao a = ");
        scanf ("%d", &a);
    } while (a < 0 && printf ("Nhap lai gia tri a: "));

    do {
        printf ("\nNhap vao b = ");
        scanf ("%d", &b);
        if (b < 0) {
            printf ("Nhap lai gia tri b: ");
        }
    } while (b < 0); 
}

int UCLN (int a, int b) {
    int Max = a > b ? a : b;
    int Min = a < b ? a : b;
    return (Max > Min) ? Max : Min;
}

int main() {
    int a, b;
    Nhap_a_b (a, b);
    printf  ("%d", UCLN (a, b));

    return 0;
}