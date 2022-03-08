

#include <stdio.h>
 
//Khai báo cấu trúc
typedef struct person {
    char *name;
    char sex;
    int age;
    char *add;
    char *job;
} person2;
 
int main(void) {
    //Khai báo thực thể kiyoshi, và con trỏ tới thực thể này
    person2 kiyoshi, *p1;
    // Gán địa chỉ của thực thể vào con trỏ
    p1 = &kiyoshi; 

    //Truy cập và gán giá trị vào thành viên trong con trỏ cấu trúc
    p1->name = "Kiyoshi";
    p1->sex = 'M';     
    p1->age = 20;
    p1->add = "Tokyo";
    p1->job = "BrSE";

    printf("kiyoshi= %s %c %d %s %s\n", kiyoshi.name, kiyoshi.sex, kiyoshi.age, kiyoshi.add, kiyoshi.job);
 
     //Khai báo thực thể honda, và con trỏ tới thực thể này
    person2 honda, *p2;

    // Gán địa chỉ của thực thể vào con trỏ
    p2 = &honda;

    //Gán con trỏ của thực thể kiyoshi vào con trỏ của thực thể honda
    //Qua đó tiến hành copy thực thể kiyoshi vào thực thể honda
    *p2 = *p1;
    printf("honda= %s %c %d %s %s\n", honda.name, honda.sex, honda.age, honda.add, honda.job);
 
    return 0;
}