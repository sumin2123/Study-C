### 1.  문자열 상수가 주소란 증거



```c
#include <stdio.h>

int main(void)
{
	printf("apple이 저장된 사직 주소 값 : %p\n", "apple");
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
	printf("첫 번째 문자 : %c\n", *"apple");
	printf("두 번째 문자 : %c\n", *("apple+1"));
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);

	return 0;

}
```





---

### 2. 포인터로 문자열을 사용하는 방법



```c
#include <stdio.h> 

int main(void)
{
	char* dessert = "apple";

	printf("오늘 후식은 %s입니다.\n", dessert);
	dessert = "banana";
	printf("내일 후식은 %s입니다.\n", dessert);

	return;
}
```





---

### 3. scanf함수를 사용한 문자열 입력



```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("첫 번째 단어 : %s\n", str);
	scanf("%s",str);
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);

	return 0;
}
```







---

### 4. gets 함수로 한 줄의 문자열 입력



```c
#include <stdio.h> 

int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	gets(str);
	printf("입력한 문자열은 %s입니다.", str);

	return 0;
}
```





---

### 5. fgets함수를 사용한 문자열 입력



```c
#include <stdio.h>

int main(void)
{
	char str[80];
	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	//나중에 입력할 공간
	printf("입력된 문자열은 %s입니다.\n", str);

	return 0;
}
```





---

### 6. 개행 문자로 인해 gets함수가 입력을 못하는 경우



```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);

	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);

	return 0;
}
```





---

### 7. 문자열울 출력하는 puts와 fputs 함수



```c
#include <stdio.h> 

int main(void)
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}
```





---

### 8. strcpy함수의 사용법



```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);

	return 0;
}
```







---

###  9. strncopy함수 사용한 문자열 복사



```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>

int main(void)
{
	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);
	
	printf("%s\n", str);

	return 0;
}
```







---

### 10. 문자열 붙이기



```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);

	return 0;
}
```





---

### 11. 두 문자열 중 길이가 긴 단어 출력

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>

int main(void)
{
	char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
	
		resp = str2;
	printf("이름이 긴 과일은 : %s\n", resp);


	return 0;
}
```





---

### 12 .문자열 비교 함수

```c
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str1[80] = "pear";
//	char str2[80] = "peach";
//
//	printf("사전에 나중에 나오는 과일 이름 : ");
//
//	if (strcmp(str1, str2) > 0)
//		printf("%s\n", str1);
//	else
//		printf("%s\n", str2);
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("앞에서 3개의 문자만 비교하면?\n ");

	if (strncmp(str1, str2, 3) == 0)
		printf("같다.\n");
	else
		printf("다르다.\n");

	return 0;
}
```






---
### 다음 Page [13강 변수의 영역과 데이터 공유](https://github.com/sumin2123/Study-C/blob/main/Char13.%20%EB%B3%80%EC%88%98%EC%9D%98%20%EC%98%81%EC%97%AD%EA%B3%BC%20%EB%8D%B0%EC%9D%B4%ED%84%B0%20%EA%B3%B5%EC%9C%A0/Char13.%20%EB%B3%80%EC%88%98%EC%9D%98%20%EC%98%81%EC%97%AD%EA%B3%BC%20%EB%8D%B0%EC%9D%B4%ED%84%B0%20%EA%B3%B5%EC%9C%A0.md)