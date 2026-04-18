import os

readme_content = """# 🚀 Bài Tập Kỹ Thuật Lập Trình (C++)

Tài liệu này tổng hợp các bài tập cơ bản và nâng cao về cấu trúc hàm, vòng lặp và đệ quy trong C++. Phù hợp cho việc ôn tập kiến thức về thuật toán và tối ưu hóa logic code.

---

## 📑 Danh Sách Bài Tập

### 🟦 BÀI 1: Tính Tổng Hai Giá Trị
Yêu cầu thực thi phép cộng cơ bản thông qua hai cách tiếp cận hàm:
- **Hàm có giá trị trả về (`int`):** Trực tiếp trả kết quả qua lệnh `return`.
- **Hàm kiểu `void`:** Trả kết quả thông qua tham chiếu (`reference`).

### 🟩 BÀI 2: Tính Giai Thừa (n!)
Viết chương trình tính giai thừa của một số nguyên không âm bằng 4 phương pháp khác nhau để so sánh hiệu năng:
1. **Hàm có giá trị trả về:** Sử dụng vòng lặp (`for`/`while`).
2. **Hàm đệ quy:** Trả kết quả trực tiếp cho tên hàm.
3. **Hàm kiểu `void`:** Sử dụng vòng lặp và lưu kết quả vào biến tham chiếu.
4. **Hàm kiểu `void` đệ quy:** Sử dụng đệ quy và cập nhật kết quả qua tham số.

### 🟨 BÀI 3: Số Fibonacci Thứ n ($F_n$)
Thực hiện tìm số Fibonacci tại vị trí $n$ tương tự 4 phương pháp ở Bài 2.
- **Lưu ý:** Đối với đệ quy thuần túy, cần chú ý đến độ phức tạp thời gian $O(2^n)$ khi $n$ lớn.

### 🟥 BÀI 4: Số Catalan Thứ n ($C_n$)
Số Catalan được ứng dụng nhiều trong các bài toán đếm (số cách chia đa giác, số cấu trúc ngoặc đúng...). 
Công thức truy hồi: $C_{n+1} = \sum_{i=0}^{n} C_i C_{n-i}$
Yêu cầu thực hiện bằng 4 phương pháp:
1. Vòng lặp (sử dụng mảng/vector để lưu trữ giá trị trung gian).
2. Đệ quy có trả về giá trị.
3. Hàm `void` sử dụng vòng lặp.
4. Hàm `void` đệ quy.

---

## 🛠 Hướng Dẫn Kỹ Thuật

### 💻 Môi trường yêu cầu
- **Compiler:** GCC (g++) hỗ trợ chuẩn C++11 trở lên.
- **Kiến trúc:** Phù hợp với các dòng máy chip Apple Silicon (M1/M2) hoặc Intel/AMD.

### 🏗 Biên dịch và Chạy
Bạn có thể biên dịch file code (ví dụ `main.cpp`) bằng lệnh:
```bash
g++ -o app main.cpp
./app# Bai_tap_CTDL-GT_B2
