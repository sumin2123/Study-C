#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c, d;
	int a, b;

	
	while (1)
	{
		printf("����Ϸ��� ���� �Է��ϼ���. ex) 10+20 ");
		scanf_s("%d%c%d", &a, &c, &b);

		printf("�������� 'end'�� �Է��ϼ���.");
		scanf_s("%s", &d);
		if (d == "end") break;

		switch (c)
		{
		case '+':
			printf("������ ����� %d �Դϴ�.\n", a + b);
			break;

		case '-':
			printf("������ ����� %d �Դϴ�.\n", a - b);
			break;

		case '*':
			printf("������ ����� %d �Դϴ�.\n", a * b);
			break;

		case '/':
			printf("�������� ����� %lf �Դϴ�.", (double)a / b);
			break;

		default:
			printf("�ٽ� �Է��ϼ���");
			break;
		}
		

	}
	return 0;
}

	
