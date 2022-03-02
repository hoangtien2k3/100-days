#include <iostream>
using namespace std;

struct sinh_vien{
    char ten[20];
    int tuoi;
};

int main(){
    sinh_vien *con_tro, sv1;
    con_tro = &sv1;
    cout << "Nhap ten: ";
    cin.get((*con_tro).ten, 20);;
    cout << "Tuoi: ";
    cin >> (*con_tro).tuoi;
    cout << "Thong tin sinh vien." << endl;
    cout << "Ten: " << (*con_tro).ten << endl << "Tuoi: " <<(*con_tro).tuoi;
    return 0;
}