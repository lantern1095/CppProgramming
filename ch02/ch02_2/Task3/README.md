# 소스코드 설명

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`int main()`
- main 함수 시작

`char num[10];`
- 문자형 배열 num을 선언한다.

`char name[10];`
- 문자형 배열 name을 선언한다.

`char add[50];`
- 문자형 배열 add를 선언한다.


`cout << "학번을 입력하시오 : ";`
- cout 객체를 사용해 학번을 입력을 알리는 코드를 화면에 출력한다.

`cin >> num;`
- cin 객체를 사용해 키보드에서 값을 입력받아 num 배열에 저장한다.

`cout << "이름을 입력하시오 : ";`
- cout 객체를 사용해 이름을 입력을 알리는 코드를 화면에 출력한다.

`cin >> name;`
- cin 객체를 사용해 키보드에서 값을 입력받아 name 배열에 저장한다.

`cin.ignore();`


`cout << "주소를 입력하시오 : ";`


`cin.getline(add, sizeof(add), '\n');`


`cout << "\n\n\n1.학번 : " << num << "\n";`


`cout << "2.이름 : " << name << "\n";`


`cout << "3.주소 : " << add;`


`return 0;`
- 0을 반환하고 메인 함수를 종료한다.

## 실행 결과
<img width="1467" height="325" alt="image" src="https://github.com/user-attachments/assets/11580568-3cd8-4226-afc9-2c8067725244" />
