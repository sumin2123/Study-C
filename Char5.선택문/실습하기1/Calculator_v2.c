#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	short c;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d, %d", &a, &b);
	
	printf("연산문자를 입력하세요 : ");
	scanf_s("%s", &c);

	int d;

	switch (c)
	{
	case '+':
		d = a + b;
		break;

	case '-':
		d = a - b;
		break;

	case '*':
		d = a * b;
		break;

	case '/':
		d = a / b;
		break;

	default:
		printf("정확한 문자를 입력하세요.");
		break;
	}

	printf("결과 : %d", d);

	return 0;
}