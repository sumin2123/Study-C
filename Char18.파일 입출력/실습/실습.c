/*
	�α��� ���α׷�
	1. id�� passward�� �����ϰ� �����̸��� password.txt�� �����Ѵ�.
	2. ����ü Login������ id, password ����� ���� ���� ��Ű��
	3. Ű����� �ԷµǴ� id�� pw�� ���Ͽ� "�α��εǾ����ϴ�."
	�Ǵ� "id�� ã�� �� �����ϴ�"��� �޼����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
		printf("������ ã�� ���߽��ϴ�.\n");
		return 1;
	}



	while (1)
	{
		res = fscanf(fp, "%s%s", login.id, login.password);	//fscanf���� ������ ����
		if (res == EOF)
		{
			break;
		}

	}

	// Ű���� �Է�
	// ����ü ����� �Է¹��� ���̶� ��

	printf("id��password�� �Է��ϼ��� : \n");
	scanf("%s %s", id, password);

	if (strcmp(id, login.id) == 0 && strcmp(password, login.password) == 0)
	{
		
			printf("�α��� �Ǿ����ϴ�.");
	
	}
	else
	{
		printf("id�� ã�� �� �����ϴ�");
	}


	return 0;
}