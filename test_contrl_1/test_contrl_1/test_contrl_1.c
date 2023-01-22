#include <stdio.h>

//变量的作用域和生命周期
//通俗讲，这个变量在哪里使用，那里就是它的作用域；


//int asd = 333;//全局变量
//int main()
//{
//
//	printf("1:%d\n",asd);
//
//	{
//		printf("2:%d\n", asd);
//
//
//		int a = 10;
//		printf("%d\n", a);
//	}
//
//	printf("3:%d\n", asd);
//	return 0;
//}

//int main()
//{
//	{
//		int a = 12;
//		printf("%d\n", a);
//	}
//	return 0;
//}


//int main()
//{
//	const int num = 10;//变量
//	num = 20;
//	printf("%d\n", num);
//	return 0;
//}
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int a = 10;
//	int arr2[a] = { 0 };
//	return 0;
////}
//#define MAX 10000
//int main()
//{
//	int n = MAX;
//	//MAX = 20;  err
//	printf("%d\n", n);
//	return 0;
//}
enum Sex
{
	Male,
	Famale,
	Secret
};
int main()
{
	enum Sex s = Male;
	printf("%d\n", Male);
	printf("%d\n", Famale);
	printf("%d\n", Secret);

	return 0;
}