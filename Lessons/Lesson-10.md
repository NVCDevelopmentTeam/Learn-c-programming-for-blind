# **Bài 10. Hàm**

## I: Mục tiêu bài học:
Sau khi học xong bài này, người học có thể:
- Hiểu khái niệm về hàm trong lập trình C.
- Biết cách khai báo, định nghĩa và gọi hàm.
- Nắm được phạm vi biến và cách truyền tham số vào hàm.
- Áp dụng hàm để tổ chức chương trình một cách khoa học và dễ bảo trì.

## II: Nội dung bài học:

### **1. Giới thiệu về hàm trong C**
Hàm là một khối lệnh có nhiệm vụ thực hiện một công việc cụ thể. Sử dụng hàm giúp chương trình được tổ chức gọn gàng, dễ bảo trì và tái sử dụng.

Ví dụ về một hàm đơn giản trong C:
```c
#include <stdio.h>

// Hàm in ra thông điệp chào
void sayHello() {
    printf("Xin chào! Chào mừng bạn đến với lập trình C.\n");
}

int main() {
    sayHello(); // Gọi hàm
    return 0;
}
```

### **2. Cấu trúc của một hàm**
Một hàm trong C có cấu trúc cơ bản như sau:
```c
dữ_liệu_trả_về tên_hàm(danh_sách_tham_số) {
    // Khối lệnh của hàm
    return giá_trị; // (nếu có)
}
```
Trong đó:
- `dữ_liệu_trả_về`: Kiểu dữ liệu mà hàm trả về (nếu không có thì dùng `void`).
- `tên_hàm`: Tên của hàm, tuân theo quy tắc đặt tên trong C.
- `danh_sách_tham_số`: Danh sách các tham số (nếu có) mà hàm nhận vào.
- `return giá_trị`: Câu lệnh trả về kết quả (chỉ sử dụng nếu hàm có kiểu trả về khác `void`).

Ví dụ về hàm tính tổng hai số nguyên:
```c
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int result = sum(5, 7);
    printf("Tổng: %d\n", result);
    return 0;
}
```

### **3. Hàm có tham số và không có tham số**
Hàm có thể có hoặc không có tham số:
- **Hàm không có tham số:**
  ```c
  void printMessage() {
      printf("Đây là hàm không có tham số!\n");
  }
  ```
- **Hàm có tham số:**
  ```c
  void greet(char name[]) {
      printf("Xin chào, %s!\n", name);
  }
  ```

### **4. Truyền tham số theo giá trị và tham chiếu**
#### **4.1 Truyền tham số theo giá trị**
Khi truyền tham số theo giá trị, hàm chỉ nhận bản sao của biến.
```c
void changeValue(int x) {
    x = 10; // Thay đổi giá trị của x nhưng không ảnh hưởng đến biến gốc
}
```
#### **4.2 Truyền tham số theo tham chiếu**
Khi truyền tham số theo tham chiếu, hàm có thể thay đổi giá trị của biến gốc.
```c
void changeValue(int *x) {
    *x = 10; // Thay đổi giá trị của biến gốc
}
```

### **5. Phạm vi biến trong hàm**
Biến trong C có phạm vi khác nhau:
- **Biến cục bộ**: Khai báo bên trong hàm, chỉ sử dụng được trong hàm đó.
- **Biến toàn cục**: Khai báo bên ngoài tất cả các hàm, có thể được truy cập từ nhiều hàm khác nhau.

Ví dụ:
```c
#include <stdio.h>

int globalVar = 10; // Biến toàn cục

void display() {
    int localVar = 5; // Biến cục bộ
    printf("Biến toàn cục: %d, Biến cục bộ: %d\n", globalVar, localVar);
}

int main() {
    display();
    return 0;
}
```

## **III. Lưu ý dành cho người khiếm thị**
- Khi làm việc với hàm, cần đọc kỹ cú pháp khai báo và cách gọi hàm để tránh lỗi.
- Nếu sử dụng trình đọc màn hình, hãy để ý sự khác biệt giữa truyền tham số theo giá trị và tham chiếu.
- Nên thực hành viết và chạy từng ví dụ để hiểu rõ cách hoạt động của hàm.

## **IV. Tóm tắt bài học**
- Hàm là một khối lệnh thực hiện nhiệm vụ cụ thể và giúp chương trình dễ tổ chức hơn.
- Hàm có thể có hoặc không có tham số.
- Có hai cách truyền tham số: theo giá trị và theo tham chiếu.
- Biến trong hàm có thể là biến cục bộ hoặc biến toàn cục.

## **V. Kết nối tới bài học tiếp theo**
Ở bài tiếp theo, chúng ta sẽ tìm hiểu về **Chuỗi trong C**. Chuỗi là một dạng dữ liệu quan trọng giúp xử lý văn bản, ký tự trong lập trình. Hãy cùng khám phá nhé!

