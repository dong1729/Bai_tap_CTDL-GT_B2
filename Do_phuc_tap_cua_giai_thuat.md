# 🚀 BÁO CÁO TÍNH ĐỘ PHỨC TẠP GIẢI THUẬT

> **THÔNG TIN SINH VIÊN**
> 
> 👨‍💻 **Họ và tên:** Nguyễn Hòa Đông  
> 📚 **Môn học:** Cấu trúc Dữ liệu và Giải thuật  
> 📝 **Bài tập:** Về nhà số 1 (Đánh giá hàm, Vòng lặp & Đệ quy)

---

## 🎯 1. Khái Niệm Đánh Giá Cơ Bản

Để đo lường hiệu năng của các hàm, báo cáo sử dụng 2 tiêu chí cốt lõi:
* ⏱️ **Độ phức tạp thời gian (Time Complexity):** Đánh giá số lượng phép toán/bước chạy theo kích thước đầu vào $n$.
* 💾 **Độ phức tạp không gian (Space Complexity):** Đánh giá lượng bộ nhớ phát sinh (biến cục bộ, mảng, Call Stack) theo kích thước $n$.

---

## 🔍 2. Phân Tích Chi Tiết Các Hàm

### 🟦 BÀI 1: TÍNH TỔNG HAI SỐ
Hai hàm tính tổng đều chỉ thực hiện 1 phép toán số học duy nhất, không phụ thuộc vào độ lớn của dữ liệu đầu vào.

* **[1] Hàm `TinhTongCoTraVe` (Kiểu `int`)**
  * ⏱️ **Time:** 🟢 `$O(1)$` *(Thực hiện trực tiếp phép `+` và trả về)*
  * 💾 **Space:** 🟢 `$O(1)$`
* **[2] Hàm `TinhTongKhongTraVe` (Kiểu `void` tham chiếu)**
  * ⏱️ **Time:** 🟢 `$O(1)$` *(Gán trực tiếp qua địa chỉ bộ nhớ)*
  * 💾 **Space:** 🟢 `$O(1)$`

---

### 🟩 BÀI 2: TÍNH GIAI THỪA $(n!)$

* **[3] Hàm `GiaiThuaTraVeVongLap` (Trả về + Lặp)**
  * ⏱️ **Time:** 🟡 `$O(n)$` *(Vòng lặp `for` chạy đúng $n$ lần)*
  * 💾 **Space:** 🟢 `$O(1)$`
* **[4] Hàm `GiaiThuaTraVeDeQuy` (Trả về + Đệ quy)**
  * ⏱️ **Time:** 🟡 `$O(n)$` *(Gọi lại chính nó $n$ lần)*
  * 💾 **Space:** 🔴 `$O(n)$` *(Tốn $n$ khung nhớ Stack - Dễ tràn bộ nhớ)*
* **[5] Hàm `GiaiThuaVoidVongLap` (Void + Lặp)**
  * ⏱️ **Time:** 🟡 `$O(n)$`
  * 💾 **Space:** 🟢 `$O(1)$`
* **[6] Hàm `GiaiThuaVoidDeQuy` (Void + Đệ quy)**
  * ⏱️ **Time:** 🟡 `$O(n)$`
  * 💾 **Space:** 🔴 `$O(n)$` *(Tốn bộ nhớ Call Stack)*

---

### 🟨 BÀI 3: DÃY SỐ FIBONACCI $(F_n)$

* **[7] Hàm `FibonacciTraVeVongLap` (Trả về + Lặp)**
  * ⏱️ **Time:** 🟡 `$O(n)$` *(Chạy tuyến tính)*
  * 💾 **Space:** 🟢 `$O(1)$` *(Tối ưu, chỉ dùng 3 biến trạng thái)*
* **[8] Hàm `FibonacciTraVeDeQuy` (Trả về + Đệ quy)**
  * ⏱️ **Time:** 🔴 `$O(2^n)$` *(Cây đệ quy bùng nổ, tính lặp lại bài toán con)*
  * 💾 **Space:** 🔴 `$O(n)$` 
* **[9] Hàm `FibonacciVoidVongLap` (Void + Lặp)**
  * ⏱️ **Time:** 🟡 `$O(n)$`
  * 💾 **Space:** 🟢 `$O(1)$`
* **[10] Hàm `FibonacciVoidDeQuy` (Void + Đệ quy)**
  * ⏱️ **Time:** 🔴 `$O(2^n)$` *(Rất chậm với $n$ lớn)*
  * 💾 **Space:** 🔴 `$O(n)$`

---

### 🟥 BÀI 4: SỐ CATALAN $(C_n)$

* **[11] Hàm `CatalanTraVeVongLap` (Trả về + Lặp)**
  * ⏱️ **Time:** 🔴 `$O(n^2)$` *(Sử dụng 2 vòng lặp lồng nhau)*
  * 💾 **Space:** 🔴 `$O(n)$` *(Cần mảng `vector` để lưu mảng trạng thái DP)*
* **[12] Hàm `CatalanTraVeDeQuy` (Trả về + Đệ quy)**
  * ⏱️ **Time:** 💀 `$O(4^n)$` *(Cực kỳ chậm, đa phân nhánh)*
  * 💾 **Space:** 🔴 `$O(n)$`
* **[13] Hàm `CatalanVoidVongLap` (Void + Lặp)**
  * ⏱️ **Time:** 🔴 `$O(n^2)$`
  * 💾 **Space:** 🔴 `$O(n)$`
* **[14] Hàm `CatalanVoidDeQuy` (Void + Đệ quy)**
  * ⏱️ **Time:** 💀 `$O(4^n)$` *(Chạy bất khả thi với $n > 20$)*
  * 💾 **Space:** 🔴 `$O(n)$`

---

## 📊 3. Bảng Tổng Hợp Đánh Giá (Summary)

> **💡 Chú giải màu sắc:** > 🟢 **Tối ưu** | 🟡 **Chấp nhận được** | 🔴 **Chậm / Tốn bộ nhớ** | 💀 **Không nên dùng**

| STT | Bài toán | Kiểu hàm | Kỹ thuật | Time ⏱️ | Space 💾 | Đánh giá chung |
| :---: | :--- | :--- | :--- | :---: | :---: | :--- |
| 1 | Tính Tổng | Trả về | Toán học | 🟢 $O(1)$ | 🟢 $O(1)$ | Rất Tốt |
| 2 | Tính Tổng | Void | Toán học | 🟢 $O(1)$ | 🟢 $O(1)$ | Rất Tốt |
| 3 | Giai Thừa | Trả về | Vòng lặp | 🟡 $O(n)$ | 🟢 $O(1)$ | Tốt |
| 4 | Giai Thừa | Trả về | Đệ quy | 🟡 $O(n)$ | 🔴 $O(n)$ | Dễ tràn Stack |
| 5 | Giai Thừa | Void | Vòng lặp | 🟡 $O(n)$ | 🟢 $O(1)$ | Tốt |
| 6 | Giai Thừa | Void | Đệ quy | 🟡 $O(n)$ | 🔴 $O(n)$ | Dễ tràn Stack |
| 7 | Fibonacci | Trả về | Vòng lặp | 🟡 $O(n)$ | 🟢 $O(1)$ | Tốt |
| 8 | Fibonacci | Trả về | Đệ quy | 🔴 $O(2^n)$ | 🔴 $O(n)$ | Quá chậm |
| 9 | Fibonacci | Void | Vòng lặp | 🟡 $O(n)$ | 🟢 $O(1)$ | Tốt |
| 10 | Fibonacci | Void | Đệ quy | 🔴 $O(2^n)$ | 🔴 $O(n)$ | Quá chậm |
| 11 | Catalan | Trả về | Vòng lặp | 🔴 $O(n^2)$ | 🔴 $O(n)$ | Tạm ổn |
| 12 | Catalan | Trả về | Đệ quy | 💀 $O(4^n)$ | 🔴 $O(n)$ | Treo máy |
| 13 | Catalan | Void | Vòng lặp | 🔴 $O(n^2)$ | 🔴 $O(n)$ | Tạm ổn |
| 14 | Catalan | Void | Đệ quy | 💀 $O(4^n)$ | 🔴 $O(n)$ | Treo máy |

---
*✍️ Báo cáo được thực hiện nhằm mục đích phân tích và tối ưu hóa giải thuật trong C++.*
