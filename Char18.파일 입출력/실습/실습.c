/*
	로그인 프로그램
	1. id와 passward를 저장하고 파일이름은 password.txt로 저장한다.
	2. 구조체 Login변수에 id, password 멤버에 각각 저장 시키고
	3. 키보드로 입력되는 id와 pw를 비교하여 "로그인되었습니다."
	또는 "id를 찾을 수 없습니다"라는 메세지를 출력하는 프로그램을 작성하시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Login
{
	char id[20];
	char password[30];
};

int main(void)
{
	FILE* fp;
	struct Login login;
	int res;
	char id[20];
	char password[40];
	
	fp = fopen("password.txt", "r+");
	if (fp == NULL)
	{
		printf("파일을 찾지 못했습니다.\n");
		return 1;
	}



	while (1)
	{
		res = fscanf(fp, "%s%s", login.id, login.password);	//fscanf에서 변수에 저장
		if (res == EOF)
		{
			break;
		}

	}

	// 키보드 입력
	// 구초체 멤버랑 입력받은 값이랑 비교

	printf("id와password를 입력하세요 : \n");
	scanf("%s %s", id, password);

	if (strcmp(id, login.id) == 0 && strcmp(password, login.password) == 0)
	{
		
			printf("로그인 되었습니다.");
	
	}
	else
	{
		printf("id를 찾을 수 없습니다");
	}


	return 0;
}