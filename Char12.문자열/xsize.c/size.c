#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str1;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &str1);

		if ((str1 >= 'A') && (str1 <= 'Z'))
		{
			printf("�ҹ��ڷ� �ٲ� ���� : %c\n", str1 + 32);
		}
		else if ((str1 >= 'a') && (str1 <= 'z'))
		{
			printf("�빮�ڷ� �ٲ� ���� : %c", str1 - 32);
		}
		else
		{
			printf("���ڸ� ����� �Է����ּ���!!!");
		}

	// �ҹ��� >> �빮�ڷ� ���� ���ַ��� -32
	// �빮�� >> �ҹ��ڷ� ���� ���ַ��� +32


	return 0;
}