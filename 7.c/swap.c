
/*
    Hãy viết chương trình sắp xếp mảng các số nguyên A có n phần tử tăng dần
    nhưng giữ nguyên vị trí phần tử đầu tiên và phần tử cuối cùng của mảng

    + Dòng 1 là số lượng phần tử của mảng n
    + Dòng tiếp theo là nn số nguyên tương ứng là các phần tử của mảng A

    lưu ý:  Mảng sau khi sắp xếp tăng dần trừ 2 vị trí đầu và cuối của mảng.
            Các phần tử của mảng in trên một hàng, cách nhau bởi 1 dấu cách

    VD: a[5] = {5,3,2,4,1} => sau khi sắp xếp a[5] = {5,2,3,4,1}
*/

#include <stdio.h>

void swap_array(int n, int a[])
{
    for (int i = 1; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int n, a[100000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    swap_array(n, a);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}