# **Bài 4. Toán tử và Biểu thức**

## I. Mục tiêu bài học:
- Hiểu rõ khái niệm toán tử và biểu thức trong C.
- Phân loại và sử dụng đúng các loại toán tử: toán tử số học, logic, quan hệ, gán, bit, điều kiện.
- Nắm vững quy tắc ưu tiên và tính kết hợp của toán tử để tránh lỗi logic.
- Thực hành thông qua các ví dụ minh họa thực tế, phù hợp với người khiếm thị.

## II. Nội dung bài học:

### 1. Toán tử trong C
Toán tử là ký hiệu đặc biệt dùng để thực hiện phép toán trên toán hạng. Trong C, toán tử chia thành nhiều nhóm:

#### a) Toán tử số học (Arithmetic Operators)
Dùng để thực hiện phép toán cơ bản trên số nguyên và số thực.

| Toán tử | Chức năng | Ví dụ |
|---------|----------|--------|
| `+` | Cộng | `a + b` |
| `-` | Trừ | `a - b` |
| `*` | Nhân | `a * b` |
| `/` | Chia | `a / b` |
| `%` | Chia lấy dư | `a % b` (chỉ áp dụng cho số nguyên) |

**Lưu ý:** Khi chia hai số nguyên bằng `/`, kết quả chỉ lấy phần nguyên. Nếu muốn giá trị chính xác, ít nhất một toán hạng phải là số thực.

#### b) Toán tử quan hệ (Relational Operators)
Dùng để so sánh hai giá trị, trả về `1` (đúng) hoặc `0` (sai).

| Toán tử | Chức năng | Ví dụ |
|---------|----------|--------|
| `==` | Bằng nhau | `a == b` |
| `!=` | Khác nhau | `a != b` |
| `>` | Lớn hơn | `a > b` |
| `<` | Nhỏ hơn | `a < b` |
| `>=` | Lớn hơn hoặc bằng | `a >= b` |
| `<=` | Nhỏ hơn hoặc bằng | `a <= b` |

#### c) Toán tử logic (Logical Operators)
Dùng để thực hiện phép toán logic.

| Toán tử | Chức năng | Ví dụ |
|---------|----------|--------|
| `&&` | AND (và) | `a && b` |
| `||` | OR (hoặc) | `a || b` |
| `!` | NOT (phủ định) | `!a` |

**Lưu ý:** Trong C, `0` là "sai" và giá trị khác `0` là "đúng".

#### d) Toán tử gán (Assignment Operators)
Dùng để gán giá trị cho biến.

| Toán tử | Chức năng | Ví dụ |
|---------|----------|--------|
| `=` | Gán | `a = b` |
| `+=` | Cộng rồi gán | `a += b` |
| `-=` | Trừ rồi gán | `a -= b` |
| `*=` | Nhân rồi gán | `a *= b` |
| `/=` | Chia rồi gán | `a /= b` |
| `%=` | Chia lấy dư rồi gán | `a %= b` |

#### e) Toán tử điều kiện (Conditional Operator)
Toán tử giúp rút gọn biểu thức `if-else`.

Cú pháp: `condition ? value_if_true : value_if_false`

Ví dụ:
```c
int a = 10, b = 20;
int min = (a < b) ? a : b; // Nếu a < b, min = a, ngược lại min = b
```

#### f) Toán tử bitwise (Bitwise Operators)
Toán tử bitwise thao tác trên từng bit của số nguyên.

| Toán tử | Chức năng | Ví dụ |
|---------|----------|--------|
| `&` | AND bit | `a & b` |
| `|` | OR bit | `a | b` |
| `^` | XOR bit | `a ^ b` |
| `~` | NOT bit | `~a` |
| `<<` | Dịch trái | `a << n` |
| `>>` | Dịch phải | `a >> n` |

Ví dụ:
```c
#include <stdio.h>
int main() {
    int a = 5, b = 3;
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);
    return 0;
}
```

### 2. Độ ưu tiên và tính kết hợp của toán tử
Mỗi toán tử trong C có mức độ ưu tiên khác nhau.

| Mức độ | Toán tử | Ý nghĩa |
|--------|--------|---------|
| 1 (Cao) | `()`, `[]`, `->`, `.` | Truy cập và gọi hàm |
| 2 | `!`, `~`, `++`, `--` | Toán tử đơn |
| 3 | `*`, `/`, `%` | Nhân, chia, chia dư |
| 4 | `+`, `-` | Cộng, trừ |
| 5 | `<`, `<=`, `>`, `>=` | So sánh |
| 6 | `==`, `!=` | So sánh bằng và khác |
| 7 | `&`, `^`, `|` | Toán tử bitwise |
| 8 | `&&` | AND logic |
| 9 | `||` | OR logic |
| 10 (Thấp) | `=`, `+=`, `-=`, `*=`... | Gán |

## III. Tóm tắt bài học
- Toán tử giúp thực hiện các phép toán trên dữ liệu.
- Hiểu độ ưu tiên của toán tử giúp tránh lỗi logic.
- Cần thực hành để sử dụng toán tử hiệu quả.

### **Lưu ý dành cho người khiếm thị:**
- Khi đọc code, hãy để ý toán tử `&&` (và) và `||` (hoặc) vì chúng quyết định điều kiện đúng sai.
- Chú ý khi sử dụng toán tử `/` để chia, đặc biệt khi làm việc với số nguyên.
- Toán tử `? :` giúp viết mã ngắn gọn, nhưng cần cẩn thận để tránh làm code khó hiểu.
- Độ ưu tiên của toán tử có thể ảnh hưởng đến kết quả, sử dụng ngoặc `()` nếu cần.
- Toán tử bitwise thường dùng trong tối ưu chương trình và xử lý dữ liệu nhị phân.

**Hãy bắt tay vào thực hành ngay để hiểu rõ hơn về các toán tử trong C!**

