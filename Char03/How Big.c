#include <stdio.h>

int main(void)
{
	printf("char 자료형의 크기 : %d바이트\n", sizeof(char));
	printf("short 자료형의 크기 : %d바이트\n", sizeof(short));
	printf("int 자료형의 크기 : %d바이트\n", sizeof(int));
	printf("long 자료형의 크기 : %d바이트\n", sizeof(long));
	printf("long long 자료형의 크기 : %d바이트\n", sizeof(long long));

	return 0;
}