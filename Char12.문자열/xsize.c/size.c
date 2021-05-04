#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str1;
	
	printf("대문자를 입력하세요 : ");
	scanf_s("%c", &str1);
	printf("소문자로 바뀐 문자 : %c\n", str1 + 32);

	// 소문자 >> 대문자로 변형 해주려면 -32
	// 대문자 >> 소문자로 변형 해주려면 +32


	return 0;
}