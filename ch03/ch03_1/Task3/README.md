# 소스코드 설명

`#include <iostream>`
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일인 'iostream' 을 포함하는 코드

`using namespace std;`
- using 지시어를 사용하여 std 네임스페이스에 선언된 이름들을 사용할 때 std::를 생략한다.


class Sphere {
public:
	int radius;

	double getVolume();
	double getSurfaceArea();
};

double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * (radius * radius * radius);
}

double Sphere::getSurfaceArea() {
	return 4 * 3.14 * (radius * radius);
}
