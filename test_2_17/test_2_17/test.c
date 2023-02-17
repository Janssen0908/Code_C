#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int arr[] = { 1,2,(3,4),5,6 };
//	//逗号表达式只产生一个结果，而且是最后一个表达式的结果 即为4
//
//	int arr2[] = { 1,2,4,5,6 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}

//int main()
//{
//	char ch [] = "hello bit";
//	printf("%d %d\n", sizeof(ch), strlen(ch));
//	//sizeof计算数组所占大小空格和\0算一个字节,即为10——————操作符
//	//而strlen从字符串头开始，遇到\0结束,即为9——————函数
//	return 0;
//}


init(int a[],int b)
{
	int i = 0;
	for (i = 0; i < b; i++)
	{
		a[i] = 0;
	}
}

void my_print(int a[],int b)
{
	int i = 0;
	for (i = 0; i < b; i++)
	{
		printf("%d ", a[i]);

	}
}


void reverse(int a[],int b)
{
	int tmp = 0;
	int i = 0;
	for (i = 0; i < (b/2); i++)
	{
		tmp = a[i];
		a[i] = a[b];
		a[b] = tmp;
	}
}
int main()
{
	//char a[] = "abcdefg";
	//char b[] = { 'a','b','c','d','e','f','g'};
	////两者大小不同，a的长度大于b（a中有\0）
	//return 0;
	int n = 0;
	int a[] = { 1,2,3,4,5 };
	int b = sizeof(a)/sizeof(a[0]);
	my_print(a, b);
	init(a,b);
	reverse(a, b);
	my_print(a,b);
}

