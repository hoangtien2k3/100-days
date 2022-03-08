

#include<stdio.h>

int solution (int n) {
    return ((n*n) + (n-1)*(n-1));
}
int main() {
    int n;
    scanf ("%d", &n);
    printf ("%d",solution(n));
    return 0;
}