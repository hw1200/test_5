#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

void use_strn_0()
{
	char c[100] = { 0 };
	char d[100] = { 0 };
	int i;
	while (scanf("%s%d", d, &i) != EOF)
	{
		memset(c, 0, sizeof(c));//一个一个字节赋值 
		strncpy(c, d, i);
		printf("%s", c);
	}
	printf("strncmp=%d\n", strncmp("hello","how",1));
}

void use_strn_1()
{
	char c[100] = { 0 };
	char d[100] = { 0 };
	//int i;
	memset(c + 4, 0, sizeof(c) - 4);
	strncat(c, "hello world", 5);
	puts(c);

}

void use_mem()
{
	int a[10];
	memset(a, 0, sizeof(a));
}

void use_memcmp()
{
	int a[6] = { 1,2,3,4,5 };
	int b[6] = { 1,2,4,4,5 };
	printf("a是否等于b(-1/0):%d\n", memcmp(a, b, sizeof(a)));
}

void use_memcpy()
{
	int a[6] = { 1,2,3,4,5 };
	int b[6] = { 1,2,4,6,9 };
	int i;
	memcpy(a + 2, b + 2, sizeof(a) -8 );
	for (i = 0; i < 6; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
}



int main()
{
	//use_strn_0();

	//use_strn_1();

	//use_mem();

	//use_memcmp();

	use_memcpy();

	system("pause");
	return 0;
}