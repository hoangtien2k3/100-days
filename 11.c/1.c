

#include <stdio.h>

void Nhap(int m, int n, int x)
{
    int m, n, x;
    scanf("%d%d%d", &m, &n, &x);
    int a[m][n];

    int b[n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d%d", a[i][j]);
            if ((x - 1) == i)
            {
                b[j] = a[i][j];
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[i] > b[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[i] = temp;
            }
        }
    }
}

int OutputArray(int m, int n, int x)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((x - 1) == i)
            {
                printf("%d ", b[j])
            }
            else
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int m, n, x;
    int a[m][n];
    int b[n];
    Nhap(m, n, x);
    OutputArray(m, n, x);
    return 0;
}