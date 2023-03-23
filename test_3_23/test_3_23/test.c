#define   _CRT_SECURE_NO_WARNINGS

#include "test.h"


//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
	//动态内存开辟典型错误

	//1.对NULL的解引用操作
	// 
	//int* pc = (int*)malloc(100000000000000 * sizeof(int));
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	pc[i] = i;//非法访问内存
	//}
	//总结：要对malloc函数的返回值做判空处理

	//2.对动态开辟内存空间的越界访问

	//int* p = (int*)malloc(10 * sizeof(int));//只开辟了10个整形空间
	//if (p == NULL)
	//{
	//	return 1;
	//}
	//int i = 0;
	//for (i = 0; i < 40; i++)//要去访问40个int空间，产生越界访问
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;
	//总结：要注意开辟的空间单位是字节


	//3.对非动态内存空间使用free

	//int arr[10] = { 10 };
	//int* p = arr;//栈区

	//free(p);
	//p = NULL;
	//return 0;
	//错误引用会导致进程卡死


	//4.使用free释放动态内存开辟的一部分

	//int* pc = (int*)malloc(10 * sizeof(int));
	//if (pc == NULL)
	//{
	//	return 1;
	//}

	//int i = 0;
	//for (i = 0; i < 5; i++)
	//{
	//	*(pc + i) = i;
	//}
	//free(pc);//会导致内存泄漏
	//pc = NULL;//


	//5.对同一动态内存多次释放

	//int* p = (int*)malloc(100);
	////使用
	//free(p);
	//p = NULL;//避免方法
	//free(p);


	//6.动态内存开辟忘记释放
	//test();

	//内存释放的两种方式：
	//1. free
	//2. 程序结束
//	return 0;
//}






//void GetMemory(char* p)//p是str的一份临时拷贝p == NULL
//{
//	p = (char*)malloc(100);
//}//p返回的时候已经造成内存泄漏了
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//
//}



//char* GetMemory(char* p)//p是str的一份临时拷贝p == NULL
//{
//	p = (char*)malloc(100);
//	return p;
//}//p返回的时候已经造成内存泄漏了
//void Test(void)
//{
//	char* str = NULL;
//	char* str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//
//}

//
//void GetMemory(char** p)//p是str的一份临时拷贝p == NULL
//{
//	*p = (char*)malloc(100);
//}//p返回的时候已经造成内存泄漏了
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//
//}




//******************************************************************
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//此时，char p[]已经还给了操作系统，找不到hello world
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}




//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//
//	//注意要free
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}




void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free后一定要置为NULL
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}
