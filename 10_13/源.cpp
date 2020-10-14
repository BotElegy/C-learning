#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//void test()
//{
//	static int a = 1;//a 是一个静态的局部变量
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;//局部变量/自动变量 auto int a =10
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//函数调用操作符
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//下标引用操作符
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	
//	max = (a > b ? a : b);
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	/*int c = a && b;*/
//	printf("c=%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = --a;
//	printf("a= %d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++,先使用,再++
//	int b = ++a;//前置++,先++,再使用,a=11,b=11
//	printf("a=%d b=%d\n", a,b);//a=11,b=10
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("%d\n", max);
//	return 0;
//}