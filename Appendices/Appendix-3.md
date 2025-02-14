## Phần III: Thuật toán cơ bản

### 1. Giới thiệu về Thuật toán
Thuật toán là một tập hợp các bước hoặc quy tắc để giải quyết một bài toán cụ thể. Trong lập trình, thuật toán giúp tổ chức logic xử lý dữ liệu và tối ưu hóa hiệu suất chương trình.

### 2. Các loại thuật toán phổ biến
- **Thuật toán tìm kiếm:** Tìm kiếm tuyến tính, tìm kiếm nhị phân.
- **Thuật toán sắp xếp:** Sắp xếp nổi bọt, sắp xếp chèn, sắp xếp nhanh.
- **Thuật toán đệ quy:** Giải quyết bài toán bằng cách gọi lại chính nó với đầu vào nhỏ hơn.
- **Thuật toán đồ thị:** Dijkstra, BFS, DFS.
- **Thuật toán chia để trị:** Quicksort, Mergesort.

### 3. Ví dụ minh họa
#### a) Tìm kiếm nhị phân
Tìm kiếm nhị phân là một thuật toán tìm kiếm trên mảng đã sắp xếp, có độ phức tạp O(log n).
```c
#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1) printf("Phần tử được tìm thấy tại chỉ số %d", result);
    else printf("Phần tử không có trong mảng");
    return 0;
}
```

#### b) Sắp xếp chèn (Insertion Sort)
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

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
```

### 4. Kết luận
Thuật toán là nền tảng quan trọng trong lập trình và khoa học máy tính. Việc nắm vững các thuật toán cơ bản giúp lập trình viên xây dựng chương trình hiệu quả, tối ưu hơn. Trong tài liệu này, chúng ta đã giới thiệu một số thuật toán phổ biến và cung cấp các ví dụ minh họa để học viên dễ dàng tiếp cận.

