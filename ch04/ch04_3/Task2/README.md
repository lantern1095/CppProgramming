<img width="1002" height="426" alt="image" src="https://github.com/user-attachments/assets/c8fd992b-5779-4abb-afc7-4b2d5ffb86ea" />

- 위 코드에서는 반복문 속에서 Circle 객체를 동적으로 할당받아 사용하고 있지만, 사용이 끝나고 할당받은 메모리를 해제하지 않고 있어 반복문이 반복 될 때마다 계속해서 사용하지 않는 메모리가 점점 쌓이게 되는 구조라는 문제점이 있다. 이를 해결하기 위해서는 원의 면적을 출력하고 delete 를 이용해 메모리를 해제 해주어야 한다.

  ``` cpp
  #include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1; cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r; cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	int radius;
	while (true) {
		cout << "정수 반지름 입력(음수이면 종료)>> ";
		cin >> radius;
		if (radius < 0) break; 
		Circle* p = new Circle(radius);
		cout << "원의 면적은 " << p->getArea() << endl;
		
		delete p;  //할당받은 메모리는 반드시 반납하여야 한다.
	}
}
```
<img width="1482" height="320" alt="image" src="https://github.com/user-attachments/assets/756cab2a-5b5a-4a83-80d7-f64836ebccba" />


