

#include<stdio.h>

int main (void) {
    int a[] = {1,2,3,4,5,6,7,8,9};
    int length = sizeof(a) / sizeof(a[0]);
    printf ("%d", length);
}