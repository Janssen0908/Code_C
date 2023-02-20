#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void test()
{
	int a = 9;
	int b = 6;
	int c = a + b;
	return c;
	
}
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 9;
	}	
	
	
	for (i = 0; i < sz; i++)
	{
		test();
		printf("%d\n", arr[i]);
	}
	return 0;
}


//F5 启动调试
//F9 设置断点
//F10 逐过程
//F11 逐语句
//Ctrl+F5 开始执行不调试