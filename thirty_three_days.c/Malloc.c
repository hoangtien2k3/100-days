

// syntax: ptr = (castType*) malloc(size);

// #include<stdio.h>
// #include<stdlib.h>

// int main() {
//     int n, i, *ptr, sum = 0;
//     printf ("Nhap so luong phan tu n = ");
//     scanf ("%d", &n);
//     // ptr = (int *) calloc(4, sizeof(int));
//     ptr = (int *) malloc(n * sizeof(int));
//     // nếu không thể cấp phát thì hàm Malloc sẽ trả về con trỏ NULL ;
//     if (ptr == NULL) {
//         printf ("Error, not memory allocation");
//         exit(0);
//     }
//     for (int i=0; i<n; i++)  {
//         scanf ("%d", ptr + i);
//         sum += *(ptr + i);
//     }
//     printf ("Tong = %d", sum);

//     // giải phóng vùng nhớ cho con trỏ
//     free(ptr);
//     return 0;
// }


/////////////////////////////
#include <stdio.h>  
#include <stdlib.h>  
void main()  
{  
    int num, i, sum = 0;  
    int *ptr, *p;  
    printf (" The number of elements to be entered: \n ");  
    scanf (" %d", &num); // define the no. of element to be entered   
    // use malloc() function to define the size of memory block  
    ptr = (int *) malloc (num);  
    p = ptr; // store the base address of ptr in p    
    // validate the string is full or not  
    if (ptr == NULL)  
    {  
        printf (" Memory is not allocated ");  
        exit(0); // exit from program  
    }  
    else  
    {  
        printf (" Memory is created using the malloc() function ");  
    }  
    printf ("\n Enter the elements in allocated space: ");    
    for (i = 1; i <= num; i++)  
    {  
        scanf (" %d", ptr);  
        sum = sum + *ptr;  
        ptr++;  
    }     
    // print the entered number  
    printf (" Elements are: ");  
    for (i = 1; i <= num; i++)  
    {  
        printf (" \n %d", *p);  
        p++;  
    }     
    printf (" \n The addition of stored elements is: %d ", sum);  
    free (ptr); // use free() function to release the occupy space using malloc() function  
    getch();      
}  



