#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()//描述一个人的信息
//{
//	int age = 20;//int-变量;age-变量名字
//	double weight = 78.4;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}

//全局变量
//int a = 2000;
//int main()
//{
//	//局部变量
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	//scanf()是输入函数
	scanf("%d %d", &a,& b);
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}