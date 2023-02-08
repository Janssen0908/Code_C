#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
	//int a = 10;
	//int b = 0;
	//int c = 20;
	//a = b = c + 1;//a = b = 21____a = 21
	//int a = 20;
	//a = a + 10;
	//a += 20;

	//int flag = 0;
	//if (flag)
	//{
	//	printf("hehe\n");
	//}

	//if (flag != 0)
	//{
	//	printf("haha\n");
	//}


	//int a = 10;
	//char arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr[0]));
	//printf("%d\n", sizeof a);
	//short s = 5;
	//int a = 10;
	//printf("%d\n",sizeof(s = a + 2));
	//printf("%d\n", s);

	//int a = -1;
	//a = ~a;

	////1111 1111 1111 1111(-1 的补码)

	////按位取反：0000 0000 0000 0000 
	//printf("%d\n", a);


	//int a = 10;
	//int b = 3;
	//printf("%d\n", ++a);//11 a = 11
	//printf("%d\n", b--);//3 b = 2


	//&a;//通过&取出a的地址
	//printf("%p\n", &a);//000000DA6BAFFA84



	//int a = 10;
	//int* pa = &a;
	//*pa = 20;
	//printf("%d\n",a);//20


	//int a = (int)3.14;
	//printf("%d\n", a);//3


	//int arr[10] = { 0 };
	//char ar[10] = { 0 };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(ar));

	//test1(arr);
	//test2(ar);
	//return 0;
//}



//void test1(int* arr)
//{
//	printf("%d\n", sizeof(arr));//4/8
//}
//
//void test2(char* ar)
//{
//	printf("%d\n", sizeof(ar));//4/8
//}
//
//int main()
//{
//
//	int arr[10] = { 0 };
//	char ar[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ar));//10
//
//	test1(arr);
//	test2(ar);
//	return 0;
//	return 0;
//}


//int main()
//{
	//int a = 10;
	//int b = 3;
	//if (a > 10 && b < 5)
	//{
	//	printf("hehe\n");
	//}


	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	//printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);// 1 2 3 4 

	//int a = 3;
	//int b = 0;
	//int c = a > 5 ? 1 : -1;

	//int a = 3;
	//int b = 5;
	//int c = 0;
	//int d = (c = 5, a = c + 3, b = a - 4, c += b);
	//         5     a = 8       b = 4    c = 10
	//printf("%d\n", d);//10
	//return 0;
//}