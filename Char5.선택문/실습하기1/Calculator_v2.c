#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	short c;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d, %d", &a, &b);
	
	printf("���깮�ڸ� �Է��ϼ��� : ");
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
		printf("��Ȯ�� ���ڸ� �Է��ϼ���.");
		break;
	}

	printf("��� : %d", d);

	return 0;
}