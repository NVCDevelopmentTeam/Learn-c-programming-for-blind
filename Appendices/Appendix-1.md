# **Phụ lục**

## Phần I. Các hàm chuẩn trong thư viện C

### 1. Nhập/Xuất dữ liệu
- `printf()`: Xuất dữ liệu ra màn hình.
- `scanf()`: Nhập dữ liệu từ bàn phím.
- `puts()`: Xuất một chuỗi ký tự và xuống dòng.
- `gets()`: Nhập một chuỗi ký tự (không khuyến khích do lỗi tràn bộ nhớ, thay bằng `fgets()`).
- `fgets()`: Nhập chuỗi có giới hạn ký tự.

### 2. Xử lý chuỗi
- `strlen()`: Tính độ dài chuỗi.
- `strcpy()`: Sao chép chuỗi.
- `strncpy()`: Sao chép chuỗi với giới hạn ký tự.
- `strcat()`: Nối chuỗi.
- `strncat()`: Nối chuỗi với giới hạn ký tự.
- `strcmp()`: So sánh hai chuỗi.
- `strncmp()`: So sánh hai chuỗi với giới hạn ký tự.
- `strchr()`: Tìm ký tự trong chuỗi.
- `strstr()`: Tìm chuỗi con trong chuỗi mẹ.

### 3. Xử lý số
- `abs()`: Trị tuyệt đối.
- `pow()`: Lũy thừa.
- `sqrt()`: Căn bậc hai.
- `ceil()`: Làm tròn lên.
- `floor()`: Làm tròn xuống.
- `round()`: Làm tròn đến số nguyên gần nhất.

### 4. Quản lý bộ nhớ
- `malloc()`: Cấp phát bộ nhớ động.
- `calloc()`: Cấp phát bộ nhớ động (khởi tạo về 0).
- `realloc()`: Thay đổi kích thước vùng nhớ cấp phát.
- `free()`: Giải phóng bộ nhớ động.

### 5. Thời gian
- `time()`: Lấy thời gian hiện tại.
- `difftime()`: Tính thời gian giữa hai mốc thời gian.
- `clock()`: Lấy số xung nhịp CPU từ khi chạy chương trình.
- `asctime()`: Chuyển đổi thời gian thành chuỗi.
- `strftime()`: Định dạng thời gian.

Phần này giúp học viên có cái nhìn tổng quan về các hàm phổ biến trong C và dễ dàng tra cứu khi lập trình.

