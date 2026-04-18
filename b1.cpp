#include <iostream>

using namespace std;

int TinhTongCoTraVe(int a, int b) {
    return a + b;
}

void TinhTongKhongTraVe(int a, int b, int &ketQua) {
    ketQua = a + b;
}

int main() {
    int a, b;
    cin >> a >> b;

    int tongTraVe = TinhTongCoTraVe(a, b);
    cout << tongTraVe << endl;

    int tongKhongTraVe;
    TinhTongKhongTraVe(a, b, tongKhongTraVe);
    cout << tongKhongTraVe << endl;

    return 0;
}