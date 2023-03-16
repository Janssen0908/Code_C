#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>

//返回的是目标空间的起始地址
//char*  my_strcpy(char* dest, const char* src)
//{
//	//断言：不希望（）中的事情发生
//	assert(src!=NULL);//宏
//	assert(dest != NULL);
//	//src不能等于空指针，表达式为真继续执行，表达式为假，报错
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//模拟实现strcpy函数
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char arr2[] = "hello bit";
//
//	my_strcpy(arr1, arr2);
//	//第一个位置：目的地空间起始地址
//	//第二个位置：源空间的起始地址
//
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//	return 0;
//}


//int main()
//{
//
//	//const修饰变量，这个变量就变成了常变量，不可被修改
//	const int num = 10;
//	num = 20;
//
//	const int* p = &num;
//	int const * const p = &num;	
//	int n = 100;
//	//const 修饰指针变量时，修饰的是*p，表示指针指向的内容不能被改变
//	//指针变量p是可以修改的
//
//	p = &n;
//
//	printf("%d\n", num);
//	return 0;
//}


//size_t my_strlen(const char* str)//无符号整形
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//
//}
//
//int main()
//{
//	char arr1[] = "hello bit";
//	printf("%d\n", my_strlen(arr1));
//	return 0;
//}
//
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i)& 1==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
////
//
//int main()
//{
//	int n = -1;
//
//	int ret = NumberOf1(n);//二进制n中有多少个1；
//
//	printf("%d\n", ret);
//	return 0;
//}
// 
// 
// 
// 
// 
// //int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i)& 1==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
// 
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d %d", &m, &n);
//	int num = m ^ n;
//	printf("%d\n", NumberOf1(num));
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 32; i >= 1; i--)
//	{
//		if (i / 2 == 0)//偶数
//		{
//			printf("%d ", ((n>>i) & 1));
//		}
//		else if(i%2==1)
//		{
//			printf("%d ", ((n>>i) & 1));
//		}
//	}
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d,b = %d\n", a, b);

	return 0;
}


