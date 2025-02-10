# **bài 1. Giới thiệu trung về ngôn ngữ lập trình c**

## I: Mục tiêu bài học

\- Sau khi các bạn hoàn thành bài học này nội dung các bạn cần lắm được:

- Lắm được các quy tắc trong c
- Hiểu thêm về quá trình phát triển của c
- Hiểu được các khái niệm cơ bản trong c

## II: Tìm hiểu về ngôn ngữ lập trình C

### 1\. Giới thiệu

C là ngôn ngữ lập trình cấp cao, được sử dụng rất phổ biến để lập trình hệ thống cùng với Assembler và phát triển các ứng dụng.

Vào những năm cuối thập kỷ 60 đầu thập kỷ 70 của thế kỷ XX, Dennish Ritchie (làm việc tại phòng thí nghiệm Bell) đã phát triển ngôn ngữ lập trình C dựa trên ngôn ngữ BCPL (do Martin Richards đưa ra vào năm 1967) và ngôn ngữ B (do Ken Thompson phát triển từ ngôn ngữ BCPL vào năm 1970 khi viết hệ điều hành UNIX đầu tiên trên máy PDP-7) và được cài đặt lần đầu tiên trên hệ điều hành UNIX của máy DEC PDP-11.

Năm 1978, Dennish Ritchie và B.W Kernighan đã cho xuất bản quyển “Ngôn ngữ lập trình C” và được phổ biến rộng rãi đến nay.

Lúc ban đầu, C được thiết kế nhằm lập trình trong môi trường của hệ điều hành Unix nhằm mục đích hỗ trợ cho các công việc lập trình phức tạp. Nhưng về sau, với những nhu cầu phát triển ngày một tăng của công việc lập trình, C đã vượt qua khuôn khổ của phòng thí nghiệm Bell và nhanh chóng hội nhập vào thế giới lập trình để rồi các công ty lập trình sử dụng một cách rộng rãi. Sau đó, các công ty sản xuất phần mềm lần lượt đưa ra các phiên bản hỗ trợ cho việc lập trình bằng ngôn ngữ C và chuẩn ANSI C cũng được khai sinh từ đó.

Ngôn ngữ lập trình C là một ngôn ngữ lập trình hệ thống rất mạnh và rất “mềm dẻo”, có một thư viện gồm rất nhiều các hàm (function) đã được tạo sẵn. Người lập trình có thể tận dụng các hàm này để giải quyết các bài toán mà không cần phải tạo mới. Hơn thế nữa, ngôn ngữ C hỗ trợ rất nhiều phép toán nên phù hợp cho việc giải quyết các bài toán kỹ thuật có nhiều công thức phức tạp. Ngoài ra, C cũng cho phép người lập trình tự định nghĩa thêm các kiểu dữ liệu trừu tượng khác. Tuy nhiên, điều mà người mới vừa học lập trình C thường gặp “rắc rối” là “hơi khó hiểu” do sự “mềm dẻo” của C. Dù vậy, C được phổ biến khá rộng rãi và đã trở thành một công cụ lập trình khá mạnh, được sử dụng như là một ngôn ngữ lập trình chủ yếu trong việc xây dựng những phần mềm hiện nay.

### 2\. Đặc điểm

Ngôn ngữ C có những đặc điểm cơ bản sau:

1. Tính cô đọng (compact): C chỉ có 32 từ khóa chuẩn và 40 toán tử chuẩn, nhưng hầu hết đều được biểu diễn bằng những chuỗi ký tự ngắn gọn
2. Tính cấu trúc (structured): C có một tập hợp những chỉ thị của lập trình như cấu trúc lựa chọn, lặp… Từ đó các chương trình viết bằng C được tổ chức rõ ràng, dễ hiểu
3. Tính tương thích (compatible): C có bộ tiền xử lý và một thư viện chuẩn vô cùng phong phú nên khi chuyển từ máy tính này sang máy tính khác các chương trình viết bằng C vẫn hoàn toàn tương thích
4. Tính linh động (flexible): C là một ngôn ngữ rất uyển chuyển và cú pháp, chấp nhận nhiều cách thể hiện, có thể thu gọn kích thước của các mã lệnh làm chương trình chạy nhanh hơn
5. Biên dịch (compile): C cho phép biên dịch nhiều tập tin chương trình riêng rẽ thành các tập tin đối tượng (object) và liên kết (link) các đối tượng đó lại với nhau thành một chương trình có thể thực thi được (executable) thống nhất

### 3\. Cấu trúc một chương trình C

Một chương trình C bao gồm những phần sau đây:

1. Các lệnh tiền xử lý
2. Các hàm
3. Các biến
4. Các lệnh và biểu thức
5. Các comment

Ví dụ:

```bash
# include

int main()

{

/\* Day la chuong trinh C dau tien \*/

printf("Hello, World! \\n");

return 0;

}
```

Đoạn code trên ta có thể giải thích như sau:

1. Dòng đầu tiên của chương trình #include &lt;stdio.h&gt; là lệnh tiền xử lý, nhắc nhở bộ biên dịch C thêm tệp stdio.h trước khi biên dịch.
2. Dòng tiếp theo int main() là hàm main, nơi chương trình bắt đầu.
3. Dòng tiếp theo /\*...\*/ là dòng comment được bỏ qua bởi bộ biên dịch compiler và được dùng để thêm các chú thích cho chương trình. Đây được gọi là phần comment của chương trình.
4. Dòng tiếp theo printf(...) là một hàm chức năng khác của ngôn ngữ C , in ra thông điệp "Hello, World!" hiển thị trên màn hình.
5. Dòng tiếp theo return 0; kết thúc hàm chính và trả về giá trị 0.

Ví dụ này bạn có thể xem lại trong thu mục example.

### 4\. Ưu và nhược điểm của ngôn ngữ C

## a. Ưu điểm:

1. Ngôn ngữ lập trình C là một ngôn ngữ mạnh, mềm dẻo và có thể truy nhập vào hệ thống, nên thường được sử dụng để viết hệ điều hành, các trình điều khiển thiết bị, đồ họa, có thể xây dựng các phân mềm ngôn ngữ khác , …
2. Ngôn ngữ lập trình C có cấu trúc module, từ đó ta có thể phân hoạch hay chia nhỏ chương trình để tăng tính hiệu quả, rõ ràng, dễ kiểm tra trong chương trình.

## B. Nhược điểm:

1. Một số kí hiệu của ngôn ngữ lập trìnhC có nhiều ý nghĩa khác nhau. Ví dụ toán tử \* là toán tử nhân, cũng là toán tử thay thế, hoặc dùng khai báo con trỏ. Việc sử dụng đúng ý nghĩa của các toán tử phụ thuộc vào ngữ cảnh sử dụng.
2. Vì C là một ngôn ngữ mềm dẻo, đó là do việc truy nhập tự do vào dữ liệu, trộn lẫn các dữ liệu, …Từ đó, dẫn đến sự lạm dụng và sự bất ổn của chương trình.

Như vậy, thông qua bài học này, mình đã giới thiệu đến các bạn những thông tin, kiến thức cơ bản về ngôn ngữ lập trình C. Sang bài tiếp theo, chúng ta sẽ tìm hiểu cách cài đặt môi trường lập trình C.