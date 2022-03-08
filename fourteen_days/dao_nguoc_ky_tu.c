// Đảo ngược các ký tự

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool solution(char * s) {
    int n = strlen(s); // aabaa -> 5 
    for (int i=0; i < n / 2; i++) 
        if (s[i] != s[n - 1 - i])  // so sánh phần tử đầu và phần tử cuối của chuỗi
            return 0;
    return 1;
}

int main() {
    char a[5];
    char * s = &a[5];
    scanf ("%s", a);
    printf ("%d", solution(a));
    return 0;
}