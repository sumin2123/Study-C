#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20];
	char age[20];

	printf("이름입력 : ");
	scanf("%s", name);
	printf("나이를 입력 :");
	scanf("%s", age);
	printf("%s의 나이는 %s살 입니다.", name, age);


	return 0;
}