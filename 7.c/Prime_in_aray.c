// Số nguyên tố trong mảng 1 chiều

/*
    Cho mảng AA gồm nn số nguyên, hãy viết chương trình tìm và in ra các số nguyên tố có trong mảng
    + Dòng đầu tiên là số nguyên dương n
    + Dòng tiếp theo là nn số nguyên tương ứng là các phần tử của mảng A

    Xuất ra các số nguyên tố có trong mảng, yêu cầu:
        + Theo thứ tự tăng dần
        + Chỉ in ra 1 lần cho dù số nguyên tố đó xuất hiện nhiều hơn 1 lần
        + Các số nguyên tố cách nhau bằng 1 dấu cách

    VD: 1 2 2 3 => printf_Prime(số nguyên tố) là  2 3 (theo thứ tự tăng dần)
*/

#include<stdio.h>
#include<stdbool.h>

void swap_array (int n, int a[]) {
    for (int i = 0; i< n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp; 
            }
        }
    } 
} // swap element increase in array

bool check_prime_in_array (int n)
{ 
    if (n < 2) {
        return false;
    } else if (n == 2) {
        return true;
    } else if (n > 2) {
        if (n % 2 == 0) {
            return false;
        } else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    return false;
                }
            }
        }
    }
    return true;
} // check prime element in array

int main() {
    int n, a[1000];
    scanf ("%d", &n);
    for (int i=0; i<n; i++) {
        scanf ("%d", &a[i]);
    }
    swap_array (n, a);
    for (int i=0; i<n; i++) {
        if (check_prime_in_array (a[i]) == true) {
            if (a[i] != a[i-1]){
                printf ("%d ", a[i]);
            }
        }
    }
    return 0;
}


