` #include <iostream>`

- `cin`, `cout` 등 입출력을 위한 헤더파일 포함.

` #include <cstring>`

- C 스타일 문자열 처리 함수를 위한 헤더파일 포함.

` #include <string>`

- `string` 클래스 사용을 위한 헤더파일 포함.

` using namespace std;`

- `std` 네임스페이스의 이름을 생략하고 사용하도록 설정.

` class Person { ... };`

- 사람의 이름과 ID를 관리하는 `Person` 클래스 선언.

` Person(int id, const string& name);`

- ID와 이름을 매개변수로 받는 생성자 선언.

` Person(const Person& person);`

- 다른 `Person` 객체를 인자로 받아 복사하는 복사 생성자 선언.

` ~Person();`

- 객체 소멸 시 호출되는 소멸자 선언.

` void changeName(const string& name);`

- 이름을 변경하는 멤버 함수 선언.

` void show() { cout << id << ',' << name << endl; }`

- ID와 이름을 화면에 출력하는 함수 정의.

` Person::Person(int id, const string& name) { ... }`

- 생성자 구현, 전달받은 `id`와 `name`을 멤버 변수에 저장.

` Person::Person(const Person& person) { ... }`

- 복사 생성자 구현, 원본 객체의 `id`와 `name`을 복사하여 저장.

` cout << "복사 생성자 실행. 원본 객체의 이름 " << this>name << endl;`

- 복사 생성자가 실행됨을 알리는 메시지 출력.

` Person::~Person() { }`

- 소멸자 구현, 특별한 동적 할당 해제 없음.

` void Person::changeName(const string& name) { ... }`

- 이름 변경 함수 구현.

` if (name.length() > this>name.length()) return;`

- 새 이름이 기존 이름보다 길면 변경하지 않고 종료.

` this>name = name;`

- 멤버 변수 `name`을 새 이름으로 변경.

` int main() {`

- `main` 함수 시작.

` Person father(1, "Kitae");`

- ID 1, 이름 "Kitae"인 `father` 객체 생성.

` Person daughter(father);`

- `father` 객체를 복사하여 `daughter` 객체 생성 (복사 생성자 호출).

` father.show();`

- `father` 객체의 정보 출력.

` daughter.show();`

- `daughter` 객체의 정보 출력.

` daughter.changeName("Grace");`

- `daughter` 객체의 이름을 "Grace"로 변경 시도.

` return 0;`

- 0을 반환하고 `main` 함수를 종료한다.



## 실행결과
<img width="975" height="204" alt="image" src="https://github.com/userattachments/assets/fe7f6c0615d245599d73689c906ec37b" />
