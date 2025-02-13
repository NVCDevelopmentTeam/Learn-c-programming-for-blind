# **Bài Tập 2: Phần Mềm Quản Lý Thư Viện**

## Mục Tiêu
Phát triển một chương trình quản lý thư viện bằng ngôn ngữ C, giúp học viên áp dụng các kiến thức về biến, con trỏ, mảng, hàm, cấu trúc dữ liệu, tập tin, v.v. 

Chương trình cho phép quản lý sách trong thư viện, bao gồm các chức năng như thêm sách, xóa sách, tìm kiếm sách, và quản lý mượn/trả sách. Bài tập này giúp học viên hệ thống lại toàn bộ kiến thức đã học trong giáo trình.

---

## Bài Tập Mẫu
### Yêu cầu
- Xây dựng một chương trình quản lý sách trong thư viện.
- Sử dụng mảng hoặc danh sách liên kết để lưu trữ danh sách sách.
- Cho phép người dùng:
  - Thêm sách mới.
  - Xóa sách theo ID.
  - Tìm kiếm sách theo tên hoặc tác giả.
  - Quản lý tình trạng mượn sách.
  - Lưu dữ liệu vào tập tin và đọc dữ liệu từ tập tin khi chương trình khởi động.

### Ví dụ Mẫu
```c
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[100];
    char author[100];
    int available;
};

struct Book library[MAX_BOOKS];
int bookCount = 0;

void addBook(int id, char title[], char author[]) {
    library[bookCount].id = id;
    strcpy(library[bookCount].title, title);
    strcpy(library[bookCount].author, author);
    library[bookCount].available = 1;
    bookCount++;
}

void listBooks() {
    printf("Danh sách sách trong thư viện:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d, Tên: %s, Tác giả: %s, Tình trạng: %s\n",
               library[i].id, library[i].title, library[i].author,
               library[i].available ? "Còn sách" : "Đã mượn");
    }
}

int main() {
    addBook(1, "Lập Trình C", "Tác Giả A");
    addBook(2, "C++ Cơ Bản", "Tác Giả B");
    
    listBooks();
    return 0;
}
```

Ví dụ trên minh họa cách thêm sách và hiển thị danh sách sách trong thư viện.

---

## Bài Tập Thực Hành
### Yêu cầu
Viết một chương trình hoàn chỉnh quản lý thư viện với các chức năng:

1. **Thêm sách**: Nhập thông tin sách từ bàn phím.
2. **Hiển thị danh sách sách**: In danh sách sách hiện có.
3. **Tìm kiếm sách**: Tìm theo tên hoặc tác giả.
4. **Xóa sách**: Xóa sách khỏi danh sách.
5. **Quản lý mượn/trả sách**: Cập nhật trạng thái mượn/trả.
6. **Lưu và tải dữ liệu**: Lưu danh sách sách vào tập tin và tải lại khi chương trình khởi động.

Học viên cần triển khai đầy đủ các chức năng trên, đảm bảo chương trình hoạt động chính xác và hiệu quả. Hãy tận dụng kiến thức từ ví dụ mẫu để phát triển chương trình hoàn chỉnh.

