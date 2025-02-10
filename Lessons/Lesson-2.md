# **Bài 2. Cài đặt môi trường và viết chương trình đầu tiên**

## I: mục tiêu bài học

- Biết được cách cài đặt môi trường lập trình c
- Hiểu cách cấu hình NVda để tương thích với vs code
- Biết cách viết một chương trình c
- Biết cách biên dịch và chạy chươn trình c

## II: Nội dung bài học

### 1\. Cài đặt môi trường

### 1.1 Giới thiệu vs code

Visual Studio Code chính là ứng dụng cho phép biên tập, soạn thảo các đoạn code để hỗ trợ trong quá trình thực hiện xây dựng, thiết kế website một cách nhanh chóng. Visual Studio Code hay còn được viết tắt là VS Code. Trình soạn thảo này vận hành mượt mà trên các nền tảng như Windows, macOS, Linux. Hơn thế nữa, VS Code còn cho khả năng tương thích với những thiết bị máy tính có cấu hình tầm trung vẫn có thể sử dụng dễ dàng.

Visual Studio Code hỗ trợ đa dạng các chức năng Debug, đi kèm với Git, có Syntax Highlighting. Đặc biệt là tự hoàn thành mã thông minh, Snippets, và khả năng cải tiến mã nguồn. Nhờ tính năng tùy chỉnh, Visual Studio Code cũng cho phép các lập trình viên thay đổi Theme, phím tắt, và đa dạng các tùy chọn khác. Mặc dù trình soạn thảo Code này tương đối nhẹ, nhưng lại bao gồm các tính năng mạnh mẽ.

Dù mới được phát hành nhưng VSCode là một trong những Code Editor mạnh mẽ và phổ biến nhất dành cho lập trình viên. Nhờ hỗ trợ nhiều ngôn ngữ lập trình phổ biến, tích hợp đầy đủ các tính năng và khả năng mở rộng, nên VSCode trở nên cực kì thân thuộc với bất kì lập trình viên nào.

### 1.2 Cài đặt vs code

Đầu tiên bạn tải về vs code tại: <https://code.visualstudio.com/download>

Sau đó, bạn vào mục download tìm tới file vs code.exe rồi nhấn enter để chạy nó hoặc bạn có thể chạy nó dưới quyền admin bằng cách nhấn phím Application để mở menu rồi nhấn mũi tên xuống để chọn run administrator. Lúc này, màn hình cài đặt của vs code hiện ra, bạn nhấn phím tab và nhấn mũi tên lên tìm tới mục I accept the agreement để chấp nhận điều khoản của tác giả hoặc bạn có thể nhấn alt+a để chọn mục này. Tiếp đến, bạn nhấn tab tới nút next để chuyển sang bước tiếp theo hoặc bạn có thể nhấn alt+n để kích hoạt nó. Ở bước chọn nơi lưu chữ thì bạn để mặc định rồi nhấn tab tìm tới nút next rồi nhấn enter hoặc nhanh hơn thì nhấn alt+n.Ở các bước kế tiếp thì bạn cứ nhấn next thôi.

Ở bước tiếp theo bạn đánh dấu cho mình hai tùy chọn là Add "Open with Code" action to Windows Explorer file context menu và Add "Open with Code" action to Windows Explorer directory context menu. Khi đánh dấu song hai tùy chọn này thì bạn nhấn tab tới nút next rồi nhấn enter. Tiếp theo, bạn nhấn tab tới nút install rồi nhấn enter và ngồi chờ quá trình cài đặt đang thực hiện. Sau khi quá trình cài đặt vs code hoàn tất bạn nhấn tab tới nút finish rồi nhấn enter hoặc bạn có thể nhấn alt+f để kích hoạt nút này. Lưu ý: nếu bạn muốn chạy vs code luôn thì bạn có thể chọn Launch Visual Studio Code (Mặc định tùy chọn này được chọn, nếu bạn không thích thì có thể bỏ chọn). Vậy là quá trình cài đặt vs code hoàn tất rồi.

### 1.3 Cấu hình vs code để tương thích với trình đọc màn hình

Mặc định, vs code chưa thực sự tối ưu với trình đọc màn hình vì vậy, chúng ta cần phải thực hiện một vài bước nữa để thiết lập vs code sao cho thuận tiện với người dùng khiếm thị nhất có thể. Để thiết lập vs code thì bạn làm như sau:

Đầu tiên bạn mở vs code lên, sau đó nhấn alt+f để mở file menu. tiếp đến bạn nhấn p để tìm tới preferences, tiếp đến bạn nhấn enter để mở mục setting. Sau đó, bạn nhấn e để tìm tới ô nhập search setting (mặc định nó đã ở ô search setting). Tiếp đến, bạn nhập từ khóa screen. Sau khi nhập song, bạn nhấn tab khi bạn nghe thấy mục Settings tree view rồi nhấn mũi tên xuống đến khi bạn nghe thấy mục Editor Accessibility support rồi nhấn tab để nó hiện ra combo box. Lúc này, bạn nhấn alt+mũi tên lên để mở rộng nó rồi chọn on là song. Khi bạn kích hoạt nó thành công thì bạn nhấn ctrl+f4 để thoát khỏi hộp thoại cài đặt của vs code. Theo mình, để thuận tiện cho việc này thì bạn nên sử dụng tổ hợp phím ctrl+w để đóng nó.

Để nhận sự trợ giúp về accessibility bạn có thể sử dụng tổ hợp phím alt+f1.

Thế là chúng ta đã cấu hình song vs code rồi.

### 1.4. Tạo Cấu hình profile trong nvda và một vài tùy chỉnh để hỗ trợ vs code

Trong quá trình viết code và debug, bạn sẽ gặp một vài khó khăn khi kiểm soát bug khi sử dụng với trình đọc màn hình, dưới đây là cách tạo cấu hình profile trong nvda để nó có thể tương thích với vs code:

Trước hết, bạn mở vs code lên, tại cửa sổ vs code bạn nhấn tổ hợp phím Ctrl+NVda+P để mở hộp thoại Configuration Profiles.

Khi hộp thoại Configuration Profiles hiện ra, bạn nhấn tab tới New button rồi nhấn enter hoặc bạn có thể nhấn alt+n để kích hoạt mục này. Khi hộp thoại New Profile hiện ra, mục đầu tiên là profile name: bạn nhập là vs code, khi nhập song bạn nhấn tab khi nghe nvda đọc là Use this profile for thì bạn dừng lại. Lúc này, nó có ba tùy chọn, bạn chỉ cần nhấn mũi tên xuống để tìm đến tùy chọn thứ hai là Current application (code) rồi nhấn khoảng trắng để check vào mục này. Khi lựa chọn song, bạn nhấn tab tới nút ok rồi nhấn enter để đóng hộp thoại Configuration Profile.

Một vài tùy chỉnh để việc viết code và debug của các bạn được thuận lợi hơn:

- Nhấn nvda+2 để bật đọc ký tự khi gõ: Cách này rất phù hợp khi bạn muốn dạy lập trình cho một ai đó hoặc bạn gõ chưa quen với bàn phím.
- Nhấn NVDA+p để bật đọc dấu câu và ký hiệu: Cái này sẽ giúp bạn biết được các dấu ngoặc, chấm phảy trong quá trình debug.

Ngoài ra, còn một số thiết lập trong NVda nữa mà bạn cần quan tâm như:

- nhấn ctrl+NVDA+m để mở hộp thoại Mouse: Trong mục này, bạn đánh dấu cho mình tùy chọn Report mouse shape changes hoặc bạn có thể nhấn alt+s để đánh dấu nó. Tùy chọn này sẽ giúp bạn xác định vị trí con trỏ chuột. (dành cho những bạn còn nhìn kém)
- Nhấn ctrl+NVDA+d để mở hộp thoại Document Formatting: trong phần này, bạn đánh dấu cho mình các mục như sau:
- Colors: Mục này để xác định màu sắc khi sử dụng các a Tree View, những thuộc tính liên quan tới màu sắc (cái này rất phù hợp cho những bạn nhìn kém)
- Line numbers: khi chọn tùy chọn này thì nvda sẽ đọc số dòng, Nếu bạn có thể nhớ vị chí dòng thì không cần chọn vào mục này.
- Ở mục Line indentation reporting: bạn chọn speech
- Khi đánh dấu vào các mục trên thì bạn nhấn tab tới nút ok để đóng hộp thoại Document Formatting. 

Như vậy, bạn đã tùy chỉnh cấu hình nvda cho vs code thành công.

### 1.5 Cài đặt extension c/c++ cho vs code

Để cài đặt extension c/c++ cho vs code, bạn cần làm những bước như sau:

Đầu tiên, bạn khởi động vs code lên, ở màn hình Get Started bạn nhấn tổ hợp phím ctrl+shift+x để truy cập vào cửa hàng extension. mặc định, nó đang ở ô nhập search extension, bạn vui lòng tìm kiếm với từ khóa c. Sau khi thực hiện tìm kiếm, bạn nhấn tab và nó sẽ hiện ra danh sách các extension mà bạn muốn cài. Bạn chọn extension c/C++ của Microsoft để cài đặt (extension này nó ngay kết quả đầu tiên luôn). Sau khi bạn chọn đúng extension mà bạn muốn cài thì bạn nhấn phím tab đến nút install extension rồi nhấn phím enter để bắt đầu cài đặt. Việc cài đặt nó nhanh hay chậm là tùy thuộc vào chất lượng mạng internet của bạn nhé, thường thì việc cài đặt một extension là rất nhanh. Sau khi cài đặt extension thành công, bạn cần khởi động lại vs code để extension đó có thể hoạt động nhé. Như vậy, việc cài đặt extension đến đây là hoàn tất rồi. Tuy nhiên, để chúng ta có thể lập trình c được cần phải cài đặt trình biên dịch cho nó.

### 1.6 Cài đặt trình biên dịch c

Đầu tiên, để có trình biên dịch c, bạn cần cài đặt minGW bạn vui lòng tải MinGw tại link: <https://sourceforge.net/projects/mingw/> Sau khi tải về, bạn tìm tới thu mục download rồi tìm tới file mingw-get-setup.exe rồi nhấn enter để chạy nó hoặc bạn có thể chạy nó dưới quyền admin bằng cách nhấn phím Application. Sau đó, nhấn mũi tên xuống để chọn run administrator rồi nhấn enter để kích hoạt nó. Lúc này, màn hình cài đặt MinGw hiện ra, bạn nhấn tab đến nút install rồi nhấn enter để kích hoạt. Ở bước này, nó yêu cầu bạn chọn đường dẫn lưu chữ, theo mình để cho dễ nhớ thì bạn nên để mặc định để bước tiếp theo sẽ cần tới nó. Tiếp theo, bạn tab tới nút Continue rồi nhấn enter. Lúc này, bạn chỉ việc ngồi chờ nó tải giữ liệu thôi, sau khi nó tải song thì bạn nhấn tab tới Continue và chọn nó. Khi bạn nhấn enter vào Continue, nó sẽ hiện ra cửa sổ MinGW Installation Manager. Ở bước này, bạn cần lưu ý cho mình hai dòng mingw32-base và mingw32-gcc-g++ vì đây là hai gói quan trọng để có thể biên dịch được ngôn ngữ c. Để làm được điều này, bạn nhấn tổ hợp phím shift+NVDA+mũi tên phải tìm tới list. Sau đó, bạn nhấn shift+NVda+mũi tên xuống để mở danh sách ra, để di chuyển giữa các gói bạn nhấn shift+NVDa+Mũi tên trái hoặc phải, để kích hoạt nó bạn nhấn nvda+enter. Khi chọn vào từng dòng thì nó sẽ hiện ra Package subMenu. Lúc này, bạn chọn Mark for Installation. Khi bạn chọn song hai dòng trên, bạn nhấn alt+i để mở Installation subMenu rồi nhấn mũi tên lên chọn Changes. Lúc này, bạn nhấn tab tới nút ok rồi nhấn enter và ngồi chờ quá trình cài đặt. Sau khi quá trình cài đặt hoàn tất, bạn nhấn tab đến nút Close rồi nhấn phím enter để kích hoạt. Lúc này, nó sẽ quay trở lại cửa sổ MinGW Installation Manager các bạn nhấn tổ hợp phím alt+f4 để thoát ra khỏi MinGW Installation Manager. bây giờ, quá trình cài đặt MinGW thành công nhưng để có thể biên dịch được c thì chúng ta cần làm thêm một bước quan trọng nữa đó là thiết lập biến môi trường cho MinGW. Để thiết lập biến môi trường cho MinGW, bạn cần làm như sau:

Ở màn hình desktop, bạn tìm tới This PC rồi nhấn phím applications để mở Context menu, nhấn mũi tên lên chọn Properties rồi nhấn enter. Cửa sổ Windows Settings hiện ra, bạn nhấn tab tới mục Advanced system settings. Tiếp đến, trong Advanced system settings bạn nhấn tab tới nút Environment Variables rồi nhấn enter để kích hoạt. Lúc này, hộp thoại Environment Variables hiện ra, bạn nhấn phím tab tới mục System variables. Trong mục này, bạn chỉ cần nhấn mũi tên xuống tới dòng Path rồi tab tới nút edit rồi nhấn enter để kích hoạt. Khi đó, hộp thoại Edit environment variable xuất hiện, bạn tab tới nút new rồi enter. Lúc này, nó sẽ hiện ra một ô nhập yêu cầu chúng ta nhập biến môi trường cho nó. Bây giờ, bạn chỉ cần Tìm đường dẫn chứa thu mục bin của compile copy, paste vào rồi nhấn tab đến nút OK rồi enter để kích hoạt.

Đường dẫn mặc định là: C:\\MinGW\\bin

Khi thiết lập song, bạn cứ chọn tới nút ok để đóng lại.

Sau khi thiết lập biến môi trường thành công, Để kiểm tra đã cài Path thành công hay chưa bạn mở Command Prompt (cmd) và gõ:

g++ --version nếu bạn nghe thấy thông tin phiên bản của g++ và các thông tin khác thì tức là bạn đã thành công thiết lập môi trường còn không thì bạn nên xem lại nhé.

### 2 Viết chương trình đầu tiên

### 2.1. Viết chương trình Hello World

Đầu tiên, ở màn hình desktop bạn mở vs code ra, nhấn ctrl+n để tạo một file mới, sau đó gõ đoạn code sau:

```bash
# include &lt;stio.h&gt;

int main()

{

/\* Day la chuong trinh C dau tien \*/

&nbsp;printf("Hello World");

return 0;

}
```

Sau khi gõ song đoạn code, bạn nhấn ctrl+s để lưu lại với tên file là hello world.c trong thu mục nào cũng được, miễn là bạn dễ nhớ. Ở đây, mình sẽ lưu vào ổ C.

### 2.2. Biên dịch và chạy chương trình

Chúng ta bắt đầu biên dịch chương trình đầu tiên, hãy chắc chắn là bạn đã gõ những dòng lệnh ở phần 2.1 và lưu file tại thư mục ổ C có tên là helloworld.c

lưu ý nên đặt tên file không có dấu cách, thư mục chứa file cũng được đặt tên không có dấu cách, đuôi mở rộng là .c

Chúng ta bắt đầu: trước tiên chúng ta mở giao diện dòng lệnh cmd của window và di chuyển tới thư mục bạn lưu file lập trình ở bước trên.

Phím tắt như sau:

nhấp tổ hợp hai phím window + r : để mở cửa sổ Run của window

gõ cmd sau đó gõ phím Enter để mở giao diện dòng lệnh trên window

giao diện dòng lệnh mở ra, bạn gõ lệnh cd / enter lệnh này giúp bạn di chuyển ra ngoài cùng của thư mục gốc, ở đây là bạn đang ở ổ C

Như vậy là bạn đang đứng ở ổ C rồi, nếu bạn lưu file ở thư mục nào chúng ta tiếp tục di chuyển vào thư mục đó với câu lệnh : cd + Tên thư mục cần chuyển đến + Enter

Ví dụ bạn lưu ở thư mục có tên là thuc_hanh trong ổ C thì bạn di chuyển vào thư mục này bằng câu lệnh: cd thuc_hanh Enter

Kỹ năng di chuyển giữa các thư mục trong cmd là quan trọng, giống như bạn đi ra đi vào trong các căn phòng trong ổ C, bạn muốn sang phòng nào thì phải biết địa chỉ đường dẫn của phòng đó, cần phải luyện tập điều này thật thành thạo.

Bây giờ bạn đã ở thư mục chứa mã nguồn rồi chúng ta sẽ biên dịch file bạn vừa code thành mã máy để chạy chương trình,

rất đơn giản, bạn gõ lệnh g++ helloworld.c

Không có bất kỳ báo lỗi nào thì chúc mừng bạn, file bạn tạo ra không có một lỗi nào

với dòng lệnh trên một file chạy được đã được tạo ra ở ngay chính thư mục bạn đang đứng, có tên mặc định là a.exe

để chạy file này bạn chỉ cần gõ lệnh a enter

trong cmd sẽ xuất hiện dòng chữ Hello World , đây là dòng chữ của dòng lệnh printf("Hello World").

Nếu trường hợp có lỗi gì đó, chúng ta cần nghe rõ lỗi xuất hiện là gì

Có thể là thiếu dấu nào đó như dấu ;

hoặc có thư mục bạn đang đứng chưa chính xác, đây là lỗi "No such file or directory"

Mẹo nhỏ giúp bạn đặt tên cho file chạy khi biên dịch gõ lệnh: g++ helloworld.c -o file_name enter

-o là viết tắt của output
- file_name: là tên của file chạy sau khi biên dịch,

trường hợp này là chúng ta đặt tên cho file chạy của chúng ta một cái tên, nếu không thì trình biên dịch sẽ dịch ra một file có tên là a.exe như đã nói ở trên.

VÍ dụ: bạn có thể gõ câu lệnh như sau để biên dịch chương trình: g++ helloworld.c -o helloworld.exe

Lưu ý nhỏ: g++ là trình biên dịch ngôn ngữ lập trình C++ bao hàm cả ngôn ngữ C nên bạn code ngôn ngữ C có thể dùng trình biên dịch g++ để biên dịch và chạy, chiều ngược lại bạn không nên biên dịch file code ngôn ngữ C++ hướng đối tượng bằng trình biên dịch gcc.

ngoài ra bạn cũng có thể dùng trình biên dịch gcc để chạy chương trình đầu tiên ở trên, y hệt như hướng dẫn, chỉ thay thế lệnh g++ bằng gcc mà thôi

ví dụ:

gcc helloworld enter
```

hoặc
``bash
gcc helloworld -o file_chay enter
```

điểm khác biệt khi dùng gcc là code bạn viết hoàn toàn theo cú pháp của ngôn ngữ C, ví dụ hàm main của C bạn có thể không return giá trị gì, gcc vẫn dịch và không báo lỗi

tuy nhiên với g++ thì bắt buộc hàm main phải return một giá trị nào đó.

Bạn không phải lo lắng vì khác biệt nhỏ này vì trình biên dịch sẽ có câu trả lời chúng ta cần phải làm gì nếu có lỗi gì đó xẩy ra.

Chúc mừng bạn đã biên dịch và chạy chương trình đầu tiên thành công.