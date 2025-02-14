# **Bài tập 10: Dữ liệu nâng cao và sắp xếp**

## I: Mục tiêu:
- Hiểu và áp dụng các cấu trúc dữ liệu nâng cao trong C.
- Thực hành sắp xếp dữ liệu bằng các thuật toán khác nhau.
- Nắm vững cách tổ chức dữ liệu để tối ưu hóa hiệu suất chương trình.

## II: Bài tập mẫu:

### **Đề bài:**
Viết chương trình quản lý danh sách sinh viên, trong đó cho phép:
1. Nhập danh sách sinh viên (bao gồm: mã sinh viên, tên, điểm trung bình).
2. Hiển thị danh sách sinh viên trước và sau khi sắp xếp theo điểm trung bình.
3. Sắp xếp danh sách theo điểm trung bình bằng thuật toán Bubble Sort.

### **Hướng dẫn thực hiện:**
1. Khai báo một cấu trúc `struct SinhVien` để lưu thông tin sinh viên.
2. Nhập danh sách sinh viên từ bàn phím.
3. Viết hàm sắp xếp danh sách theo điểm trung bình bằng thuật toán Bubble Sort.
4. Hiển thị danh sách sinh viên trước và sau khi sắp xếp.

### **Ví dụ minh họa:**
#### **Đầu vào:**
```
Nhập số lượng sinh viên: 3
Nhập mã sinh viên: SV001
Nhập tên: Nguyễn Văn A
Nhập điểm trung bình: 7.5
Nhập mã sinh viên: SV002
Nhập tên: Trần Thị B
Nhập điểm trung bình: 8.2
Nhập mã sinh viên: SV003
Nhập tên: Lê Văn C
Nhập điểm trung bình: 6.9
```

#### **Đầu ra:**
```
Danh sách sinh viên trước khi sắp xếp:
SV001 - Nguyễn Văn A - 7.5
SV002 - Trần Thị B - 8.2
SV003 - Lê Văn C - 6.9

Danh sách sinh viên sau khi sắp xếp:
SV003 - Lê Văn C - 6.9
SV001 - Nguyễn Văn A - 7.5
SV002 - Trần Thị B - 8.2
```

## III: Bài tập thực hành:

### **Đề bài:**
Viết chương trình quản lý danh sách sản phẩm trong một cửa hàng, trong đó:
1. Nhập danh sách sản phẩm (mã sản phẩm, tên sản phẩm, giá tiền).
2. Sắp xếp danh sách sản phẩm theo giá tiền tăng dần bằng thuật toán Selection Sort.
3. Hiển thị danh sách sản phẩm trước và sau khi sắp xếp.

### **Gợi ý thực hiện:**
- Khai báo cấu trúc `struct SanPham` để lưu thông tin sản phẩm.
- Viết hàm nhập danh sách sản phẩm.
- Viết hàm sắp xếp sản phẩm theo giá bằng thuật toán Selection Sort.
- Hiển thị danh sách sản phẩm trước và sau khi sắp xếp.

### **Yêu cầu bổ sung:**
- Kiểm tra tính hợp lệ của dữ liệu đầu vào (giá tiền không được âm).
- Hiển thị danh sách sản phẩm theo định dạng dễ đọc.

