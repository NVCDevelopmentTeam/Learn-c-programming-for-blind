# **Bài 5: Nhập và Xuất trong C**

## I. Mục tiêu bài học
Sau khi hoàn thành bài học này, bạn sẽ:
- Hiểu được cách nhập và xuất dữ liệu trong ngôn ngữ lập trình C.
- Sử dụng thành thạo các hàm nhập, xuất cơ bản như `printf` và `scanf`.
- Nhận biết các lưu ý quan trọng khi nhập và xuất dữ liệu, đặc biệt đối với người khiếm thị.
- Ứng dụng kiến thức để xây dựng các chương trình có tính tương tác với người dùng.

## II. Nội dung bài học

### 1. Khái niệm về nhập và xuất dữ liệu
Trong lập trình, nhập dữ liệu (*input*) là quá trình lấy dữ liệu từ người dùng hoặc từ nguồn bên ngoài vào chương trình, trong khi xuất dữ liệu (*output*) là quá trình hiển thị thông tin ra màn hình hoặc ghi vào tệp tin.

### 2. Xuất dữ liệu với `printf`
Hàm `printf` trong C được sử dụng để hiển thị dữ liệu ra màn hình. Cú pháp cơ bản của hàm như sau:

```c
#include <stdio.h>

int main() {
    printf("Chào mừng bạn đến với lập trình C!\n");
    return 0;
}
```
**Giải thích:**
- `#include <stdio.h>`: Thư viện chuẩn hỗ trợ nhập/xuất dữ liệu.
- `printf("Chào mừng bạn đến với lập trình C!\n");`: Xuất chuỗi ký tự ra màn hình.
- `\n`: Ký tự xuống dòng, giúp văn bản hiển thị dễ đọc hơn.

### 3. Nhập dữ liệu với `scanf`
Hàm `scanf` được sử dụng để nhận dữ liệu từ bàn phím. Ví dụ:

```c
#include <stdio.h>

int main() {
    int age;
    printf("Nhập tuổi của bạn: ");
    scanf("%d", &age);
    printf("Tuổi của bạn là: %d\n", age);
    return 0;
}
```
**Giải thích:**
- `scanf("%d", &age);`: Nhận giá trị số nguyên từ người dùng và lưu vào biến `age`.
- `&age`: Dấu `&` giúp `scanf` lưu giá trị vào địa chỉ bộ nhớ của biến.

### 4. Một số lưu ý quan trọng
- Khi nhập dữ liệu, cần sử dụng định dạng đúng (`%d` cho số nguyên, `%f` cho số thực, `%s` cho chuỗi,...).
- Đối với người khiếm thị, cần thông báo rõ ràng trước khi yêu cầu nhập dữ liệu để tránh nhầm lẫn.
- Hạn chế sử dụng các ký tự đặc biệt hoặc thông báo khó hiểu, tránh gây khó khăn khi sử dụng trình đọc màn hình.
- Khi nhập chuỗi có khoảng trắng, thay vì `scanf("%s", str)`, nên sử dụng `fgets` để đảm bảo chương trình hoạt động chính xác.

## III. Lưu ý
- Người khiếm thị nên dùng trình đọc màn hình hỗ trợ để nhận phản hồi từ chương trình.
- Khi xuất dữ liệu, cần xuống dòng để nội dung dễ đọc hơn.
- Khi nhập dữ liệu, nên đảm bảo rằng chương trình thông báo một cách rõ ràng về loại dữ liệu cần nhập.

## IV. Tóm tắt bài học
- `printf` dùng để xuất dữ liệu ra màn hình.
- `scanf` dùng để nhập dữ liệu từ bàn phím.
- Cần chú ý đến kiểu dữ liệu khi nhập xuất.
- Người khiếm thị cần thông tin rõ ràng khi nhập và xuất dữ liệu để sử dụng trình đọc màn hình hiệu quả.

### Liên kết với bài học tiếp theo
Trong bài học tiếp theo, chúng ta sẽ tìm hiểu sâu hơn về câu lệnh điều kiện rẽ nhánh, kiểu dữ liệu và cách sử dụng biến trong C, giúp bạn hiểu rõ hơn về cách lưu trữ và thao tác với dữ liệu trong chương trình.

