
/*
    Viết chương trình đọc vào các số nguyên từ bàn phím cho tới khi giá trị nhận được là số 0.
    Liệt kê các số âm trong dạnh sách đọc được

    + Nếu có số âm, in ra danh sách các số âm trong mảng, giữ nguyên thứ tự gốc và in cách nhau 1 dấu cách
    
*/

#include<stdio.h>
int main() {
    int a[10000], count = 0, dem = 0;
    for (int i=0; i< 10000; i++) {
        scanf ("%d", &a[i]);
        count++;
        if (a[i] == 0) {
            break;
        }
    }
    for (int i=0; i< count; i++) {
        if (a[i] < 0) {
            printf ("%d ", a[i]);
            dem++;
        } 
    }
    if (dem == 0) {
        printf ("NO FOUND");
    }
    return 0;
}
