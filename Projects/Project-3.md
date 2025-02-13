# **Bài tập 3: Chương trình Quản lý Danh bạ**

## I. Mục tiêu
- Xây dựng chương trình quản lý danh bạ cho phép thêm, xóa, sửa và tìm kiếm thông tin liên lạc.
- Áp dụng kiến thức về cấu trúc dữ liệu, con trỏ, file và danh sách liên kết.
- Rèn luyện kỹ năng xử lý chuỗi, thao tác với file và quản lý bộ nhớ động.

## II. Bài tập mẫu
### Yêu cầu
Viết một chương trình đơn giản giúp người dùng thêm và hiển thị danh bạ.

### Hướng dẫn
1. Sử dụng cấu trúc `struct` để lưu thông tin liên lạc gồm: tên, số điện thoại, email.
2. Dùng mảng động hoặc danh sách liên kết để quản lý danh sách liên lạc.
3. Viết hàm thêm liên lạc mới vào danh bạ.
4. Viết hàm hiển thị danh bạ.
5. Lưu danh bạ vào file để có thể truy xuất lại.

### Ví dụ minh họa
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char name[50];
    char phone[15];
    char email[50];
} Contact;

void addContact(Contact contacts[], int *size) {
    if (*size >= MAX) {
        printf("Danh bạ đầy!\n");
        return;
    }
    printf("Nhập tên: ");
    scanf("%s", contacts[*size].name);
    printf("Nhập số điện thoại: ");
    scanf("%s", contacts[*size].phone);
    printf("Nhập email: ");
    scanf("%s", contacts[*size].email);
    (*size)++;
}

void displayContacts(Contact contacts[], int size) {
    printf("\nDanh bạ:\n");
    for (int i = 0; i < size; i++) {
        printf("%d. %s - %s - %s\n", i + 1, contacts[i].name, contacts[i].phone, contacts[i].email);
    }
}

int main() {
    Contact contacts[MAX];
    int size = 0;
    addContact(contacts, &size);
    displayContacts(contacts, size);
    return 0;
}
```

## III. Bài tập thực hành
Phát triển chương trình quản lý danh bạ với các chức năng nâng cao:
1. **Thêm liên lạc mới**: Cho phép người dùng nhập tên, số điện thoại, email và lưu vào danh bạ.
2. **Hiển thị danh bạ**: Hiển thị danh sách tất cả các liên lạc.
3. **Tìm kiếm liên lạc**: Tìm kiếm thông tin theo tên hoặc số điện thoại.
4. **Xóa liên lạc**: Xóa một liên lạc theo số điện thoại.
5. **Cập nhật thông tin**: Cho phép sửa đổi thông tin liên lạc.
6. **Lưu và đọc từ file**: Lưu danh bạ vào file và đọc lại khi chạy chương trình.
7. **Sử dụng danh sách liên kết**: Nếu có thể, triển khai danh sách liên kết thay vì mảng động.
8. **Giao diện thân thiện**: Thiết kế menu điều khiển rõ ràng, dễ sử dụng.
9. **Kiểm tra lỗi đầu vào**: Đảm bảo người dùng không nhập thông tin trùng lặp hoặc sai định dạng.
10. **Sắp xếp danh bạ**: Cung cấp tùy chọn sắp xếp danh sách liên lạc theo tên hoặc số điện thoại.

Học viên cần thiết kế chương trình hoàn chỉnh, đảm bảo tính tối ưu và dễ sử dụng.

