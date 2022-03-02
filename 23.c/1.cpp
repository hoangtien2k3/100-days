
// #include<iostream>
// using namespace std;

// struct temp {
//     int i;
//     float f;
// };

// int main() {
//     temp *ptr;
//     return 0;
// }



// khai báo struct-pointer
#include <iostream>
using namespace std;

struct Distance
{
    int a;
    float b;
};

int main()
{
    Distance *ptr, d;

    ptr = &d;
    
    cout << "Nhap a: ";
    cin >> (*ptr).a;
    cout << "Nhap inch: ";
    cin >> (*ptr).b;
 
    cout << "Hien thi thong tin." << endl;
    cout << "Khoang cach = " << (*ptr).a << " a " << (*ptr).b << " inches";

    return 0;
}