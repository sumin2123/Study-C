#include <stdio.h>

int main(void)				//�����Լ�
{							//�Լ� ����
	char ch = 128;			// 0b 1000 0000
	unsigned char ch1 = 128;	
	printf("ch >> 1 : %d", ch >> 1);		// 0b 1000 0000
	printf("ch1 >> 1 : %d", ch1 >> 1);
	return 0;
}							// �Լ��� ��