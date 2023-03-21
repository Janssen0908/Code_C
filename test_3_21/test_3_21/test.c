#define   _CRT_SECURE_NO_WARNINGS

#include "strcuct.h"



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



//struct S
//{
//	int i;
//	char c;
//};
//
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d", sizeof(s));//输出8而不是5，《内存对齐》
//	return 0;
//}


//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));//12
//	return 0;
//
//
//	//结构体第一个成员放在内存中存储位置的0偏移量处
//	//后面所有成员放在对齐数的整数倍处
//	//对齐数：成员大小和默认对齐数的最小值（vs）默认8
//	//结构体的总大小为所有对齐数中最大的整数倍
//
//
//}

//eg

//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));//16
//
//	return 0;
//}

//int main()
//{
	//struct S2
	//{
	//	char c1;
	//	char c2;
	//	int i;
	//};
	//printf("%d\n", sizeof(struct S2));
	//struct S3
	//{
	//	double d;
	//	char c;
	//	int i;
	//};
	//printf("%d\n", sizeof(struct S3));//16s


//#pragma pack(2)
//	struct S3
//	{
//		double d;
//		char c;
//		int i;
//	};
//	//printf("%d\n", sizeof(struct S3));
//
//	struct S4
//	{
//		char c1;
//		struct S3 s3;//对齐到s3内最大对齐数的整数倍
//		double d;
//	};
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}
//#pragma pack() 


//
//#include <stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}
//offsetof




//结构体传参（传地址）

//struct S
//{
//	int data[1000];
//	int num;
//};


//位段：目的是节省空间，给实际上取值不大的成员创建

//struct S
//{
//	int _a : 2;//_a成员占2个比特位
//	int _b : 5;//5bit 位
//	int _c : 10;//10bit 位
//	int _d : 30;//30bit 位//此时不够放，在开辟4个字节
//	//所以一共是8个字节
//
//	//看到第一个int，先给4字节（32bit位），开始放，不够了再创建
//};






//枚举：可以一一列举的事务


//enum Color//声明枚举类型
//{
//	RED = 5,//为常量（可能取值）——————区别结构体中的成员
//	GREEN,
//	BLUE,
//	//RED = 8
//};
//enum Sex
//{
//	man,
//	women,
//	unknown
//};
//
//int main()
//{
//
//	//enum Color c = 2;//err
//
//	enum Color c = BLUE;
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	return 0;
//}

//
//void menu()
//{
//
//	printf("*************************************\n");
//	printf("********1. add        2. sub*********\n");
//	printf("********3. mul        4. div*********\n");
//	printf("********       0. exit      *********\n");
//	printf("*************************************\n");
//}
//
//
//
//enum Option
//{
//	EXIT,//0
//	ADD,//1
//	SUB,//2
//	MUL,//3
//	DIV//4
//};//增强代码的可读性
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入：_>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case ADD:
//				break;
//		case SUB:
//			break;
//		case MUL:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	return 0;
//}


//联合体、共用体
//这种类型定义的变量也包含一系列的成员，特征是这些成员公用同一块空间（所以联合也叫共用体）
//

//union un
//{
//	//联合体成员
//	char c;
//	int i;
//
//	//i和c共用了第一个字节的空间，至少是最大成员的大小
//
//};
//
//int main()
//{
//	union un u = {10};
//	u.i = 1000;
//	u.c = 'e';//同一时间，只能用一个变量
//
//	//多个成员，享有同一处空间
//	printf("%d\n", sizeof(u));//4字节
//
//
//
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);//三个结果一致
//	return 0;
//}

//
//int check_sys()
//{
//	union check
//	{
//		char c;
//		int i;
//	}h;
//	h.i = 1;
//	return h.c;
//}
//
//int main()
//{
//	//int a = 0x11223344;
//	//int a = 0x00000001;
//	//if (*((char*)&a) == 1)
//	//{
//	//	printf("小端存储\n");
//	//}
//	//else
//	//	printf("大端存储\n");
//
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//		printf("大端存储\n");
//
//
//	return 0;
//}






union Un
{
	//联合的大小至少是最大成员的大小。
	//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。
	//char a[5];//1--5
	//char c;//4


	short s[5];//对齐到12
	int i;
	//最大对齐数：s:2     i:4   ->4字节

};


int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}