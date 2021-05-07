#include <stdio.h>

struct  address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];

};

void print_list(struct address* lp);

int main(void)
{
	struct address list[5] = {
		{"ȫ�浿", 23, "111-1111", "�︪�� ����"},
		{ "�̼���", 23, "222-2222", "���� ��õ��" },
		{ "�庸��", 23, "333-3333", "�ϵ� û����" },
		{ "������", 23, "444-4444", "�泲 õ��" },
		{ "���߱�", 23, "555-5555", "Ȳ�ص� ����" },
	};
	printf_list(list);

	return 0;
}

void print_list(struct address* lp)
{
	int i;

	for (i = 0; i < 5; i++)

	{
		printf("%10s%5d%15s%20s\n",
			(lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}