# **Bài 12. Các kiểu dữ liệu nâng cao và sắp xếp**

## I: Mục tiêu bài học:
Sau khi hoàn thành bài học này, người học sẽ:
- Hiểu được các kiểu dữ liệu nâng cao trong C như `struct`, `union`, và `enum`.
- Biết cách sử dụng các cấu trúc dữ liệu này trong lập trình.
- Nắm vững các thuật toán sắp xếp cơ bản như sắp xếp nổi bọt (Bubble Sort), sắp xếp chọn (Selection Sort) và sắp xếp chèn (Insertion Sort).
- Áp dụng được các thuật toán sắp xếp vào bài toán thực tế.

## II: Nội dung bài học:

### 1. Các kiểu dữ liệu nâng cao
Trong ngôn ngữ lập trình C, ngoài các kiểu dữ liệu cơ bản như `int`, `float`, `char`, C còn cung cấp các kiểu dữ liệu nâng cao giúp tổ chức và quản lý dữ liệu hiệu quả hơn.

#### a. Cấu trúc (`struct`)
`struct` là một kiểu dữ liệu cho phép nhóm nhiều biến có thể thuộc các kiểu khác nhau vào một đơn vị duy nhất.

Ví dụ:
```c
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct Student s1 = {"Nguyen Van A", 20, 3.5};
    printf("Sinh viên: %s, Tuổi: %d, GPA: %.2f\n", s1.name, s1.age, s1.gpa);
    return 0;
}
```

#### b. Hợp (`union`)
`union` tương tự như `struct`, nhưng các thành viên của `union` dùng chung một vùng nhớ, tiết kiệm bộ nhớ hơn so với `struct`.

Ví dụ:
```c
#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    data.i = 10;
    printf("i: %d\n", data.i);
    data.f = 220.5;
    printf("f: %.2f\n", data.f);
    return 0;
}
```

#### c. Kiểu liệt kê (`enum`)
`enum` là một kiểu dữ liệu cho phép gán tên cho các giá trị nguyên, giúp chương trình dễ đọc hơn.

Ví dụ:
```c
#include <stdio.h>

enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main() {
    enum Weekday today = Friday;
    printf("Hôm nay là ngày thứ %d trong tuần\n", today + 1);
    return 0;
}
```

### 2. Các thuật toán sắp xếp cơ bản

#### a. Sắp xếp nổi bọt (Bubble Sort)
Thuật toán này so sánh từng cặp phần tử kề nhau và hoán đổi nếu chúng không theo thứ tự mong muốn.

Ví dụ:
```c
#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Mảng sau khi sắp xếp: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

#### b. Sắp xếp chọn (Selection Sort)
Chọn phần tử nhỏ nhất trong danh sách và đưa nó về đầu danh sách.

Ví dụ:
```c
#include <stdio.h>
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Mảng sau khi sắp xếp: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

#### c. Sắp xếp chèn (Insertion Sort)
Chèn từng phần tử vào vị trí thích hợp trong danh sách đã sắp xếp.

Ví dụ:
```c
#include <stdio.h>
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Mảng sau khi sắp xếp: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

## III: Lưu ý dành cho người khiếm thị
- Khi làm việc với `struct` và `union`, cần lưu ý kích thước bộ nhớ và cách tổ chức dữ liệu.
- Các thuật toán sắp xếp có thể được thực hành trên trình biên dịch trực tuyến hoặc thông qua chương trình tự viết.

## IV: Tóm tắt bài học
- Đã tìm hiểu về các kiểu dữ liệu nâng cao (`struct`, `union`, `enum`).
- Đã học về các thuật toán sắp xếp cơ bản như Bubble Sort, Selection Sort và Insertion Sort.
- Biết cách áp dụng các thuật toán này vào bài toán thực tế.

## V: Liên kết tới bài tiếp theo
Trong bài tiếp theo, chúng ta sẽ tìm hiểu về **Quản lý tập tin trong C**, một chủ đề quan trọng giúp bạn thao tác với tệp tin trong lập trình thực tế.

