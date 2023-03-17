#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48字节
//	printf("%d\n", sizeof(a[0][0]));//4字节
//	printf("%d\n", sizeof(a[0]));//16字节-第一行的数组名
//	printf("%d\n", sizeof(a[0]+1));//4/8字节，第一行第二个元素的地址的大小*********
//	printf("%d\n", sizeof(*(a[0]+1)));//4字节，一行二列元素的大小
//	printf("%d\n", sizeof(a+1));//4/8字节，a[1]地址的大小
//	printf("%d\n", sizeof(*(a+1)));//16
//	printf("%d\n", sizeof(&a[0]+1));//4/8字节 - 第二行的地址大小
//	printf("%d\n", sizeof(*(&a[0]+1)));//16字节 - 第二行的大小
//	printf("%d\n", sizeof(*a));//16字节 - 二维数组首元素为第一行*******************
//	printf("%d\n", sizeof(a[3]));// 值属性、类型属性sizeof不会真正越界访问a[3]*******************
//	return 0;
//}



//int main()
//{
//	short a = 5;
//	int b = 4;
//	printf("%d\n", sizeof(a = b + 6));
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//      2  5
//
//	return 0;
//}



//由于还没学习结构体，这里告知结构体的大小是20个字节
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;//p:结构体指针->访问元素
//假设p 的值为0x100000。 如下表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
int main()
{
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
	return 0;