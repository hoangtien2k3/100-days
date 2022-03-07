
#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct {
    int m, n;
    char a[10][10];
    char b[10][10];
} p1;

int main() {
    // solution p1;
    scanf ("%d", &p1.m);
    scanf ("%d", &p1.n);
    for (int i=0; i< p1.m; i++) {
        for (int j=0; j<p1.n; j++) {
            gets(p1.a[i].a[j]);
        }
    }

    return 0;
}


