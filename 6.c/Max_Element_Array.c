

// Tìm phần tử lớn nhất của mảng
#include <stdio.h>

void MaxNumberInArray(int n, int a[])
{
    // int length = sizeof(a) / sizeof(a[0]);
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d", max);
}

// Tìm ra phân tử lớn thứ 2 của mảng
void MaxElement_2_array (int n, int a[]) {
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    } // sắp xếp mảng tăng dần
    int max = a[n - 1]; // gia tri lao nhat
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == max)
        {
            count++;
        }
    }
    if (count == n - 1)
    {
        printf("\nNOT FOUND");
    }
    else
    {
        printf("\n%d", a[n - 2 - count]);
    }
}


int main()
{
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    MaxNumberInArray(n, a);
    MaxElement_2_array(n, a);
    return 0;
}