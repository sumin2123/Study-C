#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str1;
	
	printf("�빮�ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &str1);
	printf("�ҹ��ڷ� �ٲ� ���� : %c\n", str1 + 32);

	// �ҹ��� >> �빮�ڷ� ���� ���ַ��� -32
	// �빮�� >> �ҹ��ڷ� ���� ���ַ��� +32


	return 0;
}