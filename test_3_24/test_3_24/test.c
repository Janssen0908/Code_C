#define   _CRT_SECURE_NO_WARNINGS
#include "test.h"


//柔性数组

//struct S
//{
//	int n;
//	int arr[];//大小未知
//};
//int main()
//{
//	//c99中，结构的最后一个元素允许是位置大小的数组，称为柔性数组
//	//struct S s = { 0 };
//	//printf("%d", sizeof(s));//不包含数组
//
//	//如果期望arr的大小是10个int
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
//	//                               n的空间           开辟的数组空间
//
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//
//	//不够的话 增加空间
//
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->arr = (struct S*)malloc(10 * sizeof(int));
	if (p == NULL)
		return 1;
	int i = 0;
	p->n = 10;
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i;
	}

	//增加
	struct S* ptr = (struct S*)realloc(p->arr, 20 * sizeof(int));

	if (ptr != NULL)
	{
		p->arr = ptr;
	}

	free(p->arr);
	p->arr = NULL;

	free(p);
	p = NULL;
	return 0;
}//malloc越多，内存碎片也越多，所以不如柔性数组
//由于局部性原理，柔性数组处理速度也优于普通方法，在一定程度上提高运行速度