# **Bài 7: Vòng lặp trong C**

## I. Mục tiêu bài học
Sau khi học xong bài này, người học sẽ:
- Hiểu được khái niệm và vai trò của vòng lặp trong lập trình C.
- Biết cách sử dụng các loại vòng lặp: `for`, `while`, và `do-while`.
- Ứng dụng vòng lặp để giải quyết các bài toán lặp đi lặp lại.

## II. Nội dung bài học

### 1. Giới thiệu về vòng lặp
Trong lập trình, vòng lặp là một cấu trúc điều khiển cho phép thực thi một đoạn mã nhiều lần cho đến khi một điều kiện nào đó không còn đúng. Điều này giúp tiết kiệm thời gian và tối ưu hóa việc viết mã.

Trong C, có ba loại vòng lặp chính:
- Vòng lặp `for`
- Vòng lặp `while`
- Vòng lặp `do-while`

### 2. Vòng lặp `for`
Cấu trúc của vòng lặp `for` như sau:
```c
for (khởi tạo; điều kiện; bước lặp) {
    // Khối lệnh được thực thi nếu điều kiện đúng
}
```
Ví dụ:
```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("Lần lặp thứ %d\n", i);
    }
    return 0;
}
```
Chương trình trên sẽ in ra:
```
Lần lặp thứ 0
Lần lặp thứ 1
Lần lặp thứ 2
Lần lặp thứ 3
Lần lặp thứ 4
```

### 3. Vòng lặp `while`
Vòng lặp `while` có dạng:
```c
while (điều kiện) {
    // Khối lệnh được thực thi nếu điều kiện đúng
}
```
Ví dụ:
```c
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        printf("Lần lặp thứ %d\n", i);
        i++;
    }
    return 0;
}
```
Cách hoạt động của `while` tương tự `for`, nhưng khi sử dụng `while`, chúng ta cần tự tăng biến đếm để tránh vòng lặp vô hạn.

### 4. Vòng lặp `do-while`
Vòng lặp `do-while` đảm bảo khối lệnh được thực thi ít nhất một lần, bất kể điều kiện có đúng hay không:
```c
do {
    // Khối lệnh được thực thi ít nhất một lần
} while (điều kiện);
```
Ví dụ:
```c
#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("Lần lặp thứ %d\n", i);
        i++;
    } while (i < 5);
    return 0;
}
```

### 5. Lưu ý khi sử dụng vòng lặp
- Cần cẩn thận với vòng lặp vô hạn (khi điều kiện không bao giờ sai), ví dụ:
```c
while (1) {
    printf("Vòng lặp vô hạn!\n");
}
```
- Chỉ sử dụng vòng lặp khi thực sự cần thiết để tránh làm giảm hiệu suất chương trình.
- Với người khiếm thị, cần chú ý các thông báo hoặc tín hiệu âm thanh để tránh mắc kẹt trong vòng lặp.

### 6. Tóm tắt bài học
- Vòng lặp giúp thực hiện một đoạn mã nhiều lần mà không cần lặp lại mã nguồn.
- Có ba loại vòng lặp trong C: `for`, `while`, và `do-while`.
- `for` thường dùng khi biết trước số lần lặp, `while` dùng khi số lần lặp không cố định, và `do-while` đảm bảo khối lệnh chạy ít nhất một lần.
- Cẩn thận tránh vòng lặp vô hạn bằng cách luôn đảm bảo điều kiện dừng hợp lý.

### 7. Hướng tới bài tiếp theo
Trong bài tiếp theo, chúng ta sẽ tìm hiểu về cách xử lý mảng trong C, một khái niệm rất quan trọng trong lập trình. Hãy tiếp tục hành trình khám phá nhé!

