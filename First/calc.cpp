#include <iostream>
#include <string>

using namespace std;

int main()
{
	//변수의 계산
	// 변수는 같은 유형 끼리만 계산이 된다.
	// int = int + int  /  float = float + float

	int mySum;

	int a = 14;
	int b = 4;

	float c = 4.0f;
	float d = 5.0f;

	// a + b = mySum
	mySum = a + b;

	cout << mySum << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl; //몫
	cout << c / d << endl;
	cout << a % b << endl; //나머지

	cout << a + (int)c << endl; //형변환 : 기본 변수 유형끼리만 가능. 계산할 때 서로의 유형으로 자동으로 변환시켜준다.

	//입력
	cin >> a >> b;

	cout << a + b << endl;

	return 0;
}