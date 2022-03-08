/*
    Viết chương trình in ra các số chia hết cho 3 theo thứ tự giảm dần trong khoảng (a, b)
    Hai số nguyên a và b
*/

#include <stdio.h>

int chia(int a, int b)
{
    int count = 0;
    for (int i = b; i > a; i--)
    {
        if (i % 3 == 0 && (i < b && i > a))
        {
            printf("%d ", i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("NOT FOUND");
    }
    return a, b;
}

int main()
{
    int a, b, count = 0;
    scanf("%d%d", &a, &b);
    chia(a, b);
    return 0;
}