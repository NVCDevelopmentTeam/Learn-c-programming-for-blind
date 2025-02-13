# **Bài tập 9: Chuỗi**

## I: Mục tiêu
- Hiểu cách làm việc với chuỗi trong ngôn ngữ lập trình C.
- Biết cách thao tác với các hàm xử lý chuỗi như nhập, xuất, sao chép, nối chuỗi.
- Áp dụng chuỗi vào các bài toán thực tế.

## II: Bài tập mẫu

### Đề bài
Viết chương trình nhập vào một chuỗi ký tự từ bàn phím, sau đó hiển thị độ dài của chuỗi và in chuỗi dưới dạng đảo ngược.

### Hướng dẫn
1. Sử dụng mảng ký tự để lưu trữ chuỗi.
2. Dùng `strlen()` để tính độ dài chuỗi.
3. Dùng vòng lặp để in chuỗi theo thứ tự đảo ngược.

### Ví dụ minh họa
#### Đầu vào
```
Nhập chuỗi: OpenAI
```
#### Đầu ra
```
Độ dài chuỗi: 6
Chuỗi đảo ngược: IAnepO
```

## III: Bài tập thực hành

### Bài 1: Kiểm tra đối xứng
**Đề bài:** Viết chương trình kiểm tra xem một chuỗi nhập vào có đối xứng không (ví dụ: "madam", "radar").

**Gợi ý:**
- Sử dụng vòng lặp so sánh ký tự đầu với ký tự cuối dần dần.

### Bài 2: Đếm số từ trong chuỗi
**Đề bài:** Viết chương trình nhập một chuỗi và đếm xem có bao nhiêu từ trong chuỗi.

**Gợi ý:**
- Từ được xác định bởi dấu cách.
- Dùng vòng lặp kiểm tra khoảng trắng giữa các từ.

### Bài 3: Tìm kiếm và thay thế
**Đề bài:** Viết chương trình tìm kiếm một từ trong chuỗi và thay thế bằng một từ khác.

**Gợi ý:**
- Sử dụng hàm chuỗi như `strstr()` để tìm vị trí của từ cần thay thế.
- Sao chép phần chuỗi trước và sau để tạo chuỗi mới.
