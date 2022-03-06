#include <stdio.h>

int bubbleSort(int n, int a[])
{
    int temp, max1, max2;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    max1 = a[n - 1] * a[n - 2] * a[n - 3];
    max2 = a[0] * a[1] * a[2];
    return (max1 > max2) ? max1 : max2; 
}

int main()
{
    int n, a[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf ("%d", bubbleSort(n, a));
    return 0;
}