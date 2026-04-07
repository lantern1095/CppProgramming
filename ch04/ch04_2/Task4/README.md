
`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.

`int main()`
- main() 함수 시작


`int n = 0;`
- 정수형 변수 n 선언 후 0으로 초기화

`double max = 0.0;`
- 실수형 변수 max 선언 후 0.0으로 초기화

```
cout << "입력할 실수의 개수를 입력하세요 : ";
cin >> n;
```
입력받을 실수의 개수를 입력받아 n에 저장한다.

`int* p = new int[n];`
- 실수형 포인터 p를 선언하고, new 연산자를 통해 n개의 크기를 가진 실수형 배열을 힙 영역에 동적으로 할당한다.

```
if (!p) {
    cout << "메모리를 할당할 수 없습니다.";
    return -1;
}
```
- 메모리 부족으로 할당에 실패할 시 -1을 반환한다.

```
for (int i = 0; i < n; i++) {
    cout << i + 1 << "번째 실수: ";
    cin >> p[i];
}
```
- 반복문을 이용하여 n의 크기만큼 코드를 반복시키며 p[i]에 실수를 입력받는다.

```
for (int i = 0; i < n; i++) {
    if (max < p[i]) {
        max = p[i];
    }
}
```
- 반복문을 이용하여 n의 크기만큼 코드를 반복시키며 max에 저장된 실수와 실수형 배열 p의 i번째 요소의 크기를 비교하고, p[i]가 더 크다면 max에 p[i]를 저장하는 비교 연산을 시행한다.

`delete[] p;`
- 할당한 동적 메모리를 해제한다.

`cout << "최대값은 " << max << "입니다." << endl;`
- 최대값을 출력한다.

`return 0;`
- 0을 반환하고 main() 함수를 종료한다.


## 실행결과
<img width="1474" height="290" alt="image" src="https://github.com/user-attachments/assets/17efe849-8d3d-4557-8163-710b3f76a9bb" />
