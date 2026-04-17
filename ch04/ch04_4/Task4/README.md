## 문제 2

`#include<iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`class ObjectPrice`
- ObjectPrice 클래스 선언

`private:`
- 접근지정자를 private으로 설정

`int arrSize;`
- 정수형 변수 arrSize 선언

`int* price;`
- 정수형 포인터 price 선언

`public:`
- 접근지정자를 public 으로 설정

`ObjectPrice() :ObjectPrice(3)`
- ObjectPrice 클래스의 기본 생성자, 생성자 ObjectPrice(int num)를 호출하고 3을 매개 변수로 넘긴다

`ObjectPrice(int num);`
- 타겟 생성자 ObjectPrice(int num) 선언

`~ObjectPrice() { delete[] price; }`
- 소멸자, price 동적으로 할당받은 메모리를 해제한다.

`void setPrice();`
- setPrice 함수 선언

`int mostExpensive();`
- mostExpensive 함수 선언

`int mostCheap();`
- mostCheap 함수 선언

`ObjectPrice::ObjectPrice(int num)`
- 타겟 생성자 ObjectPrice(int num) 구현부

`arrSize = num;`
- arrsize를 num으로 초기화

`price = new int[arrSize];`
- price 변수에 arrSize의 크기만큼 정수형 배열을 동적으로 할당받는다.

```
if (!price) {
	cout << "메모리를 할당할 수 없습니다.";
}
```
- 오류 처리문

`void ObjectPrice::setPrice()`
- setPrice 함수 구현부

```
cout << "물품 " << arrSize << " 개의 가격 입력 >> ";
for (int i = 0; i < arrSize; i++) {
	cin >> price[i];
}
```
- arrSize의 값만큼 반복시키며 가격을 입력받아 price의 i번째 요소를 채워넣는다.

`int ObjectPrice::mostExpensive()`
- mostExpensive 함수 구현부

`int ind = 0;`
- 정수형 변수 ind 선언 후 0으로 초기화

```
for (int i = 0; i < arrSize; i++) {
	if (price[ind] < price[i]) {
		ind = i;
	}
}
```
- arrSize의 값만큼 반복하며 price 배열의 ind 번째 요소가 i 번째 요소보다 작은지 확인하고, 작다면 ind에 i의 값을 저장한다.

`return price[ind];`
- price 배열의 ind 번째 요소를 반환한다.

`int ObjectPrice::mostCheap()`
- mostCheap 함수 구현부

`int ind = 0;`
- 정수형 변수 ind 선언 후 0으로 초기화

```
for (int i = 0; i < arrSize; i++) {
	if (price[ind] > price[i]) {
		ind = i;
	}
}
```
- arrSize의 값만큼 반복하며 price 배열의 ind 번째 요소가 i 번째 요소보다 큰지 확인하고, 작다면 ind에 i의 값을 저장한다.

`return price[ind];`
- price 배열의 ind 번째 요소를 반환한다.

`int main()`
- main 함수 시작

`int count = 0;`
- 정수형 변수 count 선언 후 0으로 초기화
  
```
cout << "구입할 물품의 개수>> ";
cin >> count;
```
- count 변수에 값을 입력받는다.

`ObjectPrice obj(count);`
- ObjectPrice 클래스의 obj객체를 생성하고, count를 생성자의 인자로 전달한다.

`obj.setPrice();`
- obj객체의 setPrice 함수 호출

`cout << "가장 싼 가격은 " << obj.mostCheap() << endl;`
- obj 객체의 mostCheap 함수 호출 후 반환값을 이용해 가장 싼 가격 출력

`cout << "가장 비싼 가격은" << obj.mostExpensive() << endl;`
- obj 객체의 mostExpensive 함수 호출 후 반환값을 이용해 가장 비싼 가격 출력

`return 0;`
- 0을 반환하고 main 함수를 종료한다.

## 실행결과
<img width="860" height="150" alt="image" src="https://github.com/user-attachments/assets/9b709c28-017e-4641-88a2-c87fa4d3a583" />



## 문제 4
`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드


`#include <string>`
- string 클래스 사용과 다양한 문자열 처리 함수를 사용하기 위한 헤더파일


`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.


`class ReadStr`
- ReadStr 클래스 선언


`private:`
- 접근지정자를 private으로 설정


`string instr;`
- 입력받은 문자열을 저장할 문자열 변수 instr 선언


`string outstr;`
- 처리 후의 문자열을 저장할 문자열 변수 outstr 선언


`public:`
- 접근지정자를 public 으로 설정


`ReadStr();`
- 기본 생성자 ReadStr() 선언


`~ReadStr() {}`
- 소멸자, 특별한 해제 작업 없이 정의됨


`void inputStr();`
- inputStr 함수 선언


`void pickAlpha();`
- pickAlpha 함수 선언


`void printStr();`
- printStr 함수 선언


`ReadStr::ReadStr() :instr(""), outstr("") {}`
- 기본 생성자 구현부, instr와 outstr을 빈 문자열로 초기화한다.


`void ReadStr::inputStr()`
- inputStr 함수 구현부


`cout << "텍스트 입력 (한글 안됨) >> ";`
- 안내 메시지 출력


`getline(cin, instr);`
- 한 줄의 문자열을 입력받아 instr에 저장한다.


`void ReadStr::pickAlpha()`
- pickAlpha 함수 구현부


```
for (int i = 0; i < instr.length(); i++) {
	if (isalpha(instr[i])) {
		outstr.append(1, instr[i]);
	}
	else if (instr[i] == ' ') {
		outstr.append(1, instr[i]);
	}
}
```
- instr의 길이만큼 반복하며 알파벳이거나 공백인 경우에만 outstr 뒤에 추가한다.


`void ReadStr::printStr()`
- printStr 함수 구현부


`cout << outstr;`
- 처리된 결과 문자열인 outstr을 출력한다.


`int main()`
- main 함수 시작


`ReadStr rdr;`
- ReadStr 클래스의 rdr 객체 생성


`rdr.inputStr();`
- rdr 객체의 inputStr 함수 호출


`rdr.pickAlpha();`
- rdr 객체의 pickAlpha 함수 호출


`rdr.printStr();`
- rdr 객체의 printStr 함수 호출


`return 0;`
- 0을 반환하고 main 함수를 종료한다.


## 실행결과
<img width="973" height="84" alt="image" src="https://github.com/user-attachments/assets/da767fab-3c4f-4f72-8019-01cf85cff2ee" />





## 문제 5
`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드


`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.


`class Container`
- Container 클래스 선언


`int* p;`
- 정수형 포인터 p 선언


`int size;`
- 정수형 변수 size 선언


`public:`
- 접근지정자를 public 으로 설정


`Container(int size);`
- 생성자 Container(int size) 선언


`~Container();`
- 소멸자 Container() 선언


`void read();`
- read 함수 선언


`void write();`
- write 함수 선언


`void rotate();`
- rotate 함수 선언


`double avg();`
- avg 함수 선언


`Container::Container(int size)`
- 생성자 Container(int size) 구현부


`this->size = size;`
- 멤버 변수 size를 매개 변수 size 값으로 초기화


`p = new int[size];`
- p 변수에 size의 크기만큼 정수형 배열을 동적으로 할당받는다.


```
if (!p) {
	cout << "메모리를 할당할 수 없습니다.";
}
```
- 오류 처리문


`Container::~Container()`
- 소멸자 Container() 구현부


`delete[] p;`
- p 동적으로 할당받은 메모리를 해제한다.


`void Container::read()`
- read 함수 구현부


```
cout << "정수 10개 입력 >> ";
for (int i = 0; i < size; i++) {
	cin >> p[i];
}
```
- size의 값만큼 반복시키며 정수를 입력받아 p의 i번째 요소를 채워넣는다.


`void Container::write()`
- write 함수 구현부


```
for (int i = 0; i < size; i++) {
	cout << p[i] << " ";
}
cout << endl;
```
- size의 값만큼 반복하며 p 배열의 요소를 출력한다.


`void Container::rotate()`
- rotate 함수 구현부


`int temp = p[size - 1];`
- 배열의 마지막 요소를 임시 변수 temp에 저장


```
for (int i = size - 1; i >= 0; i--) {
	p[i] = p[i - 1];
}
```
- 요소를 한 칸씩 뒤로 밀어내는 반복문


`p[0] = temp;`
- 마지막이었던 요소를 배열의 첫 번째 칸에 저장


`double Container::avg()`
- avg 함수 구현부


`double avg = 0;`
- 실수형 변수 avg 선언 후 0으로 초기화

```
for (int i = 0; i < size; i++) {
	avg += p[i];
}
```
- size의 값만큼 반복하며 p 배열의 모든 요소를 avg에 더한다.

`return avg / size;`
- 합산된 값을 size로 나누어 평균을 반환한다.

`int main()`
- main 함수 시작

`Container cnt(10);`
- Container 클래스의 cnt객체를 생성하고, 10을 생성자의 인자로 전달한다.

`cnt.read();`
- cnt 객체의 read 함수 호출


`cnt.write();`
- cnt 객체의 write 함수 호출


`cnt.rotate();`
- cnt 객체의 rotate 함수 호출


`cnt.write();`
- cnt 객체의 write 함수 호출


`cout << "평균은 " << cnt.avg() << endl;`
- cnt 객체의 avg 함수 호출 후 반환값을 이용해 평균 출력


`return 0;`
- 0을 반환하고 main 함수를 종료한다.




## 실행결과
<img width="909" height="149" alt="image" src="https://github.com/user-attachments/assets/da79e625-7db4-4f1f-ac02-519ba27b3108" />




## 문제 9

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드


`#include <string>`
- string 클래스 사용과 다양한 문자열 처리 함수를 사용하기 위한 헤더파일


`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.


`class Book`
- Book 클래스 선언


`private:`
- 접근지정자를 private으로 설정


`string title;`
- 문자열 변수 title 선언


`int price;`
- 정수형 변수 price 선언


`public:`
- 접근지정자를 public 으로 설정


`Book() { title = ""; price = 0; }`
- Book 클래스의 기본 생성자, title을 빈 문자열로, price를 0으로 초기화한다.


`void set(string title, int price) { this->title = title; this->price = price; }`
- 객체 자신의 title과 price를 각각 매개변수 title과 price로 설정한다.


`string getTitle() { return title; }`
- 멤버 변수 title을 반환하는 함수


`int getPrice() { return price; }`
- 멤버 변수 price를 반환하는 함수


`class Library`
- Library 클래스 선언


`private:`
- 접근지정자를 private으로 설정


`string name; `
- 도서관 이름을 저장할 문자열 변수 name 선언


`Book* p; `
- Book 객체 배열을 가리킬 포인터 p 선언


`int size; `
- 배열의 크기를 저장할 정수형 변수 size 선언


`int next = 0; `
- 다음에 저장될 위치를 가리키는 정수형 변수 next 선언 및 0으로 초기화


`public:`
- 접근지정자를 public 으로 설정


`Library(string name, int size);`
- 생성자 Library(string name, int size) 선언


`~Library();`
- 소멸자 Library() 선언


`void add(string name, int price); `
- add 함수 선언


`void show(); `
- show 함수 선언


`Book* mostExpensive();  `
- mostExpensive 함수 선언


`Library::Library(string name, int size)`
- 생성자 Library(string name, int size) 구현부


`this->name = name;`
- 멤버 변수 name을 매개 변수 name 값으로 초기화


`this->size = size;`
- 멤버 변수 size를 매개 변수 size 값으로 초기화


`p = new Book[size];`
- p 변수에 size의 크기만큼 Book 객체 배열을 동적으로 할당받는다.


```
if (!p) {
	cout << "메모리를 할당할 수 없습니다." << endl;
}
```
- 오류 처리문


`Library::~Library()`
- 소멸자 Library() 구현부


`delete[] p;`
- p 동적으로 할당받은 메모리를 해제한다.


`void Library::add(string name, int price)`
- add 함수 구현부


`p[next].set(name, price);`
- 현재 next 위치의 Book 객체에 정보를 저장한다.


`next++;`
- 다음 저장을 위해 인덱스를 증가시킨다.


`void Library::show()`
- show 함수 구현부


`cout << name << "에 입고된 책은 다음 " << next << "권 입니다." << endl;`
- 도서관 이름과 현재 입고된 책의 권수를 출력한다.


```
for (int i = 0; i < next; i++) {
	cout << "[" << (p + i)->getTitle() << "]   ";
}
```
- 입고된 책들의 제목을 반복하며 출력한다.


`cout << endl;`
- 줄 바꿈 수행


`Book* Library::mostExpensive()`
- mostExpensive 함수 구현부


`int max = 0;`
- 가장 비싼 책의 인덱스를 저장할 변수 max 선언 후 0으로 초기화


```
for (int i = 0; i < size; i++) {
	if ((p + i)->getPrice() > (p + max)->getPrice()) {
		max = i;
	}
}
```
- 배열을 순회하며 가장 높은 가격을 가진 책의 인덱스를 max에 저장한다.


`return &p[max];`
- 가장 비싼 책의 주소를 반환한다.


`int main()`
- main 함수 시작


`Library* lib = new Library("한국도서관", 10);`
- Library 클래스의 lib객체를 동적 할당하고, 이름과 크기를 인자로 전달한다.


`lib->add("명품 C++", 30000);`
- lib 객체의 add 함수를 호출하여 책 추가


`lib->add("라즈베리파이", 34000);`
- lib 객체의 add 함수를 호출하여 책 추가


`lib->add("HTML5", 33000);`
- lib 객체의 add 함수를 호출하여 책 추가


`lib->show();`
- lib 객체의 show 함수 호출


`Book* b = lib->mostExpensive();`
- lib 객체의 mostExpensive 함수 호출 후 반환된 주소를 포인터 b에 저장


`cout << "가장 비싼 책: " << b->getTitle() << "," << b->getPrice() << endl;`
- 가장 비싼 책의 제목과 가격을 출력


`delete lib;`
- 동적으로 할당받은 lib 객체 메모리를 해제한다.


`return 0;`
- 0을 반환하고 main 함수를 종료한다.

## 실행결과 
<img width="980" height="143" alt="image" src="https://github.com/user-attachments/assets/ea72360d-9450-446c-a9ac-4b89cbd62b4f" />



