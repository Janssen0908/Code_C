#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "hello bit" };
//	strcpy(arr1, arr2);//将arr2的内容拷贝到arr1内
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr[20] = { "hello bit" };
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


//int get_max(int x, int y)//注意结果是int型，返回值要写int。
////因为传入的a，b是int型，所以要用int来接受，x与y相当于两个新的{容器}
//{
//	int max = 0;
//	max = x > y ? x : y;
//	return max;
//}//max作为最终结果返回，
//
//
//int main()
//{
//	int a, b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	max = get_max( a, b);//将a，b传入函数中
//	printf("MAX = %d\n", max);
//	return 0;
//}
//
//void Swap(int x, int y)//函数返回类型的地方写出：void，表明这个函数不需要返回任何值，也不需要返回
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：%d %d\n", a, b);
//	Swap(a, b);
//	printf("交换后：%d %d\n", a, b);
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

//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：%d %d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：%d %d\n", a, b);
//	return 0;
//}

#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	//for (j = 2; j < n; j++)
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()//////////打印100-200之间的素数
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if ((is_prime(i) == 1))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}


//int is_leap(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}
//return ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);

//
//int binary_search(int arr1[],int k,int s)
//{
//	int left = 0;
//	int right = s-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr1[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k< arr1[mid])
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	///-----------0 1 2 3 4 5 6 7 8 9
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d\n", sz);
//	//找到了就返回找到元素的下标，
//	//没找到就返回-1
//
//	int ret = binary_search(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//		printf("找到了,下标为：%d\n",ret);
//	return 0;
//} 


//Add(int* n)
//{
//	(* n) += 1;
//}
//
//int main()///////每次调用Add函数时，num+1.
//{
//	int num = 0;
//	Add(&num);//由题，Add函数的调用会改变num，所以要把num的地址传过去
//	printf("%d\n", num);
//
//	Add(&num);//由题，Add函数的调用会改变num，所以要把num的地址传过去
//	printf("%d\n", num);
//
//	Add(&num);//由题，Add函数的调用会改变num，所以要把num的地址传过去
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	
//	//链式访问，由于strlen的返回类型时int型，所以可以写为：
//	printf("%d\n", strlen("abc"));
//	return 0;
//}


//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "hello bit" };
//	printf("%s\n",strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
