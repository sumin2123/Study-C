#include <stdio.h>

int get_num(void); //�Լ� ����

int main(void)
{
	int result;

	result = get_num();
	printf("��ȯ�� : %d\n", result);
	
	return 0;
}

int get_num(void)
{
	int num;

	printf("��� �Է� : ");
	scnaf("%d", &num);

	return num;
}

int get_num(void)
{
	return 0;
}
