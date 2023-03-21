#define   _CRT_SECURE_NO_WARNINGS
#include "struct.h"

//复杂对象

//库中有int型、char型等，创建一个书的类型
//
//struct Book
//{
//
//	//描述书的特性（变量）
//	char name[20];
//	float price;
//	char id[20];
//
//}b4,b5,b6;//b4,b5,b6相当于直接创建出来的，等同于低24行，不过在这里创建是全局变量（主函数外创建）
//
//
//struct
//{
//	int a;
//	char b;
//	float c;
//
//}S;//匿名结构体类型
//
//
//struct
//{
//	int a;
//	char b;
//	float c;
//
//}* ps;


//struct Node
//{
//	int data;
//	struct Node* next;//结构体自引用，包含的是同结构体类型的指针
//};
//
//typedef struct  Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
///*	struct Book b1;
//	struct Book b2;
//	struct Book b3;*///局部变量
//
//	//ps = &S;
//	return 0;
//}



//
//struct S
//{
//	char c;
//	int i;
//}s1,s2;
//
//
//struct B
//{
//	double d;
//	struct S e;
//};
//int main()
//{
//	struct S s3 = {'d',20};
//	struct S s4 = {'u',2};
//
//	struct B ns = { 3.23,{'s',100}};
//	printf("%lf\n",ns.d);
//	printf("%c\n",ns.e.c);
//	printf("%d\n",ns.e.i);
//	return 0;
//}



struct S
{
	int i;
	char c;
};


int main()
{
	struct S s = { 0 };
	printf("%d", sizeof(s));//输出8而不是5，《内存对齐》
	return 0;
}