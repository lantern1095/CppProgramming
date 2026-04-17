
`#include<iostream>`


`using namespace std;`


`class ObjectPrice`


`private:`


`int arrSize;`


`int* price;`


`public:`


`ObjectPrice() :ObjectPrice(3)`


`ObjectPrice(int num);`


`~ObjectPrice() { delete[] price; }`


`void setPrice();`


`int mostExpensive();`


`int mostCheap();`


`ObjectPrice::ObjectPrice(int num)`


`arrSize = num;`


`price = new int[arrSize];`


```
if (!price) {
	cout << "메모리를 할당할 수 없습니다.";
}
```


`void ObjectPrice::setPrice()`


`cout << "물품 " << arrSize << " 개의 가격 입력 >> ";`


```
for (int i = 0; i < arrSize; i++) {
	cin >> price[i];
}
```


`int ObjectPrice::mostExpensive()`


`int ind = 0;`


```
for (int i = 0; i < arrSize; i++) {
	if (price[ind] < price[i]) {
		ind = i;
	}
}
```


`return price[ind];`


`int ObjectPrice::mostCheap()`


`int ind = 0;`


```
for (int i = 0; i < arrSize; i++) {
	if (price[ind] > price[i]) {
		ind = i;
	}
}
```


`return price[ind];`


`int main()`


`int count = 0;`


`cout << "구입할 물품의 개수>> ";`


`cin >> count;`


`ObjectPrice obj(count);`


`obj.setPrice();`


`cout << "가장 싼 가격은 " << obj.mostCheap() << endl;`


`cout << "가장 비싼 가격은" << obj.mostExpensive() << endl;`


`return 0;`


* 원본 줄 수: 41줄 (단독 중괄호 및 공백 줄 제외)
* 변환 후 줄 수: 41줄
* 동일 여부: 확인 완료
