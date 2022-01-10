
//  Chỉ số mảng có giá trị lớn nhất
/*
    Cho một mảng các số nguyên AA có nn phần tử, bạn hãy tìm ra chỉ số của phần tử lớn nhất trong mảng.

    Dòng đầu tiên là số nguyên dương nn, số lượng phần tử của mảng
    Dòng tiếp theo là nn số nguyên của mảng
*/
// Ý tưởng làm bài này là:
#include<stdio.h>

int Index (int n, int a[]) {
    int max = a[0];
    int m;
    for (int i=0; i< n; i++) {
        if (a[i] >= max) {
            max = a[i];
            m = i;
        }
    }
    printf ("%d", m);
}

int main() {
    int n, a[1000];
    int max = a[0], m;
    scanf ("%d", &n);
    for (int i=0; i<n; i++) {
        scanf ("%d", &a[i]);
    }
    Index(n, a);
    return 0;
}