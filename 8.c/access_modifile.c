
#include<stdio.h>
#include<stdbool.h>
bool den = true;
    
// int n = 100; // global variable
int run () {
    printf ("den la: %d", den);
    if (den) { // den == true
        printf("\ncho vua di qua so chan");
    } else {
        printf("\ncho vua di qua so le");
    }
    // printf("a is ??? : %d", a);
    // printf ("\nn is : %d", n);

}


int main() {
    // int a = 20, b = 30;
    // printf ("a is : %d", a);
    // printf("\nb is : %d", b);
    // printf("\nn is : %d", n);
    int d;
    scanf ("%d", &d);
    run();
    if (d % 2 == 0) {
        den = true;
    } else {
        den = false;
    }

    

}