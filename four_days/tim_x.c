// Tìm x nguyên dương lớn nhất, biết 1 + 2 + 3 + ... + x <= N ;

#include <stdio.h>

int main()
{
    int N, x, sum = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        sum += i;
        if (sum > N)
        {
            x = i - 1;
            break;
        }
    }
    printf("%d", x);
    return 0;
}