#include <stdio.h>

void maxCore (int n, int a[]) {
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] >= a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    if (a[n - 1] * a[n - 2] <= a[0] * a[1])
    {
        printf("%d", a[0] * a[1]);
    }
    else
    {
        printf("%d", a[n - 1] * a[n - 2]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    maxCore (n,a);
    return 0;
}
