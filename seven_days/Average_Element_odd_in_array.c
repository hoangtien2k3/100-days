
/*
    Bạn hãy viết chương trình tính trung bình cộng của tất cả các phần tử lẻ trong mảng 1 chiều các số nguyên AA có nn phần tử.

    input: một số nguyên dương nn là số lượng phần tử của mảng A
           n số nguyên tương ứng là các phần tử của mảng A
    output: lấy 4 số sau dấu phẩy
    
*/

#include <stdio.h>

int average(int n, int a[])
{
    int count = 0;
    float sum_average = 0, sum;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            sum_average += a[i];
            count++;
        }
    }
    sum = sum_average / count;
    printf ("%.4f", sum);
    return sum;
}
int main()
{
    int n, a[1000];
    int sum;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    average(n, a);
    return 0;
}
