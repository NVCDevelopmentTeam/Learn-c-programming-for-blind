# **Bài tập 8: Hàm**

## I: Mục tiêu:
- Hiểu khái niệm và cách sử dụng hàm trong C.
- Biết cách khai báo, định nghĩa và gọi hàm.
- Áp dụng hàm vào các bài toán thực tế để tổ chức mã nguồn tốt hơn.

## II: Bài tập mẫu:
### Đề bài:
Viết một chương trình sử dụng hàm để tính tổng hai số nguyên do người dùng nhập vào.

### Hướng dẫn:
1. Định nghĩa một hàm `int tinhTong(int a, int b)` để tính tổng hai số nguyên.
2. Trong `main()`, nhập hai số nguyên từ bàn phím.
3. Gọi hàm `tinhTong()` và hiển thị kết quả ra màn hình.

### Ví dụ minh họa:
```c
#include <stdio.h>

// Hàm tính tổng hai số nguyên
int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int so1, so2;
    printf("Nhập hai số nguyên: ");
    scanf("%d %d", &so1, &so2);
    
    int tong = tinhTong(so1, so2);
    printf("Tổng của %d và %d là %d\n", so1, so2, tong);
    
    return 0;
}
```

## III: Bài tập thực hành:
### Bài 1: Tính giai thừa sử dụng hàm
**Yêu cầu:** Viết một chương trình sử dụng hàm đệ quy để tính giai thừa của một số nguyên dương `n`.

**Gợi ý:**
- Định nghĩa hàm `long long tinhGiaiThua(int n)` sử dụng đệ quy.
- Nếu `n == 0` hoặc `n == 1`, trả về `1`.
- Nếu `n > 1`, trả về `n * tinhGiaiThua(n - 1)`.
- Trong `main()`, yêu cầu người dùng nhập `n`, sau đó gọi hàm và hiển thị kết quả.

### Bài 2: Kiểm tra số nguyên tố sử dụng hàm
**Yêu cầu:** Viết một chương trình sử dụng hàm để kiểm tra xem một số nguyên dương có phải là số nguyên tố hay không.

**Gợi ý:**
- Định nghĩa hàm `int laSoNguyenTo(int n)` trả về `1` nếu `n` là số nguyên tố, ngược lại trả về `0`.
- Duyệt từ `2` đến `sqrt(n)`, nếu `n` chia hết cho bất kỳ số nào trong khoảng này thì không phải số nguyên tố.
- Trong `main()`, yêu cầu người dùng nhập số cần kiểm tra, gọi hàm và hiển thị kết quả.

### Bài 3: Hoán đổi giá trị hai biến sử dụng hàm
**Yêu cầu:** Viết một chương trình sử dụng hàm để hoán đổi giá trị của hai biến số nguyên.

**Gợi ý:**
- Định nghĩa hàm `void hoanDoi(int *a, int *b)` sử dụng con trỏ.
- Trong `main()`, yêu cầu người dùng nhập hai số, gọi hàm `hoanDoi()` và hiển thị kết quả sau khi hoán đổi.

---
Bài tập này giúp củng cố kiến thức về hàm trong C, cách tổ chức chương trình và ứng dụng thực tế của hàm trong việc giảm thiểu lặp mã và tăng tính tái sử dụng.

