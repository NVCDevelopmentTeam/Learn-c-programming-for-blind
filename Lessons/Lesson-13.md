# **Bài 13. Quản lý tập tin**

## I: Mục tiêu bài học:
- Hiểu được khái niệm tập tin và vai trò của quản lý tập tin trong lập trình C.
- Biết cách mở, đọc, ghi và đóng tập tin.
- Thành thạo sử dụng các hàm thao tác với tập tin trong thư viện chuẩn của C.
- Ứng dụng quản lý tập tin vào bài toán thực tế.

## II: Nội dung bài học:

### **1. Khái niệm về tập tin trong C**
Trong lập trình C, tập tin (file) là một cách lưu trữ dữ liệu bên ngoài bộ nhớ chính để có thể truy xuất và xử lý sau này. Việc thao tác với tập tin giúp chương trình có thể lưu trữ dữ liệu một cách lâu dài thay vì chỉ tồn tại trong bộ nhớ RAM.

C có hai loại tập tin chính:
- **Tập tin văn bản (Text file):** Chứa dữ liệu ở dạng ký tự có thể đọc được.
- **Tập tin nhị phân (Binary file):** Chứa dữ liệu ở dạng mã hóa, khó đọc trực tiếp bằng trình soạn thảo văn bản.

### **2. Các thao tác cơ bản với tập tin**
#### **2.1. Mở tập tin**
Để mở một tập tin trong C, chúng ta sử dụng hàm `fopen()` với cú pháp:

```c
FILE *ptr = fopen("ten_tap_tin", "che_do");
```

Các chế độ mở tập tin phổ biến:
| Chế độ | Mô tả |
|--------|--------|
| `"r"`  | Mở tập tin chỉ để đọc, nếu tập tin không tồn tại sẽ báo lỗi. |
| `"w"`  | Mở tập tin để ghi, nếu tập tin tồn tại, nội dung sẽ bị xóa. |
| `"a"`  | Mở tập tin để ghi vào cuối tập tin, nếu không tồn tại sẽ tạo mới. |
| `"rb"`, `"wb"`, `"ab"` | Tương tự các chế độ trên nhưng dành cho tập tin nhị phân. |

Ví dụ mở một tập tin văn bản để đọc:
```c
FILE *file = fopen("data.txt", "r");
if (file == NULL) {
    printf("Không thể mở tập tin!\n");
    return 1;
}
```

#### **2.2. Đọc dữ liệu từ tập tin**
Có nhiều cách để đọc dữ liệu từ tập tin:
- `fgetc(file)`: Đọc từng ký tự từ tập tin.
- `fgets(buffer, size, file)`: Đọc một dòng từ tập tin.
- `fscanf(file, "format", &variable)`: Đọc dữ liệu theo định dạng.

Ví dụ:
```c
char buffer[100];
FILE *file = fopen("data.txt", "r");
if (file) {
    while (fgets(buffer, 100, file)) {
        printf("%s", buffer);
    }
    fclose(file);
}
```

#### **2.3. Ghi dữ liệu vào tập tin**
Các hàm phổ biến để ghi dữ liệu:
- `fputc(ch, file)`: Ghi một ký tự vào tập tin.
- `fputs(str, file)`: Ghi một chuỗi vào tập tin.
- `fprintf(file, "format", values)`: Ghi dữ liệu theo định dạng.

Ví dụ:
```c
FILE *file = fopen("output.txt", "w");
if (file) {
    fprintf(file, "Xin chào!\n");
    fclose(file);
}
```

#### **2.4. Đóng tập tin**
Sau khi hoàn thành công việc với tập tin, chúng ta cần đóng nó bằng hàm `fclose(file);` để giải phóng tài nguyên.

```c
fclose(file);
```

### **3. Tập tin nhị phân**
Tập tin nhị phân lưu trữ dữ liệu theo dạng bit, thường được sử dụng để lưu trữ cấu trúc dữ liệu phức tạp như mảng, cấu trúc, v.v.

#### **3.1. Đọc và ghi tập tin nhị phân**
Sử dụng `fread()` và `fwrite()` để thao tác với tập tin nhị phân:

```c
fwrite(&bien, sizeof(loai_du_lieu), so_phan_tu, file);
```

Ví dụ ghi và đọc một cấu trúc vào tập tin nhị phân:
```c
struct Student {
    char name[50];
    int age;
};

FILE *file = fopen("students.dat", "wb");
struct Student s = {"Nguyen Van A", 20};
if (file) {
    fwrite(&s, sizeof(struct Student), 1, file);
    fclose(file);
}

file = fopen("students.dat", "rb");
if (file) {
    fread(&s, sizeof(struct Student), 1, file);
    printf("%s %d\n", s.name, s.age);
    fclose(file);
}
```

### **4. Xóa và đổi tên tập tin**
Cung cấp các thao tác nâng cao:
- **Xóa tập tin:** `remove("ten_tap_tin");`
- **Đổi tên tập tin:** `rename("ten_cu.txt", "ten_moi.txt");`

Ví dụ:
```c
if (remove("oldfile.txt") == 0)
    printf("Xóa tập tin thành công\n");
else
    printf("Xóa tập tin thất bại\n");
```

### **5. Lưu ý cho người khiếm thị**
- Khi làm việc với tập tin, hãy chắc chắn sử dụng thông báo lỗi rõ ràng để dễ dàng nhận biết lỗi qua trình đọc màn hình.
- Định dạng đầu ra một cách có hệ thống để dễ đọc hơn, tránh quá nhiều thông tin không cần thiết.
- Đối với tập tin văn bản, hãy đảm bảo mã hóa phù hợp để trình đọc màn hình có thể đọc được.

### **6. Tóm tắt bài học**
- Tập tin giúp lưu trữ dữ liệu lâu dài thay vì chỉ trong bộ nhớ RAM.
- Có hai loại tập tin chính: văn bản và nhị phân.
- Các thao tác cơ bản gồm mở, đọc, ghi và đóng tập tin.
- Sử dụng `fopen()`, `fgetc()`, `fputs()`, `fclose()`, `fwrite()`, `fread()` để thao tác với tập tin.
- Có thể đổi tên và xóa tập tin bằng `rename()` và `remove()`.

### **7. Kết nối với bài tiếp theo**
Vậy là chúng ta đã kết thúc hành trình khám phá lập trình C với bài cuối cùng về quản lý tập tin. Bây giờ, bạn có thể áp dụng tất cả các kiến thức đã học để viết các chương trình hoàn chỉnh và thực tế hơn. Hãy tiếp tục với các bài tập thực hành để củng cố kiến thức của mình!

**Chúc bạn thành công!**

