#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)//1  2  3  4  5  6  7  8
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)//1
//		{
//			b = b + 3;//4  7  10  13  16  19  22
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i * 3 < 100)
//		{
//			printf("%d ", i * 3);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3] = { 2,3,1 };
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//
//	int i = 100;
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//
//		}
//		if (j == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1000;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("一共有 %d 个闰年", count);
//	return 0;
//}



//int main()
//{
//
//	int x = 20;
//	int y = 40;
//	if (y % x == 0)
//	{
//		printf("%d ", x);
//	}
//	else
//	{
//		while ()
//		{
//			x = 
//		}
//	}
//	return 0;
//}

int main()
{
	int a = 20;
	int b = 40;
	int c = 0;

	while (c = b%a)
	{
		b = a;
		a = c;
	}
	printf("%d ", a);
	return 0;
}