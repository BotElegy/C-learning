#include <stdio.h>
#include <string>

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", strlen(arr1));//strlen - string length - 计算字符串的长度
	printf("%d\n", strlen(arr2));
	return 0;
}
