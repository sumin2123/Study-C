#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void stdent_total(int **student, int **total_p, int *total_m, int *tmp);
void exam_total(int** student, int** total_p, int* total_m, int* tmp);

int main(void)
{
	int student[5][4];
	int total_p[5] = { 0 };   // °³ÀÎ ÃÑÁ¡
	int total_m[4] = { 0 };   // °ú¸ñ ÃÑÁ¡
	int tmp;

	printf("Á¡¼ö ÀÔ·Â :\n$ ");
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

// °³ÀÎº° ÃÑÁ¡°ú Æò±Õ
void stdent_total(int** student, int** total_p, int** total_m, int** tmp)
{

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			total_m[j] += student[i][j];
		}
	}
	printf("*********ÇÐ»ýº°Á¡¼ö*********\n");
	for (int i = 0; i < 5; i++) {
		printf("%d¹øÂ° ÇÐ»ý\nÃÑÁ¡ : %d,\t", i + 1, *total_p[i]);
		printf("Æò±Õ : %.2f\n", (double)*total_p[i] / 4);
	}

}

// °ú¸ñº°ÀÇ ÃÑÁ¡°ú Æò±Õ
void exam_total(int** student, int** total_p, int* total_m, int* tmp)
{

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			total_m[j] += student[i][j];
		}
	}

	printf("*********°ú¸ñº°Á¡¼ö*********\n");
	printf("±¹¾î\nÃÑÁ¡ : %d,\t", total_m[0]);
	printf("Æò±Õ : %.2f\n", (double)total_m[0] / 5);
	printf("¿µ¾î\nÃÑÁ¡ : %d,\t", total_m[1]);
	printf("Æò±Õ : %.2f\n", (double)total_m[1] / 5);
	printf("¼öÇÐ\nÃÑÁ¡ : %d,\t", total_m[2]);
	printf("Æò±Õ : %.2f\n", (double)total_m[2] / 5);
	printf("Ã¼À°\nÃÑÁ¡ : %d,\t", total_m[3]);
	printf("Æò±Õ : %.2f\n", (double)total_m[3] / 5);
}


