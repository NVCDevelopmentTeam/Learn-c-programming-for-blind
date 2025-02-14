# **Bài tập 11: Quản lý tập tin**

## I: Mục tiêu:
- Hiểu cách làm việc với tệp tin trong ngôn ngữ lập trình C.
- Biết cách mở, đọc, ghi và đóng tệp tin.
- Ứng dụng thao tác với tệp tin để lưu trữ và xử lý dữ liệu.

## II: Bài tập Mẫu:
### Đề bài:
Viết chương trình C để quản lý danh sách sinh viên bằng tệp tin. Chương trình cần có các chức năng:
- Thêm sinh viên vào danh sách.
- Hiển thị danh sách sinh viên từ tệp.
- Xóa nội dung của tệp.

### Hướng dẫn:
1. Sử dụng cấu trúc `struct` để lưu thông tin sinh viên (Tên, Mã số, Điểm).
2. Dùng tệp tin `fopen()` để mở tệp ở chế độ đọc/ghi.
3. Ghi dữ liệu vào tệp bằng `fprintf()`.
4. Đọc dữ liệu từ tệp bằng `fscanf()`.
5. Sử dụng `fclose()` để đóng tệp sau khi thực hiện thao tác.

### Ví dụ minh họa:
```c
#include <stdio.h>
#include <stdlib.h>

struct SinhVien {
    char ten[50];
    int maSo;
    float diem;
};

void ghiTep() {
    FILE *f = fopen("sinhvien.txt", "w");
    struct SinhVien sv = {"Nguyen Van A", 123, 8.5};
    if (f != NULL) {
        fprintf(f, "%s %d %.2f\n", sv.ten, sv.maSo, sv.diem);
        fclose(f);
    }
}

void docTep() {
    FILE *f = fopen("sinhvien.txt", "r");
    struct SinhVien sv;
    if (f != NULL) {
        fscanf(f, "%s %d %f", sv.ten, &sv.maSo, &sv.diem);
        printf("%s %d %.2f\n", sv.ten, sv.maSo, sv.diem);
        fclose(f);
    }
}

int main() {
    ghiTep();
    docTep();
    return 0;
}
```

## III: Bài tập thực hành:
### Đề bài:
Viết chương trình quản lý hóa đơn mua hàng bằng tệp tin với các chức năng:
1. Nhập danh sách hóa đơn và lưu vào tệp tin.
2. Hiển thị danh sách hóa đơn từ tệp.
3. Tìm kiếm hóa đơn theo mã số.
4. Xóa nội dung tệp tin.

### Gợi ý:
- Tạo cấu trúc `struct` để lưu thông tin hóa đơn (Mã hóa đơn, Tên khách hàng, Tổng tiền).
- Sử dụng tệp tin để lưu trữ và truy xuất dữ liệu.
- Dùng vòng lặp để nhập và hiển thị nhiều hóa đơn.
- Sử dụng `fseek()` hoặc `rewind()` nếu cần truy cập lại tệp.

