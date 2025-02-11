# **Bài 11. Chuỗi**

## I: Mục tiêu bài học:
- Hiểu khái niệm về chuỗi trong C.
- Biết cách khai báo, khởi tạo và sử dụng chuỗi.
- Thành thạo các thao tác xử lý chuỗi như nhập, xuất, duyệt chuỗi và sử dụng các hàm xử lý chuỗi trong thư viện `<string.h>`.
- Nắm được cách làm việc với con trỏ và mảng ký tự trong xử lý chuỗi.

## II: Nội dung bài học:

### 1. Khái niệm về chuỗi trong C
Trong ngôn ngữ lập trình C, chuỗi không phải là một kiểu dữ liệu riêng biệt như trong các ngôn ngữ lập trình cấp cao khác (Python, Java, v.v.). Thay vào đó, chuỗi trong C được biểu diễn dưới dạng một mảng các ký tự kết thúc bởi ký tự `\0` (null terminator).

Ví dụ khai báo một chuỗi trong C:

```c
char str1[] = "Hello";
char str2[10] = "World";
char str3[] = {'H', 'i', '\0'};
```

Khi khai báo chuỗi theo cách trên, trình biên dịch sẽ tự động thêm ký tự kết thúc `\0` vào cuối chuỗi để xác định điểm kết thúc.

### 2. Nhập và xuất chuỗi
Cung cấp dữ liệu đầu vào và hiển thị chuỗi là hai thao tác quan trọng khi làm việc với chuỗi.

#### 2.1. Xuất chuỗi
Sử dụng `printf` hoặc `puts` để xuất chuỗi:

```c
#include <stdio.h>

int main() {
    char name[] = "Alice";
    printf("Tên của bạn là: %s\n", name);
    puts(name); // Cách khác để xuất chuỗi
    return 0;
}
```

#### 2.2. Nhập chuỗi
Sử dụng `scanf`, `gets` (trước C11, không khuyến khích), hoặc `fgets` để nhập chuỗi từ bàn phím.

```c
#include <stdio.h>

int main() {
    char name[50];
    printf("Nhập tên của bạn: ");
    scanf("%49s", name); // Không nhập được chuỗi có dấu cách
    printf("Xin chào, %s!\n", name);
    return 0;
}
```

Để nhập chuỗi có dấu cách, sử dụng `fgets`:

```c
#include <stdio.h>

int main() {
    char name[50];
    printf("Nhập tên đầy đủ của bạn: ");
    fgets(name, sizeof(name), stdin);
    printf("Xin chào, %s!", name);
    return 0;
}
```

### 3. Các thao tác trên chuỗi
C cung cấp nhiều hàm trong thư viện `<string.h>` để thao tác với chuỗi.

| Hàm | Chức năng |
|------|------------|
| `strlen(s)` | Trả về độ dài chuỗi `s` (không tính `\0`) |
| `strcpy(d,s)` | Sao chép chuỗi `s` vào `d` |
| `strncpy(d,s,n)` | Sao chép tối đa `n` ký tự từ `s` sang `d` |
| `strcat(d,s)` | Nối chuỗi `s` vào cuối chuỗi `d` |
| `strncmp(s1, s2, n)` | So sánh `n` ký tự đầu tiên của `s1` và `s2` |
| `strchr(s, c)` | Tìm vị trí đầu tiên của ký tự `c` trong chuỗi `s` |
| `strstr(s1, s2)` | Tìm chuỗi `s2` trong `s1` |

Ví dụ:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[20] = "Hello";
    char s2[] = " World";
    strcat(s1, s2); // Nối chuỗi
    printf("Chuỗi sau khi nối: %s\n", s1);
    printf("Độ dài của chuỗi: %lu\n", strlen(s1));
    return 0;
}
```

### 4. Mảng ký tự và con trỏ
Chuỗi trong C có thể được xử lý bằng con trỏ thay vì mảng.

```c
#include <stdio.h>

int main() {
    char *str = "Hello";
    printf("Chuỗi: %s\n", str);
    return 0;
}
```

### 5. Lưu ý khi làm việc với chuỗi (Dành cho người khiếm thị)
- Luôn kiểm tra giới hạn bộ nhớ khi thao tác với chuỗi để tránh tràn bộ nhớ.
- Sử dụng `fgets` thay vì `scanf` để tránh lỗi khi nhập chuỗi có dấu cách.
- Khi so sánh chuỗi, luôn sử dụng `strcmp` thay vì toán tử `==`.

## III: Tóm tắt bài học
- Chuỗi trong C được biểu diễn dưới dạng mảng ký tự kết thúc bởi `\0`.
- Sử dụng `printf`, `puts` để xuất chuỗi và `fgets` để nhập chuỗi an toàn.
- Thư viện `<string.h>` cung cấp nhiều hàm hỗ trợ xử lý chuỗi.
- Con trỏ có thể được sử dụng để làm việc với chuỗi linh hoạt hơn.

## IV: Kết nối bài học
Sau khi đã hiểu về chuỗi, trong bài tiếp theo, chúng ta sẽ tìm hiểu về **Các kiểu dữ liệu nâng cao và sắp xếp** để nắm bắt thêm cách tổ chức dữ liệu một cách hiệu quả trong lập trình C.

