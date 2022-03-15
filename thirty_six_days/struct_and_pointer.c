
// CẤP PHÁT BỘ NHỚ ĐỘNG TRONG C/C++
// syntax:      ptr = (struct name*) malloc(n * sizeof(struct name));

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

struct NGAYTHANG {
    int ngay;
    int thang;
    int nam;
};

struct SV {
    char masv[10];
    char hodem[20];
    char ten[10];
    NGAYTHANG ngsinh;
    char gioitinh[5];
    char hokhau[20];
    float diem;
};

void NhapSV (SV *sv) {
    printf ("Nhap MaSV: ");
    scanf ("%s", sv->masv);
}

int main() {    

}