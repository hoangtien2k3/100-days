
// #include<stdio.h>
// #include<stdlib.h>

// int main() {
//     int *ptr = malloc (10 * sizeof(int ));
//     if (ptr != NULL)  {
//         printf ("Bo nho duoc khoi tao su dung Malloc ");
//     } else {
//         printf ("Memory khong duoc tao");
//     }

//     return 0;
// }

////////////////////////
#include <stdio.h>  
#include <stdlib.h>   
int main ()  
{  
    int *ptr, size, i;  
    printf (" Enter the allocated size of memory ");  
    scanf (" %d", &size);        
    ptr = malloc (size * sizeof(int));     
    if (ptr != NULL)  
    {  
        printf (" Enter numbers from the user: ");        
        for ( i = 0; i < size; i++)  
        {  
            scanf (" %d", ptr + i);  
        }         
        printf (" Numbers are stores in contiguous memory: \n ");         
        for ( i = 0; i < size; i++)  
        {  
            printf (" \n The number is: %d", *(ptr + i)); 
        }  
        printf (" \n Memory is created using the malloc() function ");  
        return 0;  
    } else  
        printf (" memory is not created ");  
    return 0;  
} 