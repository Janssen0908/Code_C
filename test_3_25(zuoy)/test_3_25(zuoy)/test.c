#define   _CRT_SECURE_NO_WARNINGS

#include "test.h"

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//
//		}
//			
//	}
//	return 0;
//}


//
//int main()
//{
//
//	int a, b, c, d, e, f, g = 0;
//	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
//	//判断最大与最小
//
//	return 0;
//}


//int main()
//{
//	int score = 0;
//	int i = 0;
//	int sum = 0;
//	int MAX = 0;
//	int MIN = 100;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > MAX)
//			MAX = score;
//		else if (score < MIN)
//			MIN = score;
//	}
//	printf("%.2f", (sum - MAX - MIN) / 5.0);
//	return 0;
//}




//int main()
//{
//	int year, month = 0;
//	int m[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		int days = m[month];
//		if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) && month == 2)
//		{
//			days += 1;
//		}
//		printf("%d\n", days);
//	}
//	return 0;
//}



//int main()
//{
//
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = scanf("%d", &m);
//	}
//	int insert = 0;
//	scanf("%d", &insert);
//	int j = n;
//	for (j = n; j >=0; j--)
//	{
//		if (insert > arr[j])
//		{
//
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[51] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	scanf("%d", &m);
//
//	//插入
//	int j = 0;
//	for (j = n-1; j >= 0; j--)
//	{
//		if (m < arr[j])
//		{
//			arr[j + 1] = arr[j];
//		}
//		else
//		{
//			arr[j + 1] = m;
//			break;
//		}
//
//	}
//	int o = 0;
//	for (o = 0; o < n+1; o++)
//	{
//		printf("%d ", arr[o]);
//	}
//
//	return 0;
//}