# **bài tập 1: Quản Lý Sinh Viên**

## I. Mục Tiêu
Bài tập này nhằm hệ thống lại toàn bộ kiến thức đã học trong khóa học lập trình C. Người học sẽ áp dụng các khái niệm như biến, kiểu dữ liệu, mảng, con trỏ, hàm, cấu trúc dữ liệu, nhập/xuất, quản lý tập tin và các thuật toán cơ bản để xây dựng một hệ thống quản lý sinh viên.

## II. Yêu Cầu Bài Tập
Xây dựng một chương trình quản lý sinh viên với các chức năng sau:

1. **Thêm sinh viên mới**: 
   - Nhập thông tin sinh viên (Mã sinh viên, Họ và Tên, Giới tính, Tuổi, Điểm trung bình, Lớp học)
   - Lưu trữ dữ liệu vào mảng hoặc danh sách liên kết.

2. **Hiển thị danh sách sinh viên**:
   - Hiển thị toàn bộ danh sách sinh viên đã nhập.
   - Hiển thị danh sách theo thứ tự điểm trung bình giảm dần.
   - Hiển thị danh sách sinh viên theo từng lớp.

3. **Tìm kiếm sinh viên**:
   - Tìm sinh viên theo Mã sinh viên.
   - Tìm sinh viên theo Họ và Tên.
   - Tìm sinh viên có điểm trung bình cao nhất hoặc thấp nhất.

4. **Chỉnh sửa thông tin sinh viên**:
   - Cập nhật lại thông tin của một sinh viên theo Mã sinh viên.
   - Chỉnh sửa điểm trung bình của sinh viên.

5. **Xóa sinh viên**:
   - Xóa một sinh viên khỏi danh sách dựa vào Mã sinh viên.
   - Xóa tất cả sinh viên có điểm trung bình dưới mức cho phép.

6. **Lưu và đọc dữ liệu từ tập tin**:
   - Lưu danh sách sinh viên vào tập tin (file nhị phân hoặc file văn bản).
   - Đọc dữ liệu từ tập tin và hiển thị ra màn hình.

7. **Sắp xếp danh sách sinh viên**:
   - Sắp xếp theo điểm trung bình (giảm dần/tăng dần).
   - Sắp xếp theo tên (A-Z hoặc Z-A).
   - Sắp xếp theo mã sinh viên.

## III. Bài Tập Mẫu
Dưới đây là đoạn mã mẫu minh họa cách thêm và hiển thị danh sách sinh viên sử dụng mảng:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char maSV[10];
    char hoTen[50];
    char gioiTinh[10];
    int tuoi;
    float diemTB;
    char lop[10];
} SinhVien;

void themSinhVien(SinhVien sv[], int *n) {
    printf("Nhập mã sinh viên: ");
    scanf("%s", sv[*n].maSV);
    printf("Nhập họ tên: ");
    getchar(); // Loại bỏ bộ đệm
    fgets(sv[*n].hoTen, sizeof(sv[*n].hoTen), stdin);
    printf("Nhập giới tính: ");
    scanf("%s", sv[*n].gioiTinh);
    printf("Nhập tuổi: ");
    scanf("%d", &sv[*n].tuoi);
    printf("Nhập điểm trung bình: ");
    scanf("%f", &sv[*n].diemTB);
    printf("Nhập lớp: ");
    scanf("%s", sv[*n].lop);
    (*n)++;
}

void hienThiSinhVien(SinhVien sv[], int n) {
    printf("\nDanh sách sinh viên:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %s - %s - %d - %.2f - %s\n", 
               sv[i].maSV, sv[i].hoTen, sv[i].gioiTinh, sv[i].tuoi, sv[i].diemTB, sv[i].lop);
    }
}

int main() {
    SinhVien sv[MAX];
    int n = 0;
    themSinhVien(sv, &n);
    hienThiSinhVien(sv, n);
    return 0;
}
```

## IV. Bài Tập Thực Hành
- Mở rộng chương trình để thực hiện đầy đủ các chức năng đã yêu cầu.
- Cải thiện giao diện hiển thị để dễ sử dụng hơn.
- Xử lý lỗi khi nhập dữ liệu.
- Hiển thị danh sách sinh viên theo nhiều tiêu chí khác nhau.
- Cài đặt chương trình bằng cách sử dụng danh sách liên kết thay vì mảng.
- Lưu và tải dữ liệu từ tập tin.
- Kiểm tra dữ liệu đầu vào để tránh nhập sai.

## V. Đánh Giá Kết Quả
- Chương trình có chạy đúng với các chức năng yêu cầu không?
- Mã nguồn có được viết gọn gàng, dễ hiểu và dễ mở rộng không?
- Có kiểm tra lỗi đầu vào để tránh sai sót khi nhập dữ liệu không?
- Hiệu suất của chương trình khi làm việc với số lượng lớn sinh viên có tốt không?

---
Bài tập này giúp học viên vận dụng toàn bộ kiến thức đã học để xây dựng một ứng dụng thực tế, tăng khả năng tư duy và kỹ năng lập trình C.

