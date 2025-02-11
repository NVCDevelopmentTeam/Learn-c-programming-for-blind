# **Bài 6: Câu lệnh điều kiện rẽ nhánh**

## I. Mục tiêu bài học
Sau khi hoàn thành bài học này, bạn sẽ:
- Hiểu được khái niệm và tầm quan trọng của câu lệnh điều kiện trong lập trình C.
- Sử dụng thành thạo các câu lệnh điều kiện `if`, `if-else` và `switch-case`.
- Ứng dụng các câu lệnh điều kiện để xây dựng chương trình có khả năng xử lý nhiều tình huống khác nhau.
- Nhận biết các lưu ý quan trọng khi sử dụng điều kiện, đặc biệt đối với người khiếm thị.

## II. Nội dung bài học

### 1. Khái niệm câu lệnh điều kiện
Trong lập trình, câu lệnh điều kiện cho phép chương trình đưa ra quyết định dựa trên một hoặc nhiều điều kiện cụ thể. Điều này giúp chương trình trở nên linh hoạt và có thể phản hồi theo từng tình huống cụ thể.

Ví dụ: Khi nhập mật khẩu, nếu đúng thì cho phép đăng nhập, nếu sai thì báo lỗi.

### 2. Câu lệnh `if`
Câu lệnh `if` dùng để kiểm tra một điều kiện, nếu điều kiện đúng (`true`), khối lệnh bên trong sẽ được thực thi.

Cú pháp:
```c
if (điều kiện) {
    // Khối lệnh được thực thi nếu điều kiện đúng
}
```
Ví dụ:
```c
#include <stdio.h>

int main() {
    int age;
    printf("Nhập tuổi của bạn: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("Bạn đã đủ tuổi trưởng thành.\n");
    }
    return 0;
}
```

### 3. Câu lệnh `if-else`
Câu lệnh `if-else` mở rộng từ `if`, cho phép chương trình thực hiện một khối lệnh khác nếu điều kiện không đúng.

Cú pháp:
```c
if (điều kiện) {
    // Thực thi nếu điều kiện đúng
} else {
    // Thực thi nếu điều kiện sai
}
```
Ví dụ:
```c
#include <stdio.h>

int main() {
    int age;
    printf("Nhập tuổi của bạn: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("Bạn đã đủ tuổi trưởng thành.\n");
    } else {
        printf("Bạn chưa đủ tuổi trưởng thành.\n");
    }
    return 0;
}
```

### 4. Câu lệnh `if-else if-else`
Khi có nhiều điều kiện cần kiểm tra, ta có thể sử dụng `if-else if-else`.

Cú pháp:
```c
if (điều kiện 1) {
    // Thực thi nếu điều kiện 1 đúng
} else if (điều kiện 2) {
    // Thực thi nếu điều kiện 2 đúng
} else {
    // Thực thi nếu tất cả điều kiện trên đều sai
}
```
Ví dụ:
```c
#include <stdio.h>

int main() {
    int score;
    printf("Nhập điểm của bạn: ");
    scanf("%d", &score);
    
    if (score >= 85) {
        printf("Xếp loại Giỏi.\n");
    } else if (score >= 70) {
        printf("Xếp loại Khá.\n");
    } else if (score >= 50) {
        printf("Xếp loại Trung bình.\n");
    } else {
        printf("Xếp loại Yếu.\n");
    }
    return 0;
}
```

### 5. Câu lệnh `switch-case`
Câu lệnh `switch-case` được sử dụng khi cần kiểm tra giá trị của một biến với nhiều trường hợp khác nhau. Nó giúp mã nguồn rõ ràng hơn so với việc sử dụng nhiều `if-else if`.

Cú pháp:
```c
switch (biến) {
    case giá_trị_1:
        // Lệnh được thực thi nếu biến == giá_trị_1
        break;
    case giá_trị_2:
        // Lệnh được thực thi nếu biến == giá_trị_2
        break;
    ...
    default:
        // Lệnh được thực thi nếu không có trường hợp nào khớp
}
```
Ví dụ:
```c
#include <stdio.h>

int main() {
    int choice;
    printf("Nhập số từ 1 đến 3: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Bạn đã chọn số 1.\n");
            break;
        case 2:
            printf("Bạn đã chọn số 2.\n");
            break;
        case 3:
            printf("Bạn đã chọn số 3.\n");
            break;
        default:
            printf("Lựa chọn không hợp lệ.\n");
    }
    return 0;
}
```

### 6. Lưu ý
- Khi sử dụng `if`, cần đảm bảo điều kiện có ý nghĩa và tránh sử dụng quá nhiều `if` lồng nhau.
- `switch-case` chỉ hoạt động với các giá trị nguyên (`int`, `char`), không dùng được với `float` hoặc `double`.
- Người khiếm thị nên sử dụng trình đọc màn hình để theo dõi các thông báo đầu ra một cách rõ ràng.

## III. Tóm tắt bài học
- Câu lệnh `if` kiểm tra điều kiện và thực thi mã khi điều kiện đúng.
- `if-else` mở rộng `if`, giúp xử lý cả trường hợp điều kiện sai.
- `if-else if-else` giúp kiểm tra nhiều điều kiện khác nhau.
- `switch-case` là một cách khác để kiểm tra nhiều giá trị của một biến.
- Cần sử dụng đúng loại câu lệnh điều kiện phù hợp với tình huống cụ thể để tối ưu mã nguồn.

### Liên kết với bài học tiếp theo
Trong bài học tiếp theo, chúng ta sẽ tìm hiểu về vòng lặp trong C, một công cụ mạnh mẽ giúp lập trình viên xử lý các tác vụ lặp đi lặp lại một cách hiệu quả.

