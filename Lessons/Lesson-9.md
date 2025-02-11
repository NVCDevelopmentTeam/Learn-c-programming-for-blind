# **Bài 9. Con trỏ**

## **I: Mục tiêu bài học**
Sau khi hoàn thành bài học này, người học sẽ:
- Hiểu khái niệm con trỏ và vai trò của nó trong ngôn ngữ lập trình C.
- Biết cách khai báo, khởi tạo và sử dụng con trỏ.
- Thực hành truy xuất giá trị thông qua con trỏ.
- Hiểu cách con trỏ hoạt động với mảng và chuỗi ký tự.
- Biết cách áp dụng con trỏ trong lập trình để tối ưu bộ nhớ và tăng hiệu suất chương trình.

## **II: Nội dung bài học**

### **1. Khái niệm về con trỏ**
Con trỏ (pointer) là một biến đặc biệt dùng để lưu trữ địa chỉ của một biến khác trong bộ nhớ. Thay vì lưu trữ trực tiếp giá trị, con trỏ giúp truy xuất và thay đổi dữ liệu gián tiếp thông qua địa chỉ bộ nhớ.

Cú pháp khai báo một con trỏ:
```c
int *ptr;
```
Ở đây, `ptr` là một con trỏ kiểu `int`, có thể lưu trữ địa chỉ của một biến kiểu `int`.

### **2. Khởi tạo và sử dụng con trỏ**
Một con trỏ cần được gán địa chỉ của một biến hợp lệ trước khi sử dụng:
```c
int a = 10;
int *ptr = &a; // Gán địa chỉ của biến a cho con trỏ ptr
```
- `&a` là toán tử lấy địa chỉ của biến `a`.
- `ptr` chứa địa chỉ của `a`, có thể truy xuất giá trị bằng `*ptr`.

Ví dụ:
```c
#include <stdio.h>
int main() {
    int a = 10;
    int *ptr = &a;
    printf("Giá trị của a: %d\n", *ptr);
    return 0;
}
```

### **3. Con trỏ và mảng**
Trong C, tên mảng thực chất là địa chỉ của phần tử đầu tiên, nên có thể dùng con trỏ để duyệt mảng.
```c
int arr[3] = {1, 2, 3};
int *p = arr;
printf("Giá trị đầu tiên: %d\n", *p);
```
Dùng con trỏ để duyệt mảng:
```c
for (int i = 0; i < 3; i++) {
    printf("%d ", *(p + i));
}
```

### **4. Con trỏ và chuỗi ký tự**
Con trỏ có thể thao tác trực tiếp trên chuỗi ký tự:
```c
char str[] = "Hello";
char *p = str;
printf("Chuỗi: %s\n", p);
```

### **5. Con trỏ NULL và con trỏ void**
- Con trỏ NULL không trỏ đến vùng nhớ hợp lệ, tránh lỗi truy xuất ngoài bộ nhớ.
```c
int *ptr = NULL;
```
- Con trỏ `void *` có thể trỏ đến bất kỳ kiểu dữ liệu nào.
```c
void *p;
int a = 5;
p = &a;
```

## **III: Lưu ý dành cho người khiếm thị**
- Khi làm việc với con trỏ, cần nhớ địa chỉ và giá trị không giống nhau.
- Khi dùng trình đọc màn hình, hãy thử in giá trị con trỏ và giá trị nó trỏ đến để hiểu rõ.
- Tránh truy xuất con trỏ NULL để tránh lỗi chương trình.

## **IV: Tóm tắt bài học**
- Con trỏ là biến lưu trữ địa chỉ của biến khác.
- Dùng `*` để truy xuất giá trị, `&` để lấy địa chỉ.
- Con trỏ có thể thao tác trên mảng và chuỗi ký tự.
- Tránh dùng con trỏ NULL và đảm bảo con trỏ được khởi tạo trước khi sử dụng.

**Bài tiếp theo:** Chúng ta sẽ tìm hiểu về **hàm trong C**, giúp chương trình tổ chức logic hơn và tái sử dụng mã nguồn hiệu quả.

