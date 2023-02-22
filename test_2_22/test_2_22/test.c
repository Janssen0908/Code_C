#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		int ret = 1;
//		int i = 0;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	//运行时错误————调试
//	printf("%d\n", sum);
//	return 0;
//}

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	return 0;
}