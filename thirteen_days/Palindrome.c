
#include<stdio.h>
#include<string.h>

int main() {
    char s[] = "";
    // gets (s);
    gets (s);
    // fgets (ten_mang , sizef(ten_mang) , stdin); // dùng khi biết trước kích thước của chuỗi hoặc mảng
    // scanf ("%s", s);
    int n = strlen(s);
    int x = s.strlen();
    printf ("%s", s);
    printf ("\n%d", n);
    printf ("\n%d", x);



}