#include <stdio.h>

int main(void)				//메인함수
{							//함수 시작
	char ch = 128;			// 0b 1000 0000
	unsigned char ch1 = 128;	
	printf("ch >> 1 : %d", ch >> 1);		// 0b 1000 0000
	printf("ch1 >> 1 : %d", ch1 >> 1);
	return 0;
}							// 함수의 끝