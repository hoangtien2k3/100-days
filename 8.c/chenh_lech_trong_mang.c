
/*
    Cho 1 mảng các số nguyên AA có nn phần tử.
    Hãy viết chương trình tìm chênh lệch lớn nhất giữa 2 phần tử bất kỳ trong mảng.(Xem ví dụ để hiểu rõ hơn)

    + Dòng 1 là số lượng phần tử của mảng n
    + Dòng tiếp theo là nn số nguyên tương ứng là các phần tử của mảng A

*/

#include <stdio.h>
#include <math.h>

int chenhlech(int n, int a[])
{
    int max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int check = abs(a[j] - a[i]);
            if (check > max)
            {
                max = check;
            }
        }
    }
    printf("%d", max);
    return max;
}
int main()
{
    int n, a[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    chenhlech(n, a);
    return 0;
}


