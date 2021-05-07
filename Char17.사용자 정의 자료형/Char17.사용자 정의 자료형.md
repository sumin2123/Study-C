### 1. 구조체를 선언하고 멤버 사용

 

```c
#include <stdio.h>

struct student
{
	int num;
	double grade;

};

int main(void)
{
	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	return 0;
}
```





---

### 2. 배열과 포인터를 멤버로 갖는 구조체 사용

```c
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;

};

int main(void)
{
	struct profile yuni;

	strcpy(yuni.name, "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);
	printf("자기소개 : ");
	gets(yuni.intro);

	printf("이름 : %s\n", yuni.name);
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);
	free(yuni.intro);

	return 0;
}
```





---

### 3.다른 구조체를 멤버로 갖는 구조체 사용



```c
#include <stdio.h>

struct profile
{
	int age;
	double height;

};


struct student
{
	struct profile pf;
	int id;
	double grade;
};

int main(void)
{
	struct student yuni;

	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("나이 : %d\n", yuni.pf.age);
	printf("키 : %.1lf\n", yuni.pf.height);
	printf("학번: %d\n", yuni.id);
	printf("학점: %.1lf\n", yuni.grade);

	return 0;
}
```





---

### 4. 최고학점의 학생 데이터 출력

```c
#include <stdio.h> 

struct student
{
	int id;
	char name[20];
	double grade;

};

int main(void)
{
	struct student	s1 = { 315, "홍길동", 2.4 },
					s2 = { 316, "이순신", 3.7 },
					s3 = { 317, "세종대왕", 4.4 };

	struct student max;

	max = s1;
	if (s2.grade > max.grade)max = s2;
	if (s3.grade > max.grade)max = s3;

	
	printf("학번: %d\n", max.id);
	printf("이름: %s\n", max.name);
	printf("학점: %.1lf\n", max.grade);

	return 0;

}
```





---

#### 5. 구조체를 반환하여 두 변수의 값 교환

```c
#include <stdio.h> 

struct vision
{
	double left;
	double right;

};

struct vision exchange(struct vision robot);

int main(void)
{
	struct vision robot;

	printf("시력 입력: ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;


	return robot;
}
```







---

### 6. 구조체 포인터의 사용

```c
#include <stdio.h> 

struct score
{
	int kor;
	int eng;
	int math;

};

int main(void)
{
	struct score yuni = { 90,80,70 };
	struct score* ps = &yuni;

	printf("국어 : %d\n", (*ps).kor);
	printf("영어 : %d\n", ps -> eng);
	printf("수학 : %d\n", ps -> math);

	return 0;
}
```



---

### 7. 구조체 배열을 초기화하고 출력



```c
#include <stdio.h>

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];

};

int main(void)
{
	struct address list[5] = {
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"이순신", 23, "222-2222", "서울 건천동"},
		{"장보고", 23, "333-3333", "완도 청해진"},
		{"유관순", 23, "444-4444", "충남 천안"},
		{"안중근", 23, "555-5555", "황해도 해주"},

	};

	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n",
			list[i].name, list[i].age, list[i].tel, list[i].addr);
	}

	return 0;
}
```



---

### 8. 함수에서 화살표 연산자를 사용해서 구조체 배열의 값 출력

```c
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
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{ "이순신", 23, "222-2222", "서울 건천동" },
		{ "장보고", 23, "333-3333", "완도 청해진" },
		{ "유관순", 23, "444-4444", "충남 천안" },
		{ "안중근", 23, "555-5555", "황해도 해주" },
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
```





---

### 9. 자기 참조 구조체로 list만들기



```c
#include <stdio.h>

struct list
{
	int num;
	struct list* next;

};

int main(void)
{
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	struct list* head = &a, * current;

	a.next = &b;
	b.next = &c;

	printf("head->num : %d\n", head-> num);
	printf("head -> next-> num : %d\n", head-> next-> num);

	printf("list all : ");
	current = head;
	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->next;
	}

	printf("\n");

	return 0;
}
```



---







### [ 다음 Page. Char18. 파일 입출력 ]()

 