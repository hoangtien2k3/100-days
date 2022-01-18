// số lần xuất hiện của các phần tử trong mảng
#include<stdio.h>

const int MAX = 1e6;
int cnt[MAX];

void sumSeeArray (int n, int a[]) {
    for (int i = 0; i < MAX; i++)
        cnt[i] = 0;
    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }
    for (int i = 0; i < MAX; i++)
    {
        if (cnt[i] > 0)
        {
            printf("Gia tri %d xuat hien %d lan\n", i, cnt[i]);
        }
    }
}
int main()
{
    int n;
    do
    {
        printf ("Nhap vao n = ");
        scanf ("%d", &n);
    } while (n < 1);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        do
        {
            printf ("Nhap a[%d] = ", i);
            scanf ("%d", &a[i]);
        } while (a[i] < 0);
    }
    sumSeeArray (n, a);
    return 0;
}