/*
    Bạn có một hình hộp chữ nhật có kích thước nguyên và biết được diện tích của 3 mặt có chung 1 đỉnh.
    Nhiệm vụ của bạn là tính tổng độ dài tất cả các cạnh của hình hộp chữ nhật này.

    Gồm 11 dòng duy nhất chưa 33 số nguyên dương S1, S2 và S3 ( 1<=S1, S2, S3<=10^18)
    
*/

#include<stdio.h>   
#include<math.h>

int sumDimensions (int S1, int S2, int S3) {
    int a, b, h, sum ;
    h = sqrt((S1*S3)/S2);
    a = S1/h;
    b = S3/h;
    // int a = sqrt(S1 * S2 * S3) / S1;
    // int b = sqrt(S1 * S2 * S3) / S2;
    // int h = sqrt(S1 * S2 * S3) / S3;
    sum = 4*(a+b+h);
    return sum;
}

int main() {
    int S1, S2, S3;
    scanf ("%d%d%d", &S1, &S2, &S3);
    printf ("%d", sumDimensions (S1, S2, S3));
    return 0;
}