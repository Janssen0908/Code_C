#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//第一次作业，（b站27节）
//1.C   2.D   3.1(全局与局部名字重复，局部优先)   4.C   5.C   6.C   7.B   8.B   9.B   10.C （#define，#include是预处理指令）  11.B   12.C   13.C(contiune)  14.



//int a = 10;
//int main()
//{
//	int a = 1;
//	printf("%d\n", a);
//	return 0;
//}


//int count(int x, int y)//18——33求两个数的最大值
//{
//	x > y ? x : y;//方法一
//	if (x > y)
//		return x;
//	else
//		return y;//方法二
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	int max = count(a, b);
//	printf("最大值为：%d\n", max);
//	return 0;
//}


//
//int main()
//{
//	static int a = 0;
//	a = 80;
//	printf("%d\n", a);
//	return 0;
//}

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", sum(a));
//	}
//	return 0;
//}


int main()//判断一个整数是否能被5整除

{
	int a = 0;
	scanf("%d", &a);
	if (a % 5 == 0)
	{
		printf("YES\n");
	}
	else
		printf("NO\n");
	return 0;
}