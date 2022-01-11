
/*
    Cho mảng AA bao gồm nn số nguyên nhập từ bàn phím. Hãy viết chương trình biến đổi mảng theo quy tắc sau:
    + Tại các chỉ số lẻ của mảng, tăng giá trị của phần tử đó thêm 1 lượng đúng bằng chênh lệch 2 phần tử lân cận của nó.
    + Trong trường hợp không có lân cận trái hoặc phải, coi như lân cận bị thiếu đó có giá trị là 0.
    + Chỉ số mảng được tính bắt đầu từ 0

    GIẢI THÍCH: + phần tử lân cận trái của A(i) là A(i-1) với i > 0
                + phàn tử lân cận phải của A(i) là A(i+1) với i < n - 1
    VD: 1 3 2 5  -> 1 4 2 7
        3 lẻ : 2 - 1 = 1 => 3 + 1 = 4
        5 lẻ : 2 - 0 = 2 => 5 + 2 = 7

*/

#include<stdio.h>

int Array_c (int n, int a[]) {
    
}

int main() {
    int n, a[1000];
    scanf ("%d", &n);
    for (int i=0; i<n; i++) {
        scanf ("%d", &a[i]);
    }

    Array_c (n, a);
    return 0;
}