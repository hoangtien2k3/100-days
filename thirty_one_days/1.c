
/*
    struct and typedef struct in C/C++
    difference between struct and typedef struct in C/C++

*/

// struct in C/C++
#include<stdio.h>

struct Point{
  int x;
  int y;
};

int main() {
    struct Point p1;
    printf ("Nhap vao x = "); scanf ("%d", &p1.x);
    printf ("Nhap vao y = "); scanf ("%d", &p1.y);
    printf("X = %d \n", p1.x);
    printf("Y = %d \n", p1.y);
    return 0;
}




// cách 1: typedef struct in C/C++
#include<stdio.h>

typedef struct {
  int x;
  int y;
} Point;

int main() {
    Point p1;
    printf ("Nhap vao x = "); scanf ("%d", &p1.x);
    printf ("Nhap vao y = "); scanf ("%d", &p1.y);
    printf("X = %d \n", p1.x);
    printf("Y = %d \n", p1.y);
    return 0;
}


//  Cách 2: typedef struct in C/C++   
#include<stdio.h>

struct Point{
  int x;
  int y;
};

typedef struct Point Point;

int main() {
    Point p1;
    printf ("Nhap vao x = "); scanf ("%d", &p1.x);
    printf ("Nhap vao y = "); scanf ("%d", &p1.y);
    printf("X = %d \n", p1.x);
    printf("Y = %d \n", p1.y);
    return 0;
}