#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch[100];	
		int i; 
		int res = 0;

		printf("���ϴ� ���ڿ��� �Է��ϼ��� : ");
		scanf("%s", ch);
		
		int count = strlen(ch);
		printf("%s�� ���̴� %d�̴�.\n", ch, count);

		for (i = 0; i < count / 2; i++)			//���� ���� ��ŭ�ݺ� 
		{
			if (ch[i] != ch[count - i - 1])		//Ȧ���� ����� ���� ���ڷ� ģ��.
				res += 1;
		}
		if (res == 0) printf("ȸ��\n");
		else printf("ȸ�� �ƴψ�\n");


	return 0;
}







// �� �� ���ڶ� �� �ڶ� �� ,�״��� �ι�° ���� ��, ������� ��
// ���ڸ� �Է¹ޱ�
// ���� ���� ��ŭ�ݺ� / Ȧ���� ����� ���� ���ڷ� ģ��.
// ���� ù��°�� �������� �� / �� �ι�°���� ��