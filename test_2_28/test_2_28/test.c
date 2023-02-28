#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


	//int cnt = 0;//全局变量
	//int fib(int n)
	//{
	//	cnt++;//cnt = 1
	//	if (n == 0)
	//		return 1;
	//	else if (n == 1)
	//		return 2;
	//	else
	//		return fib(n - 1) + fib(n - 2);
	//}

	//void main()
	//{

	//	fib(8);
	//	printf("%d\n", cnt);
	//}


//int min_b(int x, int y)
//{
//	int i = 1;
//	while (i)
//	{
//		if ((i % x == 0) && (i % y == 0))
//		{
//			return i;
//		}
//		else
//			i++;
//	}
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("%d\n", min_b(a, b));
//	return 0;
//}


//int min_b(int x, int y)
//{
//	
//}
//

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a > b ? a : b;
//	while (1)
//	{
//		if (min % a == 0 && min % b == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		else
//			min++;
//	}
//	//min_b(a, b);
//	return 0;
//}


//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//
//	for (i = 1;; i++)
//	{
//		if(a*i)
//	}
//	return 0;
//}

//void reverse(char* str,char* stc)
//{
//	//int i = 0;
//	//int front = str;
//	//int rear = 0;
//	//if (*str != ' ' || *str != '.')
//	//	str++;
//	//else
//	//	rear = str;
//
//
//}

//void reverse(char* str1, char* str2,int sz)
//{
//	int i = 0;
//	int front = str1;
//	int rear = sz;
//	for (i = sz; i--; i >= 0)
//	{
//		if(rear)
//	}
//}


//
//int main()
//{
//	char arr[100] = "I like beijing.";
//	char arr1[100] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr,arr1,len);
//	printf("%s\n", arr);
//	return 0;
//}


void reverse(char* left, char* right)
{

	while (left < right)//第一步
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}


}


int main()
{
	char arr[100] = { 0 };
	gets(arr);//输入一行字符串

	//三步翻转法
	//第一步：将字符串整体反转
	//第二步：每个单词反转
	//输出
	int len = strlen(arr);
	reverse(arr, arr + len - 1);

	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}//找到单词的首尾

		reverse(start, end - 1);//逆序一个单词

		if (*end == '.')
			start = end + 1;
		else
			start = end;
	}

	printf("%s\n", arr);
	return 0;
}