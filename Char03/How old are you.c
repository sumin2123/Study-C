#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20];
	char age[20];

	printf("�̸��Է� : ");
	scanf("%s", name);
	printf("���̸� �Է� :");
	scanf("%s", age);
	printf("%s�� ���̴� %s�� �Դϴ�.", name, age);


	return 0;
}