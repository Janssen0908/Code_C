#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", Max(a, b));
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d %d", &a, &n);
//	int ret = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//void my_print(int* str, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(str + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//printf("%d ", sz);
//	my_print(arr,sz);
//	return 0;
//}

#include <math.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//判断水仙花数
//		//1.计算i的位数
//		//2.计算i的每一位的n次方之和
//		//3.判断
//		int n = 1;//123
//
//
//		int tmp = i;
//		while (tmp / 10)//如果tmp是一位数，则不进入循环，长度为1；反之，
//		{
//			n++;
//			tmp = tmp / 10;
//		}//计算i的位数
//
//
//
//
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//计算某一位的n次方
//			tmp = tmp / 10;
//		}//计算i的每一位的n次方之和
//
//
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//
//
//	}
//	return 0;
//}


#include <assert.h>

//void reverse(char* str, int n)
//{
//	//assert(str);
//	/*printf("%d ", str);*/
//	char* left = str;
//	char* right = str + n - 1;
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	//逆序字符串的内容
//
//	char arr[] = "abcdergh";
//	int sz = strlen(arr);
//	printf("%d\n",sz);
//	reverse(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}


//void my_print(int x)
//{
//	printf("")
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	my_print(a);
//	return 0;
//}

int main()
{
	int line = 0;
	scanf("%d", &line);
	//打印上
	int i = 0;
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line-1-i ; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下

	for (i = 1; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}

		for (j = 0; j < 2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
		/*for (j = 2*line -1; j >-1 ; j--)
		{
			printf("*");
		}*/
		//printf("\n");
	}
	return 0;
}