# BÁO CÁO TÍNH ĐỘ PHỨC TẠP GIẢI THUẬT - BÀI TẬP VỀ NHÀ SỐ 1

**Họ và tên:** Nguyễn Hòa Đông
**Môn học:** Cấu trúc Dữ liệu và Giải thuật

---

## 1. Khái niệm đánh giá:
* **Độ phức tạp thời gian (Time Complexity):** Đánh giá số lượng phép toán/bước chạy theo kích thước đầu vào $n$.
* **Độ phức tạp không gian (Space Complexity):** Đánh giá lượng bộ nhớ phát sinh (biến cục bộ, mảng, Call Stack) theo kích thước đầu vào $n$.

---

## 2. Phân tích chi tiết các hàm

### BÀI 1: TÍNH TỔNG HAI SỐ
Hai hàm tính tổng đều chỉ thực hiện 1 phép toán số học duy nhất, không phụ thuộc vào độ lớn của dữ liệu đầu vào.

**1. Hàm `TinhTongCoTraVe` (Hàm trả về kiểu int)**
* **Thời gian:** $O(1)$ - Thực hiện trực tiếp phép `+` và gán kết quả trả về.
* **Không gian:** $O(1)$ - Chỉ lưu một giá trị trả về tại bộ nhớ tạm.

**2. Hàm `TinhTongKhongTraVe` (Hàm void dùng tham chiếu)**
* **Thời gian:** $O(1)$ - Gán trực tiếp qua địa chỉ bộ nhớ.
* **Không gian:** $O(1)$ - Không tốn thêm bộ nhớ vì thao tác trực tiếp trên biến truyền vào từ `main`.

---

### BÀI 2: TÍNH GIAI THỪA $(n!)$

**3. Hàm `GiaiThuaTraVeVongLap` (Hàm trả về, dùng vòng lặp)**
* **Thời gian:** $O(n)$ - Có 1 vòng lặp `for` chạy đúng $n$ lần.
* **Không gian:** $O(1)$ - Chỉ khởi tạo 1 biến `kq` và 1 biến đếm `chiSo`.

**4. Hàm `GiaiThuaTraVeDeQuy` (Hàm trả về, đệ quy)**
* **Thời gian:** $O(n)$ - Hàm gọi lại chính nó $n$ lần để chạm tới điểm dừng (Base case).
* **Không gian:** $O(n)$ - Hệ thống phải cấp phát $n$ khung nhớ (Stack frame) trên Call Stack cho mỗi lần gọi hàm.

**5. Hàm `GiaiThuaVoidVongLap` (Hàm void, dùng vòng lặp)**
* **Thời gian:** $O(n)$ - Tương tự hàm số 3, vòng lặp chạy $n$ bước.
* **Không gian:** $O(1)$ - Cập nhật trực tiếp vào biến tham chiếu, không tốn thêm bộ nhớ mảng.

**6. Hàm `GiaiThuaVoidDeQuy` (Hàm void, đệ quy)**
* **Thời gian:** $O(n)$ - Đệ quy sâu $n$ tầng.
* **Không gian:** $O(n)$ - Tốn bộ nhớ Call Stack tỷ lệ thuận với độ sâu $n$.

---

### BÀI 3: DÃY SỐ FIBONACCI $(F_n)$

**7. Hàm `FibonacciTraVeVongLap` (Hàm trả về, dùng vòng lặp)**
* **Thời gian:** $O(n)$ - Vòng lặp chạy từ $2$ đến $n$. Tại mỗi bước thực hiện phép cộng số học đơn giản.
* **Không gian:** $O(1)$ - Thuật toán tối ưu chỉ sử dụng 3 biến (`a`, `b`, `hienTai`) thay vì tạo mảng độ dài $n$.

**8. Hàm `FibonacciTraVeDeQuy` (Hàm trả về, đệ quy)**
* **Thời gian:** $O(2^n)$ - Mỗi hàm tách ra thành 2 nhánh đệ quy, tạo thành một cây đệ quy nhị phân. Nhiều bài toán con bị tính lặp lại (Overlapping).
* **Không gian:** $O(n)$ - Độ sâu tối đa của cây đệ quy trên Call Stack là $n$.

**9. Hàm `FibonacciVoidVongLap` (Hàm void, dùng vòng lặp)**
* **Thời gian:** $O(n)$ - Tối ưu tuyến tính, vòng lặp chạy $n$ lần.
* **Không gian:** $O(1)$ - Không dùng mảng phụ.

**10. Hàm `FibonacciVoidDeQuy` (Hàm void, đệ quy)**
* **Thời gian:** $O(2^n)$ - Bùng nổ tổ hợp, hiệu năng rất kém với $n$ lớn.
* **Không gian:** $O(n)$ - Tốn bộ nhớ Stack.

---

### BÀI 4: SỐ CATALAN $(C_n)$

**11. Hàm `CatalanTraVeVongLap` (Hàm trả về, dùng vòng lặp)**
* **Thời gian:** $O(n^2)$ - Hàm sử dụng 2 vòng lặp lồng nhau (vòng ngoài chạy $n$ lần, vòng trong chạy $i$ lần). Tổng số phép tính là tổng cấp số cộng từ $1$ đến $n$, tỷ lệ với $n^2$.
* **Không gian:** $O(n)$ - Cần khởi tạo mảng `vector<long long>` kích thước $n+1$ để lưu các kết quả trung gian.

**12. Hàm `CatalanTraVeDeQuy` (Hàm trả về, đệ quy)**
* **Thời gian:** $O(4^n)$ *(giới hạn cận trên)* - Đệ quy kết hợp vòng lặp tạo ra sự phân nhánh đa chiều khổng lồ.
* **Không gian:** $O(n)$ - Độ sâu của Call Stack.

**13. Hàm `CatalanVoidVongLap` (Hàm void, dùng vòng lặp)**
* **Thời gian:** $O(n^2)$ - Hai vòng lặp lồng nhau.
* **Không gian:** $O(n)$ - Vẫn phải dùng mảng `vector` bên trong hàm để lưu trạng thái quy hoạch động.

**14. Hàm `CatalanVoidDeQuy` (Hàm void, đệ quy)**
* **Thời gian:** $O(4^n)$ - Không lưu lại kết quả trung gian nên phải tính lại toàn bộ các nhánh con.
* **Không gian:** $O(n)$ - Độ sâu tối đa của đệ quy.

---

## 3. Bảng Tổng Hợp Đánh Giá

| STT | Bài toán | Kiểu hàm | Kỹ thuật | Time Complexity | Space Complexity | Đánh giá hiệu năng |
| :-- | :--- | :--- | :--- | :--- | :--- | :--- |
| 1 | Tính Tổng | Trả về | Phép tính cơ bản | $O(1)$ | $O(1)$ | Tối ưu |
| 2 | Tính Tổng | Void | Phép tính cơ bản | $O(1)$ | $O(1)$ | Tối ưu |
| 3 | Giai Thừa | Trả về | Vòng lặp | $O(n)$ | $O(1)$ | Tối ưu |
| 4 | Giai Thừa | Trả về | Đệ quy | $O(n)$ | $O(n)$ | Cảnh báo tràn Stack |
| 5 | Giai Thừa | Void | Vòng lặp | $O(n)$ | $O(1)$ | Tối ưu |
| 6 | Giai Thừa | Void | Đệ quy | $O(n)$ | $O(n)$ | Cảnh báo tràn Stack |
| 7 | Fibonacci | Trả về | Vòng lặp | $O(n)$ | $O(1)$ | Tối ưu |
| 8 | Fibonacci | Trả về | Đệ quy | $O(2^n)$ | $O(n)$ | Quá chậm |
| 9 | Fibonacci | Void | Vòng lặp | $O(n)$ | $O(1)$ | Tối ưu |
| 10 | Fibonacci | Void | Đệ quy | $O(2^n)$ | $O(n)$ | Quá chậm |
| 11 | Catalan | Trả về | Vòng lặp | $O(n^2)$ | $O(n)$ | Chấp nhận được |
| 12 | Catalan | Trả về | Đệ quy | $O(4^n)$ | $O(n)$ | Rất chậm |
| 13 | Catalan | Void | Vòng lặp | $O(n^2)$ | $O(n)$ | Chấp nhận được |
| 14 | Catalan | Void | Đệ quy | $O(4^n)$ | $O(n)$ | Rất chậm |
