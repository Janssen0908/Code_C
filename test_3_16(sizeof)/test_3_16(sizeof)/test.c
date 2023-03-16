#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{


	//***********************计算数组大小

	//int a[] = { 1,2,3,4 };
	////a为数组
	////sizeof:当表达式为a时，计算的是整个数组a的大小，单位字节
	////当表达式为&a时，计算的是数组a的地址的大小
	////其余情况数组名都是数组首元素的地址
	//printf("%d\n", sizeof(a));//16字节
	//printf("%d\n", sizeof(a+0));//a+0为数组a首元素地址+0；表示第一个元素地址，4/8字节
	//printf("%d\n", sizeof(*a));//4字节
	//printf("%d\n", sizeof(a+1));//4/8字节
	//printf("%d\n", sizeof(a[1]));//4字节

	//printf("%d\n", sizeof(&a));//整个数组的地址 4/8字节
	//printf("%d\n", sizeof(*&a));//抵消 16字节
	//printf("%d\n", sizeof(&a + 1));//还是等同于&a，4/8字节
	//printf("%d\n", sizeof(&a[0]));//4/8字节
	//printf("%d\n", sizeof(&a[0] + 1));//4/8字节



	////**************计算字符数组大小

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6字节-整个数组大小
	//printf("%d\n", sizeof(arr+0));//4/8字节-第1个元素地址大小
	//printf("%d\n", sizeof(*arr));//1字节-arr解引用就是数组第一个元素大小
	//printf("%d\n", sizeof(arr[1]));//1字节-数组第二个元素大小********的		
	//printf("%d\n", sizeof(&arr));//4/8字节-整个数组地址大小
	//printf("%d\n", sizeof(&arr + 1));//4/8字节-等同于整个数组地址大小
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8-数组元素地址大小

	//printf("%d\n", strlen(arr));//随机值没有'\0'
	//printf("%d\n", strlen(arr+0));//随机值
	//printf("%d\n", strlen(*arr));//*arr为字符'a',不符合strlen（）内参数形式，会报错
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr+1));//随机值
	//printf("%d\n", strlen(&arr[0]+1));//随机值





	//*******************字符串数组

	//char arr[] = "abcdef";
	////有'\0'
	//printf("%d\n", sizeof(arr));//7字节-整个数组的大小
	//printf("%d\n", sizeof(arr + 0));//4/8 字节
	//printf("%d\n", sizeof(*arr));//1字节
	//printf("%d\n", sizeof(arr[1]));//1字节
	//printf("%d\n", sizeof(&arr));//4/8字节-整个数组的地址的大小
	//printf("%d\n", sizeof(&arr + 1));//4/8字节-等同于整个数组的地址的大小
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8字节-第二个元素的地址的大小


	//printf("%d\n", strlen(arr));//6字节-有'\0'
	//printf("%d\n", strlen(arr + 0));//6字节-同上
	//printf("%d\n", strlen(*arr));//错误-非地址
	//printf("%d\n", strlen(arr[1]));//err-取出的是arr数组第二个元素，非地址*****************
	//printf("%d\n", strlen(&arr));//6字节
	//printf("%d\n", strlen(&arr + 1));//随机值-6
	//printf("%d\n", strlen(&arr[0] + 1));//5

	



	char* p = "abcdef";//***********************
	//printf("%d\n", sizeof(p));//4/8字节-指针大小
	//printf("%d\n", sizeof(p + 1));//4/8字节
	//printf("%d\n", sizeof(*p));//1字节-元素a
	//printf("%d\n", sizeof(p[0]));//p[0]等价于*(p+0)   1字节****************
	//printf("%d\n", sizeof(&p));//4/8字节
	//printf("%d\n", sizeof(&p+1));//4/8字节
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 第二个元素地址的大小

	printf("%d\n", strlen(p));//6字节
	printf("%d\n", strlen(p+1));//5字节
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//************err-同上
	printf("%d\n", strlen(&p));//随机
	printf("%d\n", strlen(&p+1));//随机
	printf("%d\n", strlen(&p[0]+1));//5字节

	return 0;
}