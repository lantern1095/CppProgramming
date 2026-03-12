# 소스코드 설명

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`int main()`
- main 함수 시작

    for (int n = 0; n < 4; n++) 
        for (int m = 0; m <= n; m++) 
            cout << "*";
        cout << "\n";

         return 0;

        
## 실행 결과
<img width="1476" height="262" alt="image" src="https://github.com/user-attachments/assets/35d993af-ab96-46c9-881d-9c08351d66bd" />
