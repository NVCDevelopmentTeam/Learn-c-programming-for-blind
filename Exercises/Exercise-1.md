# **Bài tập 1: Biến và Kiểu dữ liệu trong C**

## I. Mục tiêu
- Hiểu khái niệm về biến và kiểu dữ liệu trong ngôn ngữ lập trình C.
- Biết cách khai báo, khởi tạo và sử dụng biến.
- Ứng dụng các kiểu dữ liệu phù hợp trong lập trình.
- Rèn luyện kỹ năng viết code chuẩn và dễ đọc.

## II. Bài tập mẫu
**Yêu cầu:**
Viết một chương trình C khai báo các biến thuộc các kiểu dữ liệu khác nhau và in ra màn hình giá trị của chúng.

**Gợi ý thực hiện:**
1. Khai báo các biến thuộc các kiểu dữ liệu như `int`, `float`, `char`, `double`.
2. Khởi tạo giá trị cho từng biến.
3. Sử dụng `printf` để in giá trị của từng biến ra màn hình.

**Ví dụ minh họa:**
```c
#include <stdio.h>

int main() {
    int soNguyen = 10;
    float soThuc = 3.14;
    char kyTu = 'A';
    double soThucLon = 12345.6789;

    printf("Giá trị của biến soNguyen: %d\n", soNguyen);
    printf("Giá trị của biến soThuc: %.2f\n", soThuc);
    printf("Giá trị của biến kyTu: %c\n", kyTu);
    printf("Giá trị của biến soThucLon: %.4lf\n", soThucLon);

    return 0;
}
```

## III. Bài tập thực hành
### Bài 1:
Viết chương trình khai báo các biến với các kiểu dữ liệu `int`, `float`, `char`, `double`, `long`, `short`. Nhập giá trị từ bàn phím và hiển thị chúng ra màn hình.

**Gợi ý:**
- Dùng `scanf` để nhập dữ liệu từ người dùng.
- Dùng `printf` để hiển thị giá trị nhập vào.

### Bài 2:
Viết chương trình tính tổng, hiệu, tích, thương của hai số nguyên do người dùng nhập vào.

**Gợi ý:**
- Khai báo hai biến số nguyên.
- Nhập giá trị từ bàn phím.
- Thực hiện các phép tính và hiển thị kết quả.

### Bài 3:
Viết chương trình nhập một ký tự từ bàn phím và in ra mã ASCII của ký tự đó.

**Gợi ý:**
- Dùng `char` để lưu ký tự.
- Sử dụng `printf` để in mã ASCII bằng `%d`.

Hoàn thành các bài tập trên để củng cố kiến thức về biến và kiểu dữ liệu trong C.

