#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int (*fp)(int, int));
int sum(int a, int b);	//����
int sub(int a, int b);	//����
int mul(int a, int b);	//����
int div(int a, int b);	//������

int main(void)
{
	int sel;

	printf("01 ������ ��\n");
	printf("02 ������ ��\n");
	printf("03 ������ ��\n");
	printf("04 �������� ��\n");
	printf("���ϴ� ������ �����ϼ��� : ");
	scanf("%d", &sel);
	
	switch (sel)
	{
	case 1: func(sum); break;
	case 2: func(sub); break;
	case 3: func(mul); break;
	case 4: func(div); break;

	}

	return 0;
}

void func(int (*fp)(int, int))
{
	int a, b;
	int res;

	printf("�� ������ ���� �Է��ϼ��� : ");
	scnaf("%d%d", &a, &b);
	res = fp(a, b);
	printf("�ᱣ���� : %d\n", res);
}

int sum(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int div(int a, int b)
{
	return (a / b);
}




