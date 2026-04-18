#include <iostream>

using namespace std;

long long FibonacciTraVeVongLap(int viTri) {
    if (viTri <= 0) return 0;
    if (viTri == 1) return 1;
    long long a = 0, b = 1, hienTai;
    for (int chiSo = 2; chiSo <= viTri; ++chiSo) {
        hienTai = a + b;
        a = b;
        b = hienTai;
    }
    return hienTai;
}

long long FibonacciTraVeDeQuy(int viTri) {
    if (viTri <= 0) return 0;
    if (viTri == 1) return 1;
    return FibonacciTraVeDeQuy(viTri - 1) + FibonacciTraVeDeQuy(viTri - 2);
}

void FibonacciVoidVongLap(int viTri, long long &kq) {
    if (viTri <= 0) {
        kq = 0;
        return;
    }
    if (viTri == 1) {
        kq = 1;
        return;
    }
    long long a = 0, b = 1;
    for (int chiSo = 2; chiSo <= viTri; ++chiSo) {
        kq = a + b;
        a = b;
        b = kq;
    }
}

void FibonacciVoidDeQuy(int viTri, long long &kq) {
    if (viTri <= 0) {
        kq = 0;
        return;
    }
    if (viTri == 1) {
        kq = 1;
        return;
    }
    long long kq1, kq2;
    FibonacciVoidDeQuy(viTri - 1, kq1);
    FibonacciVoidDeQuy(viTri - 2, kq2);
    kq = kq1 + kq2;
}

int main() {
    int viTriCanTinh;
    cin >> viTriCanTinh;

    cout << FibonacciTraVeVongLap(viTriCanTinh) << endl;
    cout << FibonacciTraVeDeQuy(viTriCanTinh) << endl;

    long long kqTam1;
    FibonacciVoidVongLap(viTriCanTinh, kqTam1);
    cout << kqTam1 << endl;

    long long kqTam2;
    FibonacciVoidDeQuy(viTriCanTinh, kqTam2);
    cout << kqTam2 << endl;

    return 0;
}