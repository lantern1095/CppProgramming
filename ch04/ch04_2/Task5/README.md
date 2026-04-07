`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`int main()`
- main() 함수 시작


`int num = 0;`
- 정수형 변수 num선언 후 0으로 초기화 

`char* pchar = nullptr;`
- 문자형 포인터 pchar 선언 후 nullptr로 초기화 (유효한 주소를 가리키지 않는다.)

```
cout << "저장할 문자열의 크기를 입력하세요 : ";
cin >> num;
```
- 저장할 문자열의 크기를 입력받아 num에 저장

`cout << endl;`
- 줄바꿈을 위한 출력문

`pchar = new char[num + 1];`
- 문자형 포인터 pchar에 new 연산자를 사용하여 num+1 의 크기를 가진 문자형 배열을 힙 영역에 동적으로 할당한다.

```
if (!pchar) {
    cout << "메모리를 할당할 수 없습니다.";
    return -1;
}
```
- 메모리 부족으로 할당에 실패할 시 -1을 반환한다.

```
cout << "문자열을 입력하시오 : ";
cin.getline(pchar, num+1, '\n');
```
- cin.getline 함수를 이용해 공백을 포함한 문자열을 입력받는다. \n을 입력받으면 입력을 종료한다.

`cout << "============================================" << endl;`
- 문단 구분을 위한 출력문

`cout << "입력한 문자열은 " << pchar << " 입니다.";`
- 입력한 문자열을 출력한다.

`delete[] pchar;`
- 할당한 동적 메모리를 해제한다. 

`return 0;`
- 0을 반환하고 main() 함수를 종료한다.
