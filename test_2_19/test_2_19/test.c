#define   _CRT_SECURE_NO_WARNING

#include <stdio.h>


/*int my_strlen(char* str )
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);
	return 0;
}    */


//指针和数组名
//int main()
//{
//	//int arr[10] = { 0 };
//	////数组名是数组首元素的地址
//	//printf("%p\n",arr);
//	//printf("%p\n",&arr[0]);
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p <==>  %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//两者相同   *(p + 2) == arr[2];
//
//	printf("%d\n", 2[arr]);// [] 是一个操作符，2 和 arr 是两个操作数
//	return 0;
//}


//二级指针


//int main()
//{
//	int a = 10;
//	int* pa = &a;//一级指针
//
//	int** ppa = &pa;//二级指针
//
//	**ppa = 3;
//	printf("%d\n", a);
//
//	return 0;
//}


//指针数组


//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 'q','w','e','r','t' };//字符数组
//
//	//指针数组
//		int* parr[10];//整型指针的数组
//		char* pac[5];
//	return 0;
//}

//struct B
//{
//	char d;
//	int a;
//	double p;
//};
//struct stu
//{
//	struct B ns;
//	char name[20];
//	int age;
//	char id[20];
//	float high;//定义成员变量
//}; s1, s2;//整个结构体相当于int、char、float等
//
////s1 s2 是全局变量
//
//int main()
//{
//
//	//s为局部变量
//	struct stu s = { {'e',20,39.93},"张三",18,23421412,178.4 };//结构体的初始化 
//	struct stu* ps = &s;
//	struct B* pb = &ns;
//	printf("%c ", s.ns.d);
//	printf("%d ", s.ns.a);
//
//	printf("%s ", s.name);
//	printf("%d ", ps->age);
//	printf("%c ", ps->ns.d);
//
//
//	return 0;
//}


//
//struct B
//{
//	char a;
//	int b;
//	double c;
//};
//struct stu
//{
//	struct B ns;
//	char name[20];
//	int age;
//	char id[20];
//	float high;
//};
//
//void print1(struct stu t)
//{
//	printf("%c %d %lf %s %d %s %f\n", t.ns.a, t.ns.b, t.ns.c, t.name, t.age, t.id, t.high);
//};
//
//void print2(struct stu* pa)
//{
//	printf("%c %d %lf %s %d %s %f\n", pa->ns.a, pa->ns.b, pa->ns.c, pa->name, pa->age, pa->id, pa->high);
//}
//int main()
//{
//	struct stu s = { {'e',20,39.93},"张三",18,"1234435",178.4};
//
//	print1(s);//传值
//	print2(&s);//传址（优先选择）
//	//原因：不需要重复开辟空间
//	return 0;
//}
int Add(int a, int b)
{
	int z = 0;
	z = a + b;
	return z;
}
int main()
{
	int a = 9;
	int b = 6;
	int c = 0;
	c = Add(a, b);
	return 0;
}