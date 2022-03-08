
/*
    Cho mảng số nguyên AA có nn phần tử, hãy tìm kiếm xem trong mảng có xuất hiện phần tử xx hay không?
    Dòng 1 là số nguyên dương n và số nguyên x cần tìm trong mảng
    Dòng tiếp theo là n số nguyên là các phần tử của mảng

    VD: n = 6, x = 3
        a[6] = {1,2,3,4,5,6} -> YES
        a[6] = {1,2,4,5,6,7} -> NO
*/

#include <stdio.h>

int Find_Element_Array(int n, int x, int a[]) {
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("YES");
            return 0;
        }
    }
    printf ("NO");
    return 0;
}

int main()
{
    int n, x, a[1000];
    scanf ("%d%d", &n, &x);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
    }
    Find_Element_Array(n, x, a);
    return 0;
}