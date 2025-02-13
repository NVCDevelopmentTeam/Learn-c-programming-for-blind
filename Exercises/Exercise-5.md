# **Bài tập 5: Vòng lặp**

## I: Mục tiêu:
- Hiểu và sử dụng thành thạo các loại vòng lặp trong C: `for`, `while`, `do-while`.
- Ứng dụng vòng lặp để giải quyết bài toán lặp đi lặp lại.
- Kết hợp vòng lặp với câu lệnh điều kiện để xử lý tình huống thực tế.

## II: Bài tập mẫu:
### Bài tập 1: In bảng cửu chương
**Yêu cầu:** Viết chương trình in ra bảng cửu chương từ 1 đến 9 bằng vòng lặp `for`.

**Gợi ý:**
- Sử dụng vòng lặp lồng nhau: vòng lặp ngoài duyệt các số từ 1 đến 9, vòng lặp trong in ra kết quả phép nhân.
- Dùng `printf` để hiển thị kết quả.

**Ví dụ minh họa:**
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        printf("\nBảng cửu chương %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    return 0;
}
```

## III: Bài tập thực hành:
### Bài tập 1: Tính tổng các số từ 1 đến N
**Yêu cầu:** Viết chương trình nhập vào một số nguyên dương `N`, sau đó tính tổng các số từ `1` đến `N` bằng vòng lặp `for`.

### Bài tập 2: Đếm số chữ số của một số nguyên dương
**Yêu cầu:** Viết chương trình nhập vào một số nguyên dương `n`, sau đó đếm và in ra số chữ số của `n` bằng vòng lặp `while`.

### Bài tập 3: Kiểm tra số nguyên tố
**Yêu cầu:** Viết chương trình kiểm tra một số `n` có phải số nguyên tố hay không bằng vòng lặp `for`.

### Bài tập 4: In dãy Fibonacci
**Yêu cầu:** Viết chương trình nhập vào `n`, sau đó in ra `n` số Fibonacci đầu tiên bằng vòng lặp `do-while`.

**Gợi ý chung:**
- Dùng `for` cho các bài toán có số lần lặp xác định.
- Dùng `while` khi không biết trước số lần lặp.
- Dùng `do-while` khi cần thực thi ít nhất một lần trước khi kiểm tra điều kiện.

**Chú ý:** Đảm bảo chương trình kiểm tra điều kiện đầu vào hợp lệ trước khi xử lý.

