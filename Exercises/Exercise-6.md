# **Bài tập 6: Mảng**

## I: Mục tiêu:
- Giúp học viên hiểu và vận dụng được mảng trong ngôn ngữ lập trình C.
- Làm quen với cách khai báo, khởi tạo và thao tác trên mảng một chiều và hai chiều.
- Ứng dụng mảng để giải quyết các bài toán cơ bản.

## II: Bài tập mẫu:
### Bài toán: Tính tổng các phần tử trong mảng
Viết một chương trình nhập vào một mảng số nguyên gồm N phần tử, sau đó tính tổng các phần tử trong mảng và hiển thị kết quả.

#### Hướng dẫn:
1. Nhập số lượng phần tử của mảng.
2. Nhập các phần tử của mảng.
3. Duyệt qua mảng và tính tổng các phần tử.
4. Hiển thị kết quả tổng của mảng.

#### Ví dụ minh họa:
```c
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhập các phần tử của mảng: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("Tổng các phần tử trong mảng là: %d\n", sum);
    return 0;
}
```

## III: Bài tập thực hành:
### Bài 1: Tìm giá trị lớn nhất và nhỏ nhất trong mảng
#### Yêu cầu:
- Viết chương trình nhập vào một mảng số nguyên N phần tử.
- Tìm phần tử lớn nhất và nhỏ nhất trong mảng.
- Hiển thị kết quả.

#### Gợi ý:
- Sử dụng biến tạm để lưu giá trị lớn nhất và nhỏ nhất.
- Duyệt qua mảng để cập nhật giá trị.

### Bài 2: Đảo ngược mảng
#### Yêu cầu:
- Viết chương trình nhập vào một mảng số nguyên.
- Đảo ngược thứ tự các phần tử trong mảng.
- Hiển thị mảng sau khi đảo ngược.

#### Gợi ý:
- Sử dụng vòng lặp để hoán đổi các phần tử từ đầu đến cuối.
- Dùng biến trung gian để hoán đổi giá trị.

### Bài 3: Sắp xếp mảng tăng dần
#### Yêu cầu:
- Nhập vào một mảng số nguyên N phần tử.
- Sắp xếp mảng theo thứ tự tăng dần.
- Hiển thị kết quả.

#### Gợi ý:
- Sử dụng thuật toán sắp xếp nổi bọt hoặc chèn.
- So sánh và hoán đổi vị trí các phần tử.

### Bài 4: Tìm kiếm một phần tử trong mảng
#### Yêu cầu:
- Viết chương trình nhập vào một mảng và một số nguyên X.
- Kiểm tra xem X có xuất hiện trong mảng hay không, nếu có thì in ra vị trí của nó.

#### Gợi ý:
- Dùng vòng lặp để duyệt qua từng phần tử của mảng.
- So sánh từng phần tử với X.

### Bài 5: Tính tổng các phần tử chẵn trong mảng
#### Yêu cầu:
- Viết chương trình nhập vào một mảng số nguyên.
- Tính tổng các số chẵn trong mảng.
- Hiển thị kết quả tổng các số chẵn.

#### Gợi ý:
- Sử dụng vòng lặp để duyệt qua từng phần tử.
- Kiểm tra số chẵn bằng toán tử `%`.

Các bài tập trên giúp học viên làm quen và vận dụng mảng trong C một cách hiệu quả.

