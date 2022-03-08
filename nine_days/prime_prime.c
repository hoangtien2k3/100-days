
#include <stdio.h>
#include <math.h>
int countUoc (unsigned int n) {
    int count;
    for (int i = 2; i <= n; i++)
    {
        count = 0;
        while (n % i == 0) // lặp lại tất cả các số nguyên tố
        {
            ++count; // đếm xem các số nguyên tố
            n /= i;
        }
        if (count)
        {
            printf("%d", i);
            if (count >= 1)
            {
                printf(" %d", count);
            }
            if (n > i)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
int main()
{
    unsigned int n;
    scanf("%d", &n);
    countUoc (n);
    return 0;
}
