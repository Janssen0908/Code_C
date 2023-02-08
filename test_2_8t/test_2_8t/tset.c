#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", arr[4]);//[]访问数组下标为4的元素，数组默认从零开始，结果为5
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);//这个（ ）符号就是函数调用操作符
//	return 0;
//}

	//printf("书名：%s\n", shu1.name);
	//printf("书号：%s\n", shu1.id );
	//printf("定价：%f\n", shu1.price );

struct Book
{
	char name[20];
	char id[20];
	float price;
};

int main()
{
	struct Book shu1 = { "c语言","235446365",12.6};

	struct Book* pb = &shu1;
	printf("书名：%s\n", pb->name);
	printf("书号：%s\n", pb->id );
	printf("定价：%f\n", pb->price);



	return 0;
}