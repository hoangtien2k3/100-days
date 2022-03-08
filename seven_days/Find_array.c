
/*
    Viết chương trình đọc 11 số nguyên từ bàn phím và lưu 10 số đầu tiên vào mảng.
    Kiểm tra xem số thứ 11 có trong mảng hay không?

    + Nếu số thứ 11 có trong mảng, in ra các vị trí xuất hiện theo thứ tự tăng dần, cách nhau 1 dấu cách
    + Nếu số thứ 11 không có trong mảng, in ra -1
*/

#include <stdio.h>

int find_x(int a[], int x)
{
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == x)
        {
            printf("%d ", i + 1);
            count++;
        }
    }
    if (count == 0) {
        printf ("-1");
    }
    return 0;
}

int main(void)
{
    int a[10], x;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    find_x(a, x);
    return 0;
}