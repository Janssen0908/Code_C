#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//将5赋值给i表达式为真，for死循环打印5
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//int main()//输入三个数，输出是三个数的从大到小排列
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a,b,c);
//	return 0;
//}


//int main()//打印1-100 之间3的倍数。
//{
//	int i = 3;
//	while (i < 100)//for(i = 3;i<100;i+=3)
//	{
//		//printf("%d\n", i);
//		//i = i * 3;
//		if (0 == i % 3)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}

//int main()//求最大公约数
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int max = n > m ? m : n;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数为：%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

////////////////辗转相除法
///////最小公倍数：m*n除以最大公约数
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int t = 0;
//	while (m % n)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//	}
//	printf("最大公约数：%d\n", t);
//	return 0;
//}





//////////////打印1000-2000之间的闰年
// //1.能被4整除，但是不能被100整除
// //2.能被400整除
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0))||(i%400==0))//**********************
//		{
//			printf("%d ", i);
//		    count++;
//		}
//	}
//	printf("%d ", count);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//
//		for (j = 2; j < i ; j++)优化：
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}


///////关机程序
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
	again:
	printf("请注意，您的电脑将会在2分钟内关机，输入：我是猪，就会取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//int main()
//{
//
//	return 0;
//}