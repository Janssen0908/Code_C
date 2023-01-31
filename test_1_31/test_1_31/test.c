#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}



//int main()///死回归
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


//int main()
//{
//
//	return 0;
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10); 
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//123
//	print(num);
//	return 0;
//}

//void test(int x)
//{
//	if (x < 10000)
//	{
//		test(x + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//int main()
//{
//	char arr[] = { "bit" };
//	//['b'] ['i'] ['t'] ['\0']
//
//	printf("%d\n", strlen(arr));
//	return 0;
//}


//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//
//int my_strlen(char*str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = { "bit" };
//	//['b'] ['i'] ['t'] ['\0']
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//int Fac(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	else
//		return x * Fac(x - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fac(n));
//	return 0;
//}
//int count = 0;

int Fib(int n)
{
	//if (n == 3)
	//	count++;

	//if (n <= 2)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return Fib(n - 1) + Fib(n - 2);
	//}
	int a, b, c = 0;
	a = 1;
	b = 1;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		while (n>2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
		return c;
	}

}



int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("第%d个斐波那契数为：%d\n",num,Fib(num));
	//printf("%d\n", count);
	return 0;
}