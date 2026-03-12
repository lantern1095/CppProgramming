# 소스코드 설명

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`int main()`
- main 함수 시작

`char text[100];`
- 문자형 변수 text를 선언한다.

`int count = 0;`
- 정수형 변수 count를 선언하고 0으로 초기화한다,   

`int i = 0;`
- 정수형 변수 i를 선언하고 0으로 초기화한다,   

`while (true)`
- true일동안 계속 반복한다 (무한반복)

`count = 0;`
- count를 0으로 초기화한다.

`i = 0;`
- i를 0으로 초기화한다.

`cout << "영문 텍스트를 입력하세요(빈칸 포함 가능)>>";`
- cout 객체를 이용해 영문 텍스트 입력을 알리는 문장을 화면에 출력한다.
        
`cin.getline(text, sizeof(text), '\n');`
- cin 객체를 사용하여 text 배열 크기 만큼의 문장을 입력받아 text 배열에 저장하고, 엔터키`'\n'를 만나면 입력받는것을 멈춘다.

`if (strcmp(text, "exit") == 0) {`
- 입력받은 text의 값이 문자열 exit와 동일하다면  
            
`break;`
- 반복문을 빠져나간다.

`else { while (text[i] != '\0')`
- 다른 경우에는 다음 코드들을 `text[i]`가 '\0'이 아닐 동안 반복한다.
                
`if (text[i] != ' ' && (i == 0 || text[i - 1] == ' '))`
- `text[i]`의 값이 공백이 아니고 i가 0이거나(문장의 시작이거나) `text[i - 1]`이 공백이라면(앞의 문자가 공백이라면)

`count++;`
- count를 1 증가시킨다.

`i++;`
- i를  증가시킨다.


`cout << "단어의 갯수는 " << count << "개이다.\n";`
- cout 객체를 사용해 count의 결과값을 화면에 출력한다.
    
`return 0;`
- 0을 반환하고 메인 함수를 종료한다.

## 실행 결과
<img width="1471" height="369" alt="image" src="https://github.com/user-attachments/assets/da630b52-ce66-4f4d-95b5-3ed3b8ba760f" />
