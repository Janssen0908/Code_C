#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int mmain()
//{
//	{
//		auto int a = 10;//自动创建自动销毁
//		int a = 10; //auto常省略
//	}
//	return 0;
//}
//typedef unsigned int u_int;//typedef-类型重命名
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 199;
//	return 0;
////}
//void test()
//{
//	static int a = 1;//a是局部变量，static修饰局部变量，再次进入没有新建a
//	a++;
//	printf("%d\n",a);
//}//a不销毁
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//extern int Add(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 4;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//#define ADD(X,Y) X+Y 
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//} 
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//%p-专门用来打印地址
//	int *pa = &a;
//
//	//*说明pa是指针变量
//	//int说明pa指向的对象是int类型的
//
//
//	char ch = 'w';
//	char *pc = &ch;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(float *));
//	printf("%d\n", sizeof(double *));
//	printf("%d\n", sizeof(long *));
//	printf("%d\n", sizeof(long long *));
//
//
//	//指针的大小相同，指针有多大取决于主存最大空间，32位机器上指针大小就是4字节，64位机器上就是8字节。
//
//
//	return 0;
//}


//结构体可以创建新的类型

//一个学生
struct Stu
{
	char name[20];//成员变量
	int age;
	double score;
};

//一本书
struct book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct Stu s = { "张三",18,85.4 };
	printf("1:%s %d %lf\n", s.name, s.age, s.score);


	struct Stu* pc = &s;
	printf("2:%s %d %lf\n", (*pc).name, (*pc).age, (*pc).score);

	printf("2:%s %d %lf\n", pc->name, pc->age, pc->score);
	return 0;
}
