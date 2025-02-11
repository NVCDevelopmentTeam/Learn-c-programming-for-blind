# **Bài 8. Mảng**

## **I: Mục tiêu bài học**
Sau khi hoàn thành bài học này, người học sẽ:
- Hiểu khái niệm về mảng trong ngôn ngữ lập trình C.
- Biết cách khai báo, khởi tạo và sử dụng mảng một chiều và mảng hai chiều.
- Áp dụng mảng vào các bài toán cơ bản trong lập trình.

## **II: Nội dung bài học**

### **1. Giới thiệu về mảng**
Mảng (Array) là một tập hợp các phần tử có cùng kiểu dữ liệu, được lưu trữ liên tiếp trong bộ nhớ. Mỗi phần tử trong mảng có một chỉ số (index) để truy xuất.

### **2. Khai báo và khởi tạo mảng**
#### **a. Khai báo mảng một chiều**
Cú pháp khai báo mảng một chiều trong C:
```c
int arr[5]; // Khai báo một mảng gồm 5 phần tử kiểu int
```
Lưu ý: Khi khai báo, kích thước của mảng phải là một số nguyên dương.

#### **b. Khởi tạo giá trị cho mảng**
Có thể khởi tạo mảng ngay khi khai báo:
```c
int arr[5] = {1, 2, 3, 4, 5};
```
Nếu không chỉ định đầy đủ số phần tử, C sẽ tự động gán giá trị 0 cho các phần tử còn lại:
```c
int arr[5] = {1, 2}; // Mảng sẽ có giá trị {1, 2, 0, 0, 0}
```

### **3. Truy xuất phần tử trong mảng**
Truy xuất phần tử mảng bằng chỉ số:
```c
int x = arr[2]; // Lấy giá trị phần tử thứ 3 của mảng
```
Lưu ý: Chỉ số của mảng trong C bắt đầu từ 0.

### **4. Mảng hai chiều**
Mảng hai chiều là mảng có hai chỉ số, dùng để biểu diễn dữ liệu dạng bảng.
#### **a. Khai báo mảng hai chiều**
```c
int matrix[3][3];
```
#### **b. Khởi tạo mảng hai chiều**
```c
int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
```
#### **c. Truy xuất phần tử trong mảng hai chiều**
```c
int value = matrix[1][2]; // Lấy giá trị hàng 1, cột 2
```

## **III: Lưu ý dành cho người khiếm thị**
- Khi làm việc với mảng, cần hình dung chúng như danh sách các phần tử liên tiếp, có thể truy cập bằng cách sử dụng chỉ số.
- Dùng `for` để duyệt qua các phần tử giúp dễ dàng kiểm soát dữ liệu.

## **IV: Tóm tắt bài học**
- Mảng là tập hợp các phần tử cùng kiểu dữ liệu, truy xuất bằng chỉ số.
- Mảng một chiều có thể khai báo, khởi tạo và truy xuất theo cú pháp nhất định.
- Mảng hai chiều dùng để biểu diễn dữ liệu dạng bảng.
- Việc sử dụng mảng giúp tổ chức dữ liệu hiệu quả và tiết kiệm bộ nhớ.

## **V: Liên kết với bài học tiếp theo**
Trong bài học tiếp theo, chúng ta sẽ tìm hiểu về **con trỏ**, một khái niệm quan trọng giúp làm việc với bộ nhớ và quản lý dữ liệu linh hoạt hơn.

