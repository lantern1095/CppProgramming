<img width="968" height="386" alt="image" src="https://github.com/user-attachments/assets/861e32b3-7ee2-4680-aac5-e8eeaf250661" />

- 동적 할당을 받은 메모리는 힙 영역 상에는 존재하지만 이름은 존재하지 않는데, 그 위치를 알기 위해 주소를 이름처럼 사용하고 있다. 하지만 pArray 에 후위연산자인 ++ 를 이용해 주소값을 증가시키면, pArray가 가리키고 있는 주소값이 바뀌게 되어 이전에 가리키던 주소값은 잃어버리게 된다. delete[] 는 메모리의 시작 주소로 할당받은 메모리를 해제하기 때문에 메모리 누수가 발생하는 것이다. 이를 해결하기 위해선 `pArray[i]` 와 같이 인덱스로 접근하거나 `(pArray + i)` 와 같이 포인터 연산으로 접근하여야 한다.

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
	Circle* pArray = new Circle[3];
	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << '\n';
	}
	delete[] pArray;
}
```


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
	Circle* pArray = new Circle[3];
	for (int i = 0; i < 3; i++) {
		cout << (pArray + i)->getArea() << '\n';
	}
	delete[] pArray;
}
```

<img width="1477" height="341" alt="image" src="https://github.com/user-attachments/assets/6d654efd-9d1e-453e-8e59-5c2aaaeb4a02" />


