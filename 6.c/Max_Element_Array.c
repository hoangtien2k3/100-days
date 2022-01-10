

// Tìm phần tử lớn nhất của mảng
#include <stdio.h>

void MaxNumberInArray(int n, int a[])
{
    // Độ dài mảng(số phần tử) = [Kích thước mảng] / [Kích thước kiểu mảng]
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

// cách 1:Tìm ra phân tử lớn thứ 2 của mảng
int MaxElement_2_array (int n, int a[]) {
    if (n <= 0) {
        printf("\nNOT FOUND");
        return 0;
    } else {
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
            } else {
                break;
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
    return 0;
}

// cách 2: tìm phần tử lớn thứ 2 trong mảng
// int Max_Array_2 (int n, int a[]) {
//     if (n <= 0) {
//         printf("NOT FOUND");
//         return 0;
//     } else {
//         for (int i=0; i < n - 1; i++) {
//             for (int j = i + 1; j < n ; j++) {
//                 if (a[i] < a[j]) {
//                     int temp = a[i];
//                     a[i] = a[j];
//                     a[j] = temp;
//                 }
//             }
//         }
//         return a[1];
//     }
// }

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
    // printf ("%d", Max_Array_2(n, a));
    return 0;
}