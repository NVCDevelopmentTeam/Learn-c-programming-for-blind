# **Bài 3. Biến và Kiểu dữ liệu trong C**

## I: Mục tiêu bài học

Kết thúc bài học này, bạn có thể:

- Hiểu và sử dụng được biến (variables)
- Phân biệt sự khác nhau giữa biến và hằng (constants)
- Nắm vững và sử dụng các kiểu dữ liệu khác nhau trong chương trình C
- Hiểu và sử dụng các toán tử số học.

## II: Nội dung bài học

### 1\. Giới thiệu

Bất cứ chương trình ứng dụng nào cần xử lý dữ liệu cũng cần có nơi để lưu trữ tạm thời dữ liệu ấy. Nơi mà dữ liệu được lưu trữ gọi là bộ nhớ. Những vị trí khác nhau trong bộ nhớ có thể được xác định bởi các địa chỉ duy nhất. Những ngôn ngữ lập trình trước đây yêu cầu lập trình viên quản lý mỗi vị trí ô nhớ thông qua địa chỉ, cũng như giá trị lưu trong nó. Các lập trình viên dùng những địa chỉ này để truy cập hoặc thay đổi nội dung của các ô nhớ. Khi ngôn ngữ lập trình phát triển, việc truy cập hay thay đổi giá trị ô nhớ đã được đơn giản hoá nhờ sự ra đời của khái niệm biến .

### 2\. Các khái niệm

### 2.1 Biến (variable)

Một chương trình ứng dụng có thể quản lý nhiều loại dữ liệu. Trong trường hợp này, chương trình phải chỉ định bộ nhớ cho mỗi đơn vị dữ liệu. Khi chỉ định bộ nhớ, có hai điểm cần lưu ý như sau :

1\. Bao nhiêu bộ nhớ sẽ được gán
2\. Mỗi đơn vị dữ liệu được lưu trữ ở đâu trong bộ nhớ.

Trước đây, các lập trình viên phải viết chương trình theo ngôn ngữ máy gồm các mã 1 và 0. Nếu muốn lưu trữ một giá trị tạm thời, vị trí chính xác nơi mà dữ liệu được lưu trữ trong bộ nhớ máy tính phải được chỉ định. Vị trí này là một con số cụ thể, gọi là địa chỉ bộ nhớ.

Các ngôn ngữ lập trình hiện đại cho phép chúng ta sử dụng các tên tượng trưng gọi là biến (variable), chỉ đến một vùng bộ nhớ nơi mà các giá trị cụ thể được lưu trữ.

Kiểu dữ liệu quyết định tổng số bộ nhớ được chỉ định. Những tên được gán cho biến giúp chúng ta sử dụng lại dữ liệu khi cần đến.

Chúng ta đã quen với cách sử dụng các ký tự đại diện trong một công thức. Ví dụ, diện tích hình chữ nhật được tính bởi :

Diện tích = A = chiều dài x chiều rộng = L x B

Cách tính lãi suất đơn giản được cho như sau:

Tiền lãi = I = Số tiền ban đầu x Thời gian x Tỷ lệ/100 = P x T x R /100

Các ký tự A, L, B, I, P, T, R là các biến và là các ký tự viết tắt đại diện cho các giá trị khác nhau.

Xem ví dụ sau đây :

Tính tổng điểm cho 5 sinh viên và hiển thị kết quả. Việc tính tổng được thực hiện theo hướng dẫn sau.

Hiển thị giá trị tổng của 24, 56, 72, 36 và 82

Khi giá trị tổng được hiển thị, giá trị này không còn được lưu trong bộ nhớ máy tính. Giả sử, nếu chúng ta muốn tính điểm trung bình, thì giá trị tổng đó phải được tính một lần nữa.

Tốt hơn là chúng ta sẽ lưu kết quả vào bộ nhớ máy tính, và sẽ lấy lại nó khi cần đến.

``bash
sum = 24 + 56 + 72 + 36 + 82
```

Ở đây, sum là biến được dùng để chứa tổng của 5 số. Khi cần tính điểm trung bình, có thể thực hiện như sau:

```bash
Avg = sum / 5
```

Trong C, tất cả biến cần phải được khai báo trước khi dùng chúng.

Chúng ta hãy xét ví dụ nhập hai số và hiển thị tổng của chúng trong ví dụ 1.

Ví dụ 1:

```bash
BEGIN

DISPLAY ‘Enter 2 numbers’

INPUT A, B

C = A + B

DISPLAY C

END
```

A, B và C trong đoạn mã trên là các biến. Tên biến giúp chúng ta tránh phải nhớ địa chỉ của vị trí bộ nhớ. Khi đoạn mã được viết và thực thi, hệ điều hành đảm nhiệm việc cấp không gian nhớ còn trống cho những biến này. Hệ điều hành ánh xạ một tên biến đến một vị trí xác định trong bộ nhớ (ô nhớ). Và để tham chiếu tới một giá trị riêng biệt trong bộ nhớ, chúng ta chỉ cần chỉ ra tên của biến. Trong ví dụ trên, giá trị của hai biến được nhập từ người dùng và chúng được lưu trữ nơi nào đó trong bộ nhớ. Những vị trí này có thể được truy cập thông qua các tên biến A và B. Trong bước kế tiếp, giá trị của hai biến được cộng và kết quả được lưu trong biến thứ 3 là biến C. Cuối cùng, giá trị biến C được hiển thị.

Hệ điều hành hoạt động như một giao diện giữa các ô nhớ và lập trình viên. Lập trình viên không cần lưu tâm về vị trí ô nhớ mà để cho hệ điều hành đảm nhiệm. Vậy việc điều khiển bộ nhớ (vị trí mà dữ liệu thích hợp lưu trữ) sẽ do hệ điều hành đảm trách, chứ không phải lập trình viên.

### 2.2 Hằng (constant)

Trong trường hợp ta dùng biến, giá trị được lưu sẽ thay đổi. Một biến tồn tại từ lúc khai báo đến khi thoát khỏi phạm vi dùng nó. Những câu lệnh trong phạm vi khối mã này có thể truy cập giá trị của biến, và thậm chí có thể thay đổi giá trị của biến. Trong thực tế, đôi khi cần sử dụng một vài khoản mục mà giá trị của chúng không bao giờ bị thay đổi.

Một hằng là một giá trị không bao giờ bị thay đổi. Ví dụ, 5 là một hằng, mà giá trị toán học luôn là 5 và không thể bị thay đổi bởi bất cứ ai. Tương tự, ‘Black’ là một hằng, nó biểu thị cho màu đen. Khi đó, 5 được gọi là hằng số (numeric constant), ‘Black’ được gọi là hằng chuỗi (string constant).

### 2.3 Định danh (Identifier)

Tên của các biến (variables), các hàm (functions), các nhãn (labels) và các đối tượng khác nhau do người dùng định nghĩa gọi là định danh. Những định danh này có thể chứa một hay nhiều ký tự. Ký tự đầu tiên của định danh phải là một chữ cái hay một dấu gạch dưới ( _ ). Các ký tự tiếp theo có thể là các chữ cái, các con số hay dấu gạch dưới.

```bash
Arena, s_count, marks40, và class_one là những định danh đúng. Các ví dụ về các định danh sai là 1sttest, oh!god, và start… end.
```

Các định danh có thể có chiều dài tuỳ ý, nhưng số ký tự trong một biến được nhận diện bởi trình biên dịch thì thay đổi theo trình biên dịch. Ví dụ, nếu một trình biên dịch nhận diện 31 con số có ý nghĩa đầu tiên cho một tên định danh thì các câu sau sẽ hiển thị cùng một kết quả:

- Đây là biến testing…. testing
- Đây là biến testing…. testing … testing

Các định danh trong C có phân biệt chữ hoa và chữ thường, cụ thể, arena thì khác ARENA.

### 2.3.1 Các nguyên tắc cho việc chỉ đặt tên

Các quy tắc đặt tên biến khác nhau tuỳ ngôn ngữ lập trình. Tuy nhiên, vài quy ước chuẩn được tuân theo như :

- Tên biến phải bắt đầu bằng một ký tự chữ cái.
- Các ký tự theo sau ký tự đầu bằng một chuỗi các chữ cái hoặc con số và cũng có thể bao gồm ký tự đặc biệt như dấu gạch dưới.
- Tránh dùng ký tự O tại những vị trí mà có thể gây lầm lẫn với số không (0) và tương tự chữ cái l (chữ thường của chữ hoa L) có thể nhầm lẫn với số 1.
- Tên riêng nên tránh đặt tên cho biến.
- Theo tiêu chuẩn C các chữ cái thường và hoa thì xem như khác nhau ví dụ. biến ADD, add và Add là khác nhau.
- Việc phân biệt chữ hoa và chữ thường khác nhau tùy theo ngôn ngữ lập trình. Do đó, tốt nhất nên đặt tên cho biến theo cách thức chuẩn.
- Tên một biến nên có ý nghĩa, gợi tả và mô tả rõ kiểu dữ liệu của nó. Ví dụ, nếu tìm tổng của hai số thì tên biến lưu trữ tổng nên đặt là sum (tổng). Nếu đặt tên là s hay ab12 thì không hay lắm.

### 2.3.2 Từ khóa (Keywords)

Tất cả các ngôn ngữ dành một số từ nhất định cho mục đích riêng. Những từ này có một ý nghĩa đặc biệt trong ngữ cảnh của từng ngôn ngữ, và được xem là “từ khóa”. Khi đặt tên cho các biến, chúng ta cần bảo đảm rằng không dùng bất cứ từ khóa nào làm tên biến.

Tên kiểu dữ liệu tất cả được coi là từ khóa.

Do vậy, đặt tên cho một biến là int sẽ phát sinh một lỗi, nhưng đặt tên cho biến là integer thì không.

Vài ngôn ngữ lập trình yêu cầu lập trình viên chỉ ra tên của các biến cũng như kiểu dữ liệu của nó trước khi dùng biến đó thật sự. Bước này được gọi là khai báo biến. Ta sẽ nói rõ bước này trong phần tiếp theo khi thảo luận về các kiểu dữ liệu. Điều quan trọng cần nhớ bây giờ là bước này giúp hệ điều hành thật sự cấp phát một khoảng không gian vùng nhớ cho biến trước khi bắt đầu sử dụng nó.

### 2.4 Các kiểu dữ liệu (Data types)

Các loại dữ liệu khác nhau được lưu trữ trong biến là :

- Số (Numbers)
- Các số nguyên
Ví dụ : 10 hay 178993455.
- Các số thực
Ví dụ : 15.22 hay 15463452.25.
- Các số nguyên dương
- Các số âm
- Kiểu chuỗi
Ví dụ : John.
- Kiểu giá trị logic
Ví dụ : Y hay N.

Khi dữ liệu được lưu trữ trong các biến có kiểu dữ liệu khác nhau, nó yêu cầu dung lượng bộ nhớ sẽ khác nhau.

Dung lượng bộ nhớ được chỉ định cho một biến tùy thuộc vào kiểu dữ liệu của nó.

Để chỉ định bộ nhớ cho một đơn vị dữ liệu, chúng ta phải khai báo một biến với một kiểu dữ liệu cụ thể.

Khai báo một biến có nghĩa là một vùng nhớ nào đó đã được gán cho biến. Vùng bộ nhớ đó sau này sẽ được tham chiếu thông qua tên của biến. Dung lượng bộ nhớ được cấp cho biến bởi hệ điều hành phụ thuộc vào kiểu dữ liệu được lưu trữ trong biến. Vì vậy, một kiểu dữ liệu sẽ mô tả loại dữ liệu phù hợp với biến.

Dạng thức chung cho việc khai báo một biến:

-Kiểu dữ liệu (Tên biến)
-Kiểu dữ liệu thường được dùng trong các công cụ lập trình có thể được phân chia thành:
- Kiểu dữ liệu số – lưu trữ giá trị số.
- Kiểu dữ liệu ký tự – lưu trữ thông tin mô tả

Những kiểu dữ liệu này có thể có tên khác nhau trong các ngôn ngữ lập trình khác nhau. Ví dụ, một kiểu dữ liệu số được gọi trong C là int trong khi đó tại Visual Basic được gọi là integer. Tương tự, một kiểu dữ liệu ký tự được đặt tên là char trong C trong khi đó trong Visual Basic nó được đặt tên là string. Trong bất cứ trường hợp nào, các dữ liệu được lưu trữ luôn giống nhau. Điểm khác duy nhất là các biến được dùng trong một công cụ phải được khai báo theo tên của kiểu dữ liệu được hỗ trợ bởi chính công cụ đó.

C có 5 kiểu dữ liệu cơ bản. Tất cả những kiểu dữ liệu khác dựa vào một trong số những kiểu này. 5 kiểu dữ liệu đó là:

- int là một số nguyên, về cơ bản nó biểu thị kích cỡ tự nhiên của các số nguyên (integers).
- float và double được dùng cho các số có dấu chấm động. Kiểu float (số thực) chiếm 4 byte và có thể có tới 6 con số phần sau dấu thập phân, trong khi double chiếm 8 bytes và có thể có tới 10 con số phần thập phân.
- char chiếm 1 byte và có khả năng lưu một ký tự đơn (character).
- void được dùng điển hình để khai báo một hàm không trả về giá trị. Điều này sẽ được nói rõ hơn trong phần hàm.

Dung lượng nhớ và phạm vi giá trị của những kiểu này thay đổi theo mỗi loại bộ xử lý và việc cài đặt các trình biên dịch C khác nhau.

Lưu ý: Các con số dấu chấm động được dùng để biểu thị các giá trị cần có độ chính xác ở phần thập phân.

- Kiểu dữ liệu int
Là kiểu dữ liệu lưu trữ dữ liệu số và là một trong những kiểu dữ liệu cơ bản trong bất cứ ngôn ngữ lập trình nào. Nó bao gồm một chuỗi của một hay nhiều con số.
Ví dụ trong C, để lưu trữ một giá trị số nguyên trong một biến tên là ‘num’, ta khai báo như sau:

```bash
int num;
```

Biến num không thể lưu trữ bất cứ kiểu dữ liệu nào như “Alan” hay “abc”. Kiểu dữ liệu số này cho phép các số nguyên trong phạm vi -32768 tới 32767 được lưu trữ. Hệ điều hành cấp phát 16 bit (2 byte) cho một biến đã được khai báo kiếu int. Ví dụ: 12322, 0, -232.

Nếu chúng ta gán giá trị 12322 cho num thì biến này là biến kiểu số nguyên và 12322 là hằng số nguyên.
- Kiểu dữ liệu số thực (float)

Một biến có kiểu dữ liệu số thực được dùng để lưu trữ các giá trị chứa phần thập phân. Trình biên dịch phân biệt các kiểu dữ liệu float và int.

Điểm khác nhau chính của chúng là kiểu dữ liệu int chỉ bao gồm các số nguyên, trong khi kiểu dữ liệu float có thể lưu giữ thêm cả các phân số.

Ví dụ, trong C, để lưu trữ một giá trị float trong một biến tên gọi là ‘num’, việc khai báo sẽ như sau :

```bash
float num;
```

Biến đã khai báo là kiểu dữ liệu float có thể lưu giá trị thập phân có độ chính xác tới 6 con số. Biến này được cấp phát 32 bit (4 byte) của bộ nhớ. Ví dụ: 23.05, 56.5, 32.

Nếu chúng ta gán giá trị 23.5 cho num, thì biến num là biến số thực và 23.5 là một hằng số thực.
- Kiểu dữ liệu double

Kiểu dữ liệu double được dùng khi giá trị được lưu trữ vượt quá giới hạn về dung lượng của kiểu dữ liệu float. Biến có kiểu dữ liệu là double có thể lưu trữ nhiều hơn khoảng hai lần số các chữ số của kiểu float.

Số các chữ số chính xác mà kiểu dữ liệu float hoặc double có thể lưu trữ tùy thuộc vào hệ điều hành cụ thể của máy tính.

Các con số được lưu trữ trong kiểu dữ liệu float hay double được xem như nhau trong hệ thống tính toán. Tuy nhiên, sử dụng kiểu dữ liệu float tiết kiệm bộ nhớ một nửa so với kiểu dữ liệu double.

Kiểu dữ liệu double cho phép độ chính xác cao hơn (tới 10 con số). Một biến khai báo kiểu dữ liệu double chiếm 64 bit (8 byte) trong bộ nhớ.

Ví dụ trong C, để lưu trữ một giá trị double cho một biến tên ‘num’, khai báo sẽ như sau:
```bash
double num;
```

Nếu chúng ta gán giá trị 23.34232324 cho num, thì biến num là biến kiểu double và 23.34232324 là một hằng kiểu double.
- Kiểu dữ liệu char

Kiểu dữ liệu char được dùng để lưu trữ một ký tự đơn.

Một kiểu dữ liệu char có thể lưu một ký tự đơn được bao đóng trong hai dấu nháy đơn (‘’). Thí dụ kiểu dữ liệu char như:  ‘a’, ‘m’, ‘$’ ‘%’.

Ta có thể lưu trữ những chữ số như­ những ký tự bằng cách bao chúng bên trong cặp dấu nháy đơn. Không nên nhầm lẫn chúng với những giá trị số. Ví dụ, ‘1’, ‘5’ và ‘9’ sẽ không được nhầm lẫn với những số 1, 5 và 9.

Xem xét những câu lệnh của mã C dưới đây:

```bash
char gender;

gender=’M’;
```

Hàng đầu tiên khai báo biến gender của kiểu dữ liệu char. Hàng thứ hai lưu giữ một giá trị khởi tạo cho nó là ‘M’. Biến gender là một biến ký tự và ‘M’ là một hằng ký tự. Biến này được cấp phát 8 bit (1 byte) trong bộ nhớ.
- Kiểu dữ liệu void

C có một kiểu dữ liệu đặc biệt gọi là void. Kiểu dữ liệu này chỉ cho trình biên dịch C biết rằng không có dữ liệu của bất cứ kiểu nào. Trong C, các hàm số thường trả về dữ liệu thuộc một kiểu nào đó. Tuy nhiên, khi một hàm không có gì để trả về, kiểu dữ liệu void được sử dụng để chỉ ra điều này.

### 2.4.1 Những kiểu dữ liệu cơ bản và dẫn xuất

Bốn kiểu dữ liệu (char, int, float và double) mà chúng ta đã thảo luận ở trên được sử dụng cho việc trình bày dữ liệu thực sự trong bộ nhớ của máy tính. Những kiểu dữ liệu này có thể được sửa đổi sao cho phù hợp với những tình huống khác nhau một cách chính xác. Kết quả, chúng ta có được các kiểu dữ liệu dẫn xuất từ những kiểu cơ bản này.

Một bổ từ (modifier) được sử dụng để thay đổi kiểu dữ liệu cơ bản nhằm phù hợp với các tình huống đa dạng. Ngoại trừ kiểu void, tất cả các kiểu dữ liệu khác có thể cho phép những bổ từ đứng trước chúng. Bổ từ được sử dụng với C là signed, unsigned, long và short. Tất cả chúng có thể được áp dụng cho dữ liệu kiểu ký tự và kiểu số nguyên. Bổ từ long cũng có thể được áp dụng cho double.

Một vài bổ từ như :

1\. unsigned
2\. long
3\. short

Ðể khai báo một biến kiểu dẫn xuất, chúng ta cần đặt trư­ớc khai báo biến thông thư­ờng một trong những từ khóa của bổ từ. Một giải thích chi tiết về các bổ từ này và cách thức sử dụng chúng đư­ợc trình bày bên d­ưới.

- Các kiểu có dấu (signed) và không dấu(unsigned)

Khi khai báo một số nguyên, mặc định đó là một số nguyên có dấu. Tính quan trọng nhất của việc dùng signed là để bổ sung cho kiểu dữ liệu char, vì char là kiểu không dấu theo mặc định.

Kiểu unsigned chỉ rõ rằng một biến chỉ có thể có giá trị dư­ơng. Bổ từ này có thể đư­ợc sử dụng với kiểu dữ liệu int và kiểu dữ liệu float. Kiểu unsigned có thể áp dụng cho kiểu dữ liệu float trong vài trường hợp nhưng điều này giảm bớt tính khả chuyển (portability) của mã lệnh.

Với việc thêm từ unsigned vào trước kiểu dữ liệu int, miền giá trị cho những số dư­ơng có thể được tăng lên gấp đôi.

Ta xem những câu lệnh của mã C cung cấp ở bên dư­ới, nó khai báo một biến theo kiểu unsigned int và khởi tạo biến này có giá trị 23123.

unsigned int varNum;

varNum = 23123;

Chú ý rằng không gian cấp phát cho kiểu biến này vẫn giữ nguyên. Nghĩa là, biến varNum đư­ợc cấp phát 2 byte như khi nó dùng kiểu int. Tuy nhiên, những giá trị mà một kiểu unsgned int hỗ trợ  sẽ nằm trong khoảng từ 0 đến 65535, thay vì là -32768 tới 32767 mà kiểu int hỗ trợ. Theo mặc định, int là một kiểu dữ liệu có dấu.
- Các kiểu long và short

Chúng được sử dụng khi một số nguyên có chiều dài ngắn hơn hoặc dài hơn chiều dài bình thường. Một bổ từ short được áp dụng cho kiểu dữ liệu khi chiều dài yêu cầu ngắn hơn chiều dài số nguyên bình thường và một bổ từ long được dùng khi chiều dài yêu cầu dài hơn chiều dài số nguyên bình thường.

Bổ từ short đư­ợc sử dụng với kiểu dữ liệu int. Nó sửa đổi kiểu dữ liệu int theo hướng chiếm ít vị trí bộ nhớ hơn. Bởi vậy, trong khi một biến kiểu int chiếm giữ 16 bit (2 byte) thì một biến kiểu short int (hoặc chỉ là short), chiếm giữ 8 bit (1 byte) và cho phép những số có trong phạm vi từ -128 tới 127.

Bổ từ long được sử dụng tương ứng một miền giá trị rộng hơn. Nó có thể được sử dụng với int cũng như với­ kiểu dữ liệu double. Khi đ­ược sử dụng với kiểu dữ liệu int, biến chấp nhận những giá trị số trong khoảng từ -2,147,483,648 đến 2,147,483,647 và chiếm giữ 32 bit ( 4 byte). T­ương tự, kiểu long double của một biến chiếm giữ 128 bit (16 byte).

Một biến long int được khai báo như sau:

```bash
long int varNum;
```

Nó cũng có thể được khai báo đơn giản như long varNum. Một số long integer có thể được khai báo như long int hay chỉ là long. Tương tự, ta có short int hay short.

Ví dụ sau trình bày cách khai báo những kiểu dữ liệu trên.

Ví dụ 2:

```bash
main()

{

char abc;      /\*abc of type character \*/

int xyz;       /\*xyz of type integer \*/

float length;  /\*length of type float \*/

double area;   /\* area of type double \*/

long liteyrs;  /\*liteyrs of type long int \*/

short arm;     /\*arm of type short integer\*/

}
```

Chúng ta xem lại ví dụ cộng hai số và hiển thị tổng ở chương trước. Mã giả như sau :

Ví dụ 3:

```bash
BEGIN

INPUT A, B

C = A + B

DISPLAY C

END
```

Trong ví dụ này, các giá trị cho hai biến A và B được nhập. Các giá trị được cộng và tổng được lưu cho biến C bằng cách dùng câu lệnh C = A + B. Trong câu lệnh này, A và B là những biến và  ký hiệu + gọi là toán tử. Chúng ta sẽ nói về toán tử số học của C ở phần sau đây. Tuy nhiên, có những loại

### 2.5    Các toán tử số học (Arithmetic Operators)

Những toán tử số học đư­ợc sử dụng để thực hiện những thao tác mang tính số học. Chúng đư­ợc chia thành hai lớp : Toán tử số học một ngôi (unary) và toán tử số học hai ngôi (binary).

- Các toán tử hai ngôi

Trong C, các toán tử hai ngôi có chức năng giống như trong các ngôn ngữ khác. Những toán tử như +, -, \* và / có thể được áp dụng cho hầu hết kiểu dữ liệu có sẵn trong C. Khi toán tử  / được áp dụng cho một số nguyên hoặc ký tự, bất kỳ phần dư­ nào sẽ đư­ợc cắt bỏ. Ví dụ, 5/2 sẽ bằng 2 trong phép chia số nguyên. Toán tử % sẽ cho ra kết quả là số dư của phép chia số nguyên. Ví dụ:  5%2 sẽ có kết quả là 1. Tuy nhiên, % không thể đư­ợc sử dụng với những kiểu có dấu chấm động.

Chúng ta hãy xem xét một ví dụ của toán tử số mũ.

9^2

Ở đây 9 là cơ số và 2 là số mũ.

Số bên trái của ‘^’ là cơ số và số bên phải  ‘^’ là số mũ.

Kết quả của 9^2 là 9\*9 = 81.

Thêm ví dụ khác:

5 ^ 3

Có nghĩa là:

5 \* 5 \* 5

Do đó:  5 ^ 3 = 5 \* 5 \* 5 = 125.

Ghi chú: Những ngôn ngữ lập trình như Basic, hỗ trợ toán tử mũ. Tuy nhiên, ANSI C không hỗ trợ ký hiệu ^ cho phép tính lũy thừa. Ta có thể dùng cách khác tính lũy thừa trong C là dùng hàm pow() đã được định nghĩa trong math.h. Cú pháp của nó thể hiện qua ví dụ sau:

```bash
# include&lt;math.h&gt;

void main(void)

{

….

/\* the following function will calculate x to the power y. \*/

z = pow(x, y);

….

}
```

Ví dụ sau trình bày tất cả toán tử hai ngôi được dùng trong C. Chú ý rằng ta chưa nói về hàm printf() và getchar(). Chúng ta sẽ bàn trong những phần sau.

Ví dụ 4:

```bash
# include&lt;stdio.h&gt;

main()

{

int x,y;

x = 5;

y = 2;

printf("The integers are            : %d & %d\\n", x, y);

printf("The addition gives          : %d\\n", x + y);

printf("The subtraction gives       : %d\\n", x - y);

printf("The multiplication gives    : %d\\n", x \* y);

printf("The division gives          : %d\\n", x / y);

printf("The modulus gives           : %d\\n", x % y);

getchar();

}
```

Kết quả là:

The integers are        : 5 & 2

The addition gives      : 7

The subtraction gives   : 3

The multiplication gives  :   10

The division gives      : 2

The modulus gives       : 1
- Các toán tử một ngôi (unary)

Các toán tử một ngôi là toán tử trừ một ngôi ‘-’, toán tử tăng ‘++’ và toán tử giảm ‘–’
- Toán tử trừ một ngôi

Ký hiệu giống như phép trừ hai ngôi. Lấy đối số để chỉ ra hay thay đổi dấu đại số của một giá trị. Ví dụ:

a = -75;

b = -a;

Kết quả của việc gán trên là a được gán giá trị -75 và b được gán cho giá trị 75 (-(- 75)). Dấu trừ đ­ược sử dụng như thế gọi là toán tử một ngôi vì nó chỉ có một toán hạng.

Nói một cách chính xác, không có toán tử một ngôi + trong C. Vì vậy, một lệnh gán như.

invld_pls = +50;

khi mà invld_pls là một biến số nguyên là không hợp lệ trong chuẩn của C. Tuy nhiên, nhiều trình biên dịch không phản đối cách dùng như­ vậy.
- Các toán tử  Tăng và Giảm

C bao chứa hai toán tử hữu ích mà ta không tìm thấy được trong những ngôn ngữ máy tính khác. Chúng là ++ và —. Toán tử ++  thêm vào toán hạng của nó một đơn vị, trong khi toán tử —  giảm đi toán hạng của nó một đơn vị.

Cụ thể:

x  =  x + 1;

có thể được viết là:

x++;

và:

x = x – 1;

có thể được viết là

x–;

Cả hai toán tử này có thể đứng trước hoặc sau toán hạng, chẳng hạn:

x = x + 1;

có thể được viết lại là

x++ hay ++x;

Và cũng tương tự cho toán tử –.

Sự khác nhau giữa việc xử lý trước hay sau trong toán tử một ngôi thật sự có ích khi nó đư­ợc dùng trong một biểu thức. Khi toán tử đứng trư­ớc toán hạng, C thực hiện việc tăng hoặc giảm giá trị trước khi sử dụng giá trị của toán hạng. Ðây là tiền xử lý (pre-fixing). Nếu toán tử đi sau  toán hạng, thì giá trị của toán hạng đ­ược sử dụng trư­ớc khi tăng hoặc giảm giá trị của nó. Ðây là hậu xử lý (post-fixing). Xem xét ví dụ sau :

a = 10;

b = 5;

c = a \* b++;

Trong biểu thức trên, giá trị hiện thời của b đư­ợc sử dụng cho tính toán và sau đó giá trị của b sẽ tăng sau. Tức là, c  được gán  50 và sau đó giá trị của b được tăng lên thành 6.

Tuy nhiên, nếu biểu thức trên là:

c = a \* ++b;

thì giá trị của c sẽ là 60, và b sẽ là 6 bởi vì b được tăng 1 trước khi thực hiện phép nhân với a, sau đó giá trị được gán vào c.

Trong trường hợp mà tác động của việc tăng hay giảm là riêng lẻ thì toán tử có thể đứng trước hoặc sau toán hạng đều được.

Hầu hết trình biên dịch C sinh mã rất nhanh và hiệu quả đối với việc tăng và giảm giá trị. Mã này sẽ tốt hơn so với khi ta dùng toán tử gán. Vì vậy, các toán tử tăng và giảm nên được dùng bất cứ khi nào có thể.

Tóm tắt bài học

- Thông thường, khi chương trình ứng dụng cần xử lý dữ liệu, nó cần có nơi nào đó để lưu trữ tạm thời dữ liệu này. Nơi mà dữ liệu được lưu trữ gọi là bộ nhớ.
- Các ngôn ngữ lập trình hiện đại ngày nay cho phép chúng ta sử dụng các tên tượng trưng gọi là biến (variable), dùng để chỉ đến một vùng trong bộ nhớ nơi mà các giá trị cụ thể được lưu trữ.
- Không có giới hạn về số vị trí bộ nhớ mà một chương trình có thể dùng.
- Một hằng (constant) là một giá trị không bao giờ bị thay đổi.
- Tên của các biến (variable), các hàm (function), các nhãn (label) và các đối tượng khác nhau do người dùng định nghĩa gọi là định danh.
- Tất cả ngôn ngữ dành một số từ nhất định cho mục đích riêng. Những từ này được gọi là là “từ khóa” (keywords).
- Các kiểu dữ liệu chính của C là character, integer, float, double và void.
- Một bổ từ đ­ược sử dụng để thay đổi kiểu dữ liệu cơ bản sao cho phù hợp với nhiều tình huống đa dạng. Các bổ từ được sử dụng trong C là signed, unsigned, long và short.
- C hỗ trợ hai loại toán tử số học: một ngôi và hai ngôi.
- Toán tử tăng ‘++’ và toán tử giảm ‘–’ là những toán tử một ngôi. Nó chỉ hoạt động trên biến kiểu số.
- Toán tử hai ngôi số học là +, -, \*, /, %, nó chỉ tác động lên những hằng số, biến hay biểu thức.
- Toán tử phần dư ‘%’ chỉ áp dụng trên các số nguyên và cho kết quả là phần dư của phép chia số nguyên.