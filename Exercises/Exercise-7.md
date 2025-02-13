# **Bài tập 7: Con trỏ**

## I: Mục tiêu:
- Hiểu rõ khái niệm con trỏ trong C.
- Biết cách khai báo, khởi tạo và sử dụng con trỏ.
- Áp dụng con trỏ vào các bài toán liên quan đến mảng, chuỗi và cấp phát động.

## II: Bài tập mẫu:
### Bài tập 1: Truy cập giá trị thông qua con trỏ
**Đề bài:**
Viết một chương trình khai báo một biến số nguyên `a`, sau đó khai báo một con trỏ trỏ tới `a`. Thay đổi giá trị của `a` thông qua con trỏ và in kết quả ra màn hình.

**Hướng dẫn:**
1. Khai báo một biến `int a = 10;`
2. Khai báo một con trỏ `int *ptr = &a;`
3. Thay đổi giá trị của `a` thông qua con trỏ bằng cách sử dụng `*ptr = 20;`
4. In ra giá trị của `a` trước và sau khi thay đổi.

**Ví dụ minh họa:**
```c
#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;
    
    printf("Giá trị ban đầu của a: %d\n", a);
    *ptr = 20;
    printf("Giá trị của a sau khi thay đổi: %d\n", a);
    
    return 0;
}
```

## III: Bài tập thực hành:
### Bài tập 1: Hoán đổi giá trị hai số bằng con trỏ
**Đề bài:** Viết chương trình hoán đổi giá trị của hai số nguyên bằng cách sử dụng con trỏ.

**Gợi ý:**
- Viết một hàm `void swap(int *x, int *y);`
- Trong hàm, sử dụng một biến tạm thời để đổi giá trị hai số thông qua con trỏ.
- Gọi hàm `swap` trong `main()` để kiểm tra kết quả.

### Bài tập 2: Tính tổng các phần tử trong mảng bằng con trỏ
**Đề bài:** Viết chương trình tính tổng các phần tử trong mảng sử dụng con trỏ.

**Gợi ý:**
- Khai báo mảng số nguyên `int arr[] = {1, 2, 3, 4, 5};`
- Dùng một con trỏ để duyệt qua từng phần tử của mảng và cộng dồn vào biến tổng.

### Bài tập 3: Đảo ngược chuỗi sử dụng con trỏ
**Đề bài:** Viết chương trình nhập một chuỗi từ bàn phím, sau đó đảo ngược chuỗi bằng con trỏ và in kết quả.

**Gợi ý:**
- Dùng hai con trỏ: một trỏ vào đầu chuỗi, một trỏ vào cuối chuỗi.
- Hoán đổi các ký tự từ hai đầu đến giữa chuỗi.

### Bài tập 4: Cấp phát động mảng và tính tổng
**Đề bài:** Viết chương trình nhập số phần tử `n`, cấp phát động một mảng có `n` phần tử, nhập giá trị và tính tổng.

**Gợi ý:**
- Dùng `malloc()` hoặc `calloc()` để cấp phát bộ nhớ động.
- Dùng con trỏ để nhập và tính tổng giá trị trong mảng.
- Giải phóng bộ nhớ sau khi dùng xong bằng `free()`.

**Lưu ý:**
- Kiểm tra cấp phát động có thành công hay không.
- Đảm bảo con trỏ không bị NULL trước khi sử dụng.

Bài tập này giúp học viên hiểu sâu hơn về cách sử dụng con trỏ trong C để thao tác với dữ liệu và bộ nhớ.

