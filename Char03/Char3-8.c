#include <stdio.h>

int main()
{
	int income = 0;							// �ҵ�� �ʱ�ȭ
	double tax;								// ����
	const double tax_rate = 0.12;			// ���� �ʱ�ȭ
	//tax_rate = 0.15;  >> ���� �߻�

	income = 546;							// �ҵ�� ����
	tax = income * tax_rate;				// ���� ���
	printf("������ : %.1lf�Դϴ�.\n", tax);
	

	return 0;
}