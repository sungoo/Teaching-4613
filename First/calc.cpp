#include <iostream>
#include <string>

using namespace std;

int main()
{
	//������ ���
	// ������ ���� ���� ������ ����� �ȴ�.
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
	cout << a / b << endl; //��
	cout << c / d << endl;
	cout << a % b << endl; //������

	cout << a + (int)c << endl; //����ȯ : �⺻ ���� ���������� ����. ����� �� ������ �������� �ڵ����� ��ȯ�����ش�.

	//�Է�
	cin >> a >> b;

	cout << a + b << endl;

	return 0;
}