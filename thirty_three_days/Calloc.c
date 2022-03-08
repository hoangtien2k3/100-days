

// #include<stdio.h>
// #include<stdlib.h>

/*
syntax: ptr = (castType*) calloc(n, size);
syntax: ptr = (castType*) malloc(size);
*/


#include <stdio.h>

typedef struct {   
    char name[20];
    char sex;
    int age;
    double height;
    double weight;
} person_t;

int main(void){
  person_t p;

  printf("name=%d, sex=%d, age=%d, height=%d, weight=%d\n",
        sizeof(p.name), sizeof(p.sex), sizeof(p.age), sizeof(p.height), sizeof(p.weight));
  printf("person_t=%d\n", sizeof(p));
}