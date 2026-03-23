## 실습과제 3

`#include <iostream>`

`using namespace std;`

`class triangle`

`int width;`

`int height;`

`public:`

`double getarea();`

`triangle();`

`triangle(int w, int h);`

`~triangle();`

`triangle::triangle() : triangle(1, 1)`

`triangle::triangle(int w, int h) : width(w), height(h)`

`cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 생성" << endl;`

`triangle::~triangle()`

`cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 소멸" << endl;`

`triangle tri1(4, 8);`

`triangle tri2(2, 2);`

`double triangle::getarea()`

`return width * height / 2.0;`

`int main()`

`cout << "삼각형의 면적은 " << tri1.getarea() << endl;`

`cout << "삼각형의 면적은" << tri2.getarea() << endl;`

`return 0;`



## 실행결과
<img width="1461" height="265" alt="image" src="https://github.com/user-attachments/assets/bfa136fa-2c60-49de-a700-97405e8cf85c" />
