// VL12 - Liệt kê các ước số theo thứ tự giảm dần
#include <stdio.h>
#include <math.h>

void uoc(int n)
{
    n = abs(n);
    if (n == 0)
    {
        printf("INF"); // nếu n có vô số ước thì in "INF"
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            if (n % i == 0)
                printf("%d ", i);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    uoc(n);
}