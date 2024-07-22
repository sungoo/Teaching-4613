#include <iostream>
#include <string>

using namespace std;

int main()
{
	// { } : 블록(지역)
	// 변수를 사용하는 명령어는 이 블록 안에 있어야함.
	// 이 { } 안에서 선언된 변수는
	// 이 { } 안에서만 유효하다.
	// { } 바깥에서 { } 안에 변수를 사용하려고 하면
	// 없는데?? 할 것이다.
	// 
	//한 줄 주석 : 이 한줄에 한해 이 줄에 어떤 걸 쓰더라도 컴퓨터는 읽지 않음
	/*
	여러줄 주석
	위 아래 슬래시 별 사이에 모든 글을
	컴퓨터는 읽지 않음.
	*/

	//컴퓨터 언어 명령어의 순서 :
	//위에서 아래로
	//선언부터 하고, (int n = ...)
	//사용하기 (cout << n ;)

	//변수
	// [값]을 담는 그릇
	// 이걸 통해서만 값을 저장하고 계산할 수 있다.
	//변수의 선언  변수의 초기화
	int number = 4;
	//int, float, char
	//int : 정수
	//float : 실수(소수)
	//char : 문자(딱 하나)
	//string : 문자열

	float fNum = 10.3f;
	char c = 'd';
	string str = "오뎅님바보";

	cout << "number : " << number << " fNum : " << fNum << " c :" << c << endl;
	cout << str << endl;

	//return : 블록 끝내기
	//모든 명령어는 이 위에 존재해야함.
	return 0;
}