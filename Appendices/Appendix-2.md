## Phần II. Cấu trúc dữ liệu trong C

### 1. Giới thiệu về cấu trúc dữ liệu
Cấu trúc dữ liệu là một phần quan trọng trong lập trình, giúp tổ chức và quản lý dữ liệu hiệu quả. Trong ngôn ngữ lập trình C, có nhiều loại cấu trúc dữ liệu khác nhau, mỗi loại phù hợp với một số bài toán cụ thể.

### 2. Các loại cấu trúc dữ liệu trong C
#### a. Mảng (Array)
- Mảng là một tập hợp các phần tử cùng kiểu dữ liệu được lưu trữ liên tiếp trong bộ nhớ.
- Truy cập các phần tử thông qua chỉ số (index).
- Ví dụ khai báo mảng:
  ```c
  int numbers[5] = {1, 2, 3, 4, 5};
  ```
- Mảng có thể là một chiều, hai chiều hoặc nhiều chiều.

#### b. Chuỗi ký tự (String)
- Chuỗi là một mảng các ký tự kết thúc bằng ký tự '\0'.
- Sử dụng thư viện `<string.h>` để thao tác với chuỗi.
- Ví dụ:
  ```c
  char name[] = "Hello";
  printf("%s", name);
  ```

#### c. Cấu trúc (Struct)
- Cấu trúc là một kiểu dữ liệu do người dùng định nghĩa, chứa nhiều biến khác nhau.
- Ví dụ:
  ```c
  struct Student {
      char name[50];
      int age;
      float gpa;
  };
  ```
- Sử dụng để quản lý dữ liệu phức tạp.

#### d. Danh sách liên kết (Linked List)
- Danh sách liên kết là một tập hợp các nút (node), mỗi nút chứa dữ liệu và con trỏ trỏ đến nút kế tiếp.
- Giúp quản lý bộ nhớ động linh hoạt hơn mảng.
- Ví dụ khai báo một nút:
  ```c
  struct Node {
      int data;
      struct Node *next;
  };
  ```

#### e. Ngăn xếp (Stack) và Hàng đợi (Queue)
- **Ngăn xếp (Stack):** Cấu trúc LIFO (Last In, First Out).
- **Hàng đợi (Queue):** Cấu trúc FIFO (First In, First Out).
- Có thể cài đặt bằng mảng hoặc danh sách liên kết.
- Ví dụ sử dụng ngăn xếp:
  ```c
  #define MAX 100
  int stack[MAX];
  int top = -1;
  ```

### 3. Ứng dụng của cấu trúc dữ liệu
- Mảng: Lưu trữ danh sách cố định như điểm số, danh sách tên.
- Chuỗi: Xử lý văn bản, mã hóa, giải mã.
- Struct: Quản lý thông tin như sinh viên, nhân viên.
- Danh sách liên kết: Quản lý dữ liệu động, bộ nhớ linh hoạt.
- Stack: Hoàn tác (Undo), kiểm tra dấu ngoặc trong biểu thức.
- Queue: Quản lý hàng đợi, xử lý đa luồng.

### 4. Tổng kết
Cấu trúc dữ liệu là nền tảng của lập trình, giúp giải quyết bài toán hiệu quả. Việc chọn cấu trúc phù hợp giúp tối ưu bộ nhớ và thời gian xử lý. Trong lập trình C, nắm vững các cấu trúc này là điều cần thiết để phát triển phần mềm mạnh mẽ.

