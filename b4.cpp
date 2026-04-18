#include <iostream>
#include <vector>

using namespace std;

long long CatalanTraVeVongLap(int viTri) {
    if (viTri <= 0) return 1;
    vector<long long> mangCatalan(viTri + 1, 0);
    mangCatalan[0] = 1;
    for (int chiSoNgoai = 1; chiSoNgoai <= viTri; ++chiSoNgoai) {
        for (int chiSoTrong = 0; chiSoTrong < chiSoNgoai; ++chiSoTrong) {
            mangCatalan[chiSoNgoai] += mangCatalan[chiSoTrong] * mangCatalan[chiSoNgoai - 1 - chiSoTrong];
        }
    }
    return mangCatalan[viTri];
}

long long CatalanTraVeDeQuy(int viTri) {
    if (viTri <= 0) return 1;
    long long tong = 0;
    for (int chiSo = 0; chiSo < viTri; ++chiSo) {
        tong += CatalanTraVeDeQuy(chiSo) * CatalanTraVeDeQuy(viTri - 1 - chiSo);
    }
    return tong;
}

void CatalanVoidVongLap(int viTri, long long &kq) {
    if (viTri <= 0) {
        kq = 1;
        return;
    }
    vector<long long> mangCatalan(viTri + 1, 0);
    mangCatalan[0] = 1;
    for (int chiSoNgoai = 1; chiSoNgoai <= viTri; ++chiSoNgoai) {
        for (int chiSoTrong = 0; chiSoTrong < chiSoNgoai; ++chiSoTrong) {
            mangCatalan[chiSoNgoai] += mangCatalan[chiSoTrong] * mangCatalan[chiSoNgoai - 1 - chiSoTrong];
        }
    }
    kq = mangCatalan[viTri];
}

void CatalanVoidDeQuy(int viTri, long long &kq) {
    if (viTri <= 0) {
        kq = 1;
        return;
    }
    kq = 0;
    for (int chiSo = 0; chiSo < viTri; ++chiSo) {
        long long kqTrai, kqPhai;
        CatalanVoidDeQuy(chiSo, kqTrai);
        CatalanVoidDeQuy(viTri - 1 - chiSo, kqPhai);
        kq += kqTrai * kqPhai;
    }
}

int main() {
    int viTriCanTinh;
    cin >> viTriCanTinh;

    cout << CatalanTraVeVongLap(viTriCanTinh) << endl;
    cout << CatalanTraVeDeQuy(viTriCanTinh) << endl;

    long long kqTam1;
    CatalanVoidVongLap(viTriCanTinh, kqTam1);
    cout << kqTam1 << endl;

    long long kqTam2;
    CatalanVoidDeQuy(viTriCanTinh, kqTam2);
    cout << kqTam2 << endl;

    return 0;
}