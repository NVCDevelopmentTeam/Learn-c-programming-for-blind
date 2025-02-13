# **Bài tập 4: Câu lệnh điều kiện**

## I: Mục tiêu:
- Hiểu và vận dụng được các câu lệnh điều kiện (`if`, `if-else`, `switch-case`).
- Biết cách kết hợp điều kiện logic (`&&`, `||`, `!`).
- Áp dụng câu lệnh điều kiện vào giải quyết bài toán thực tế.
- Hỗ trợ học viên khiếm thị tiếp cận và hiểu rõ cách sử dụng câu lệnh điều kiện trong lập trình C.

## II: Bài tập mẫu:
### Đề bài:
Viết chương trình nhập vào một số nguyên, kiểm tra và in ra kết quả số đó là số chẵn hay số lẻ.

### Hướng dẫn:
1. Nhập một số nguyên từ bàn phím.
2. Dùng câu lệnh `if-else` để kiểm tra số đó.
3. Nếu số đó chia hết cho 2, in ra "Số chẵn", ngược lại in "Số lẻ".

### Mã nguồn mẫu:
```c
#include <stdio.h>

int main() {
    int num;
    printf("Nhập một số nguyên: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d là số chẵn.\n", num);
    } else {
        printf("%d là số lẻ.\n", num);
    }
    
    return 0;
}
```

## III: Bài tập thực hành:
1. **Bài 1:** Viết chương trình nhập một số nguyên và kiểm tra xem số đó có lớn hơn 0 không. Nếu lớn hơn 0, in ra "Số dương", nếu nhỏ hơn 0, in "Số âm", nếu bằng 0 in "Số không".
   - **Gợi ý:** Sử dụng `if-else` để so sánh số vừa nhập.
2. **Bài 2:** Nhập vào điểm số của một học sinh (từ 0 đến 100) và in ra xếp loại: `Giỏi` (>= 85), `Khá` (70 - 84), `Trung bình` (50 - 69), `Yếu` (<50).
   - **Gợi ý:** Dùng `if-else if` để phân loại điểm.
3. **Bài 3:** Viết chương trình nhập vào một năm, kiểm tra xem năm đó có phải là năm nhuận hay không. (Gợi ý: Năm nhuận chia hết cho 4 nhưng không chia hết cho 100, trừ khi nó chia hết cho 400).
   - **Gợi ý:** Kết hợp toán tử logic (`&&`, `||`) để kiểm tra điều kiện.
4. **Bài 4:** Viết chương trình nhập vào một tháng trong năm (1-12), sau đó in ra số ngày của tháng đó. Sử dụng `switch-case` để xử lý.
   - **Gợi ý:** Xác định các tháng có 30, 31 ngày và xử lý tháng 2 riêng biệt.

