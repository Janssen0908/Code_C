#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()//栈区：先使用高地址 再使用低地址
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}



//int main()
//{
//
//	return 0;
//}

//void my_strcpy(char* dst, char* src,int sz)
//{
//	while (*src != '\0')
//	{
//		*dst = *src;
//		src++;
//		dst++;
//	}//拷贝hello；‘\0’
//	*dst = *src;//拷贝‘\0’
//}
//
//int main()
//{
//	char arr1[20] = "XXXXXXXXXXXXX";
//	char arr2[] = "hello";//包括“\0”都拷贝过去
//	//strcpy(arr1, arr2);
//
//	int sz = strlen(arr2);
//	/*int sz = sizeof(arr2) / sizeof(arr2[0]);*/
//	my_strcpy(arr1, arr2,sz);
//	printf("%s\n", arr1);
//
//	return 0;
//
//}

//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr2++ = *arr1++;
//	}
//	*arr1 = *arr2;
//}


void my_strcpy(char* dest, char* src)
{
	while (*dest++ != *src++)//'\0'的ascii码值为0；既拷贝了\0,又使得循环停止
	{//先执行表达式，再由表达式结果判断是否进行下一轮
		;
	}
}
int main()
{
	char arr1[] = "xxxxxxxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}