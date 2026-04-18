#include <iostream>

using namespace std;

long long GiaiThuaTraVeVongLap(int soNguyen) {
    long long kq = 1;
    for (int chiSo = 1; chiSo <= soNguyen; ++chiSo) {
        kq *= chiSo;
    }
    return kq;
}

long long GiaiThuaTraVeDeQuy(int soNguyen) {
    if (soNguyen <= 1) return 1;
    return soNguyen * GiaiThuaTraVeDeQuy(soNguyen - 1);
}

void GiaiThuaVoidVongLap(int soNguyen, long long &kq) {
    kq = 1;
    for (int chiSo = 1; chiSo <= soNguyen; ++chiSo) {
        kq *= chiSo;
    }
}

void GiaiThuaVoidDeQuy(int soNguyen, long long &kq) {
    if (soNguyen <= 1) {
        kq = 1;
        return;
    }
    long long kqTam;
    GiaiThuaVoidDeQuy(soNguyen - 1, kqTam);
    kq = soNguyen * kqTam;
}

int main() {
    int soCanTinh;
    cin >> soCanTinh;

    cout << GiaiThuaTraVeVongLap(soCanTinh) << endl;
    cout << GiaiThuaTraVeDeQuy(soCanTinh) << endl;

    long long kqTam1;
    GiaiThuaVoidVongLap(soCanTinh, kqTam1);
    cout << kqTam1 << endl;

    long long kqTam2;
    GiaiThuaVoidDeQuy(soCanTinh, kqTam2);
    cout << kqTam2 << endl;

    return 0;
}