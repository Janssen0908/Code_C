#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	//ºÈÆûË®
//
//	//int a = 20;
//	//int i = 0;
//	//int count = 0;
//	//for (i = 1; i <= 20; i++)
//	//{
//	//	count++;
//	//	if (i % 2 == 0)
//	//		count++;
//	//}
//	//printf("%d\n", count);
//
//	//int money = 0;
//	//scanf("%d", &money);
//	//int total = money;
//	//int empty = money;
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty/2 + empty % 2;
//	//}
//
//
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money > 0)
//		total = 2 * money - 1;
//	printf("%d\n", total);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\0");
//	}
//	return 0;
//}


void print(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}


void move(int* str, int n)
{
	//int arr1[] = { 0 };
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < n; i++)
	//{
	//	if ((arr[i] % 2) != 0)
	//	{
	//		arr1[j] = arr[i];
	//		j++;
	//	}
	//}
	//for (i = 0; i < n; i++)
	//{
	//	if (arr[i] % 2 == 0)
	//	{
	//		arr1[j] = arr[i];
	//		j++;
	//	}
	//}

	int* right = str + n - 1;
	int* left = str;
	int tmp = 0;
	//while (left < right)
	//{
	//	if (*left % 2 == 0 && *right % 2 != 0)
	//	{
	//		tmp = *left;
	//		*left = *right;
	//		*right = tmp;

	//	}
	//	else if (*left % 2 == 0 && *right % 2 == 0)
	//	{

	//	}
	//}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (*left % 2 != 0)
		{
			left++;
		}
	}


}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	move(arr,sz);
	print(arr, sz);

	return 0;
}