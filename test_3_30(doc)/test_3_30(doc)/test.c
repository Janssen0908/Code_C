#define   _CRT_SECURE_NO_WARNINGS

#include "test.h"

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%-2d * %-2d = %-2ld", i, j, i * j);
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//
//int main()
//{
//	//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//	float sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum += -(1.0 / i);
//		}
//		else
//		{
//			sum += (1.0 / i);
//		}
//	}
//	printf("%lf\n", sum);
//	return 0;
//}




//int main()
//{
//	int count = 0;
//	for (int i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


int main()
{
	//编写代码在一个整形有序数组中查找具体的某个数
	//要求：找到了就打印数字所在的下标，找不到则输出：找不到。

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int search = 0;
	scanf("%d", &search);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] == search)
		{
			printf("元素 %d 的下标为：%d\n", search, i);
			break;
		}
	}
	if (i == 10)
	{
		printf("找不到\n");
	}

}