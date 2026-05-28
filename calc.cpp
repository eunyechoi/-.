// calc.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "add.h"
#include "sub.h"
#include "mul.h"

using namespace std;

int main()
{
	int a, b;
	int menu;

	cout << "첫 번째 숫자 입력 :";
	cin >> a;

	cout << "두 번째 숫자 입력 :";
	cin >> b;

	cout << "\n1. 더하기";
	cout << "\n2. 빼기";
	cout << "\n3. 곱하기";
	cout << "\n선택 : ";
	cin >> menu;

	switch (menu)
	{
	case 1:
		cout << "결과 : " << add(a, b);
		break;

	case 2:
		cout << "결과 : " << sub(a, b);
		break;

	case 3:
		cout << "결과 : " << mul(a, b);
		break;
	}

	return 0;

}