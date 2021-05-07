### 1. 









---

###  .strncopy함수 사용한 문자열 복사

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

### .문자열 붙이기

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

### .두 문자열 중 길이가 긴 단어 출력

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

### .문자열 비교 함수

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