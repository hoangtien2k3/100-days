#include <stdio.h>
typedef struct SONGUYEN
{
    int a;
    int count = 1;
} sn;
int main()
{
    int n;
    int b[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    sn c[100];
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[i] == b[j])
            {
                c[t].a = b[i];
                c[t].count++;

                for (int k = j; k < n; k++)
                    b[k] = b[k + 1];
                j--;
                n--;
            }
        }
        t++;
    }
    for (int x = 0; x < t; x++)
    {
        printf("%d xuat hien %d lan\n", c[x].a, c[x].count);
    }
}


