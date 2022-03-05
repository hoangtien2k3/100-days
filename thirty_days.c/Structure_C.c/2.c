#include <stdio.h>
#include <string.h>
#include <math.h>
 
int UCLN(int a, int b)
{
    // a = abs(a);
    // b = abs(b);
    while (a * b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}
 
int BSCNN(int a, int b)
{
    return a * b / UCLN(a, b);
}
 
typedef struct PhanSo
{
    int tuso, mauso;
} PS;
 
PS rutGon(PS a)
{
    PS c;
    c.tuso = a.tuso / UCLN(a.tuso, a.mauso);
    c.mauso = a.mauso / UCLN(a.tuso, a.mauso);
    return c;
}
 
PS cong(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.mauso + a.mauso * b.tuso;
    c.mauso = a.mauso * b.mauso;
    c = rutGon(c);
    return c;
}
 
PS tru(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.mauso - a.mauso * b.tuso;
    c.mauso = a.mauso * b.mauso;
    c = rutGon(c);
    return c;
}
 
PS nhan(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.tuso;
    c.mauso = a.mauso * b.mauso;
    c = rutGon(c);
    return c;
}
 
PS chia(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.mauso;
    c.mauso = a.mauso * b.tuso;
    c = rutGon(c);
    return c;
}
void print(PS a)
{
    printf("%d/%d", a.tuso, a.mauso);
}
int main()
{
    PS a, b, c;
 
    printf("\nNhap phan so a : ");
    scanf("%d%d", &a.tuso, &a.mauso);
    printf("\nNhap phan so b : ");
    scanf("%d%d", &b.tuso, &b.mauso);
    printf("\nToi gian a ta duoc : ");
    a = rutGon(a);
    print(a);
    printf("\nToi gian b ta duoc : ");
    b = rutGon(b);
    print(b);
    printf("\nTong cua hai phan so = ");
    c = cong(a, b);
    print(c);
    printf("\nHieu cua hai phan so = ");
    c = tru(a, b);
    print(c);
    printf("\nTich cua hai phan so = ");
    c = nhan(a, b);
    print(c);
    printf("\nThuong cua hai phan so = ");
    c = chia(a, b);
    print(c);
}