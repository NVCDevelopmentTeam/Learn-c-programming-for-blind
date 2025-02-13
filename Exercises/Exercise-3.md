# **Bài tập 3: Nhập và xuất trong C**

## I. Mục tiêu
- Hiểu cách sử dụng các lệnh nhập và xuất dữ liệu trong C.
- Làm quen với các hàm như `printf`, `scanf` và cách xử lý dữ liệu nhập vào.
- Rèn luyện kỹ năng xử lý chuỗi và số trong lập trình C.

## II. Bài tập mẫu

### 1. Mô tả
Viết một chương trình yêu cầu người dùng nhập vào tên và tuổi của họ, sau đó hiển thị lại thông tin này trên màn hình.

### 2. Gợi ý thực hiện
- Sử dụng `printf` để hiển thị thông báo yêu cầu nhập dữ liệu.
- Dùng `scanf` để nhận dữ liệu từ bàn phím.
- Xuất dữ liệu vừa nhập bằng `printf`.

### 3. Mã nguồn mẫu
```c
#include <stdio.h>
int main() {
    char name[50];
    int age;
    
    printf("Nhập tên của bạn: ");
    scanf("%49s", name);
    printf("Nhập tuổi của bạn: ");
    scanf("%d", &age);
    
    printf("Xin chào %s, bạn %d tuổi.\n", name, age);
    return 0;
}
```

## III. Bài tập thực hành

### 1. Bài 1: Nhập và xuất số nguyên, số thực
**Yêu cầu:** Viết chương trình nhập vào một số nguyên và một số thực, sau đó xuất hai số này ra màn hình.
- **Gợi ý:** Sử dụng `scanf` với `%d` và `%f`.

### 2. Bài 2: Nhập và xuất ký tự
**Yêu cầu:** Viết chương trình nhập vào một ký tự từ bàn phím và hiển thị ký tự đó.
- **Gợi ý:** Dùng `char` và `%c` trong `scanf`.

### 3. Bài 3: Nhập và xuất họ tên đầy đủ
**Yêu cầu:** Viết chương trình nhập vào họ và tên đầy đủ của một người dùng rồi hiển thị lại.
- **Gợi ý:** Dùng `fgets()` để nhập chuỗi có khoảng trắng.

### 4. Bài 4: Tính toán với hai số nguyên
**Yêu cầu:** Viết chương trình nhập vào hai số nguyên, sau đó in tổng, hiệu, tích và thương của chúng.
- **Gợi ý:** Thực hiện phép toán số học và chú ý đến phép chia số nguyên.

### 5. Bài 5: Kiểm tra số chẵn lẻ
**Yêu cầu:** Viết chương trình nhập vào một số nguyên và kiểm tra số đó là chẵn hay lẻ.
- **Gợi ý:** Sử dụng toán tử `%` để kiểm tra số dư khi chia cho 2.

---
Mỗi bài tập cần đảm bảo học viên áp dụng kiến thức đã học để thực hành hiệu quả.

