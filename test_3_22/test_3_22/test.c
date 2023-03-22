#define   _CRT_SECURE_NO_WARNINGS

#include "test.h"

//int main()
//{
//	//堆区：动态内存开辟
//	// 
//	//malloc free realloc calloc
//	// 
//	//void* malloc(size_t size);
//
//	//开辟成功就会返回这个空间的起始地址，否则返回NULL
//
//	//int arr[10];//栈区
//
//	int* p = (int*)malloc(10000000000*sizeof(int));//堆区
//
//	//默认是void* ，故需要强制类型转换
//
//	if (p == NULL)
//	{
//		perror("p");
//		return 0;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	free(p);//free并不会将p置为空指针
//	p = NULL;//避免野指针
//	return 0;
//}


int main()
{
	//void* calloc (size_t num, size_t size)
	//开辟num个大小为size的空间，并且初始化为0
	//int* pm = (int*)malloc(40);
	//if (pm == NULL)
	//{
	//	return 1;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d\n", pm[i]);//随机值
	//}
	//int* pc = (int*)calloc(10, 4);

	int* pc = (int*)calloc(10, 4);
	if (pc == NULL)
	{
		perror("pc");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//printf("%d\n", *(pc + i));
		pc[i] = 5;
	}

	//再加10个int
	//使用realloc调整空间
	//返回指针指向重新开辟的空间起始地址

	int* ptr =(int*)realloc(pc, 20*sizeof(int));
	
	//有可能返回旧地址（尾部内存足够），
	//也有可能返回新地址（尾部内存不够，开辟新空间，free旧空间）
	//
	// 
	//不能用旧指针接收realloc返回值，因为realloc找不到合适的空间会返回NULL，
	//导致找不到原空间位置
	
	if (ptr != NULL)
	{
		pc = ptr;//返回不为空指针
	}



	int* pr = (int*)realloc(NULL, 20);//此时与malloc相同

	return 0;

}