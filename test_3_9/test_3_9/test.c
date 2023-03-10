#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()//浮点数和整数在内存中的存取不同
//{
//	int  n = 9;
//	float* pFloat = &n;
//	printf("n的值为：%d\n", n);
//	printf("pFloat的值为：%f\n", *pFloat);//以浮点数的视角看
//
//	*pFloat = 9.0;//浮点数的视角 存储9.0
//
//	printf("num的值为：%d\n", n);//以整形的视角取出
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}


//64bit: 1+11+52
//32bit: 1+8+23
//int main()
//{
//
//	float f = 5.5;//101.1    1.011   移码：2+127
//	//s:0    e(移码):10000001    m:01100000000000000000000
//	// //40 b0 00 00
//	//移码 = 偏移量 + 真值
//	//       0111 1111    2：10
//	return 0;
//}

//int main()
//{
//	//char sh = 'w';
//	//char* ch = &sh;
//	//*ch = 'z';
//	//printf("%c\n", sh);
//
//	//char* ps = "hello sadni";//存储的是字符串的首字符‘s’的地址放在了ps里
//
//	//printf("%c\n", *ps);
//
//	//char arr[] = "hello bit";
//	char ch[] = "hello bsudo";
//	char* pc = ch;
//
//	*pc = 'e';
//	printf("%c", *pc);
//
//
//
//	return 0;
//}
//int main()
//{
//	//int* arr[3];//整形指针数组
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[3] = {arr1,arr2,arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);//模拟一个二维数组
//		}
//		printf("\n");
//	}
//
//	return 0;
//}




//数组指针

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'e';
//	char* pc = &ch;
//
//
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr) [10] = &arr;//数组的地址
//	//数组指针
//	arr;//数组首元素的地址
//
//	double* d[5];
//	double *(*pd)[5] = &d;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p = arr;//整型指针
//	int (*p2) [10] = &arr;//数组指针
//
//
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//	return 0;
//}

//int main()
//{
//	//数组名：
//	//sizeof(数组名)：表示整个数组，计算的是整个数组大小，单位字节
//	//&数组名：取出的是整个数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//
//		//(*pa)得到arr数组的地址
//		//(*pa)+i得到arr数组每个元素的地址
//		//((*pa)+i),解引用操作得到元素值
//
//	}
//
//	return 0;
//}

print(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);//打印一行
		}
		printf("\n");//换行
	}
}


//void print2(int (*p)[5],int r,int c)//p:数组指针
//{
//	int i, j = 0;
//	for (i = 0; i < r;i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			//*(p+i) ：指向某一行
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//
//	//print(arr, 3, 5);
//	print2(arr, 3, 5);//arr表示第一行（首元素地址）
//	return 0;
//}

