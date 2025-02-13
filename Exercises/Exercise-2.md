# **Bài tập 2: Toán tử và biểu thức**

## I. Mục tiêu:
- Hiểu và sử dụng thành thạo các toán tử trong ngôn ngữ lập trình C.
- Áp dụng toán tử vào việc tính toán và xử lý dữ liệu.
- Viết các biểu thức toán học và logic một cách chính xác.
- Rèn luyện kỹ năng lập trình thông qua các bài tập thực hành thực tế.

## II. Bài tập Mẫu:
### 1. Mô tả:
Bài tập mẫu hướng dẫn cách sử dụng các toán tử cơ bản trong C như toán tử số học, so sánh, logic và gán.

### 2. Ví dụ minh họa:
Viết chương trình nhập vào hai số nguyên từ bàn phím, thực hiện các phép toán số học và hiển thị kết quả.

#### **Code mẫu:**
```c
#include <stdio.h>

int main() {
    int a, b;
    printf("Nhập hai số nguyên: ");
    scanf("%d %d", &a, &b);
    
    printf("Tổng: %d\n", a + b);
    printf("Hiệu: %d\n", a - b);
    printf("Tích: %d\n", a * b);
    printf("Thương: %.2f\n", (b != 0) ? ((float)a / b) : 0);
    printf("Phần dư: %d\n", (b != 0) ? (a % b) : 0);
    
    return 0;
}
```

### 3. Giải thích:
- Chương trình yêu cầu người dùng nhập hai số nguyên.
- Sau đó thực hiện các phép toán số học như cộng, trừ, nhân, chia, lấy dư.
- Đảm bảo kiểm tra điều kiện tránh lỗi chia cho 0.
- Kết quả phép chia được định dạng hiển thị với hai chữ số thập phân.

## III. Bài tập thực hành:
Mỗi bài tập thực hành đều có phần gợi ý giúp học viên có thể tiếp cận và hiểu bài tốt hơn.

### **Bài 1: Tính trung bình cộng**
**Yêu cầu:** Viết chương trình nhập vào ba số nguyên, tính trung bình cộng của ba số đó và hiển thị kết quả dưới dạng số thực với hai chữ số thập phân.

**Gợi ý:** Sử dụng toán tử số học để cộng ba số rồi chia cho 3, lưu ý kiểu dữ liệu phù hợp để tránh mất độ chính xác.

### **Bài 2: Kiểm tra số chẵn lẻ**
**Yêu cầu:** Viết chương trình nhập vào một số nguyên, kiểm tra xem số đó có phải số chẵn hay không. Nếu là số chẵn thì in ra "Số chẵn", ngược lại in "Số lẻ".

**Gợi ý:** Dùng toán tử % để kiểm tra số chia hết cho 2.

### **Bài 3: Phép toán số thực**
**Yêu cầu:** Viết chương trình nhập vào hai số thực, thực hiện các phép toán cộng, trừ, nhân, chia và hiển thị kết quả với hai chữ số thập phân.

**Gợi ý:** Sử dụng kiểu dữ liệu float hoặc double để đảm bảo độ chính xác.

### **Bài 4: Kiểm tra bội số**
**Yêu cầu:** Viết chương trình nhập vào một số nguyên dương, kiểm tra xem số đó có chia hết cho 3 và 5 hay không, đồng thời in ra kết quả phù hợp.

**Gợi ý:** Sử dụng toán tử % để kiểm tra điều kiện.

### **Bài 5: Hoán đổi giá trị không dùng biến trung gian**
**Yêu cầu:** Viết chương trình nhập vào hai số nguyên, sau đó hoán đổi giá trị của chúng mà không sử dụng biến trung gian, sau đó hiển thị kết quả.

**Gợi ý:** Dùng phép toán cộng trừ hoặc XOR để hoán đổi hai biến.

### **Bài 6: Tính bình phương và lập phương**
**Yêu cầu:** Viết chương trình nhập vào một số nguyên, sau đó tính giá trị bình phương và lập phương của số đó rồi hiển thị kết quả.

**Gợi ý:** Sử dụng toán tử `*` hoặc hàm `pow` trong thư viện `math.h`.

### **Bài 7: Thương và phần dư của phép chia**
**Yêu cầu:** Viết chương trình nhập vào hai số nguyên dương, tính thương và phần dư của phép chia nguyên rồi hiển thị kết quả.

**Gợi ý:** Sử dụng toán tử `/` và `%`.

### **Bài 8: Kiểm tra bội số của 7**
**Yêu cầu:** Viết chương trình nhập vào một số nguyên, kiểm tra xem số đó có phải là bội số của 7 hay không, sau đó hiển thị kết quả.

**Gợi ý:** Kiểm tra số đó chia hết cho 7 bằng toán tử `%`.

### **Bài 9: Kiểm tra dấu của số**
**Yêu cầu:** Viết chương trình nhập vào một số nguyên, kiểm tra xem số đó có phải là số âm, số dương hay bằng 0, sau đó hiển thị kết quả.

**Gợi ý:** Sử dụng cấu trúc điều kiện `if-else`.

### **Bài 10: Tính tổng các chữ số**
**Yêu cầu:** Viết chương trình nhập vào một số nguyên dương n, tính tổng các chữ số của n và hiển thị kết quả.

**Gợi ý:** Lấy từng chữ số bằng cách dùng phép chia và lấy dư với 10.

