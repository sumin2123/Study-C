#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void stdent_total(int **student, int **total_p, int *total_m, int *tmp);
void exam_total(int** student, int** total_p, int* total_m, int* tmp);

int main(void)
{
	int student[5][4];
	int total_p[5] = { 0 };   // ���� ����
	int total_m[4] = { 0 };   // ���� ����
	int tmp;

	printf("���� �Է� :\n$ ");
	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &tmp);
			student[i][j] = tmp;
			total_p[i] += tmp;
		}
	}

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			total_m[j] += student[i][j];
		}
	}

	return 0;
}

// ���κ� ������ ���
void stdent_total(int** student, int** total_p, int** total_m, int** tmp)
{

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			total_m[j] += student[i][j];
		}
	}
	printf("*********�л�������*********\n");
	for (int i = 0; i < 5; i++) {
		printf("%d��° �л�\n���� : %d,\t", i + 1, *total_p[i]);
		printf("��� : %.2f\n", (double)*total_p[i] / 4);
	}

}

// ������ ������ ���
void exam_total(int** student, int** total_p, int* total_m, int* tmp)
{

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			total_m[j] += student[i][j];
		}
	}

	printf("*********��������*********\n");
	printf("����\n���� : %d,\t", total_m[0]);
	printf("��� : %.2f\n", (double)total_m[0] / 5);
	printf("����\n���� : %d,\t", total_m[1]);
	printf("��� : %.2f\n", (double)total_m[1] / 5);
	printf("����\n���� : %d,\t", total_m[2]);
	printf("��� : %.2f\n", (double)total_m[2] / 5);
	printf("ü��\n���� : %d,\t", total_m[3]);
	printf("��� : %.2f\n", (double)total_m[3] / 5);
}


