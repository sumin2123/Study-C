#include <stdio.h>

void swap(void);	// �� ������ ���� �ٲٴ� �Լ� ����

int main(void)
{
	int a = 10, b = 20;

	swap();		// �μ� ���� �Լ� ȣ��
	printf("a: %d,b: %d, a, b");

	return 0;
}



void swap(void)	// �μ��� ���⿡ �Ű������� ���� 
{
	int temp;	// ��ȯ�� ���� ����

	temp = a;
	a = b;
	b = temp;
}
