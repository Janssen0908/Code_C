#define   _CRT_SECURE_NO_WARNINGS
#include "memy.h"


//strerror:把错误码转换为错误信息->打印
//perror:直接打印错误信息；
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	char ch = 'w';
//	//int ret = isdigit(ch);//是数字字符返回非零，否则返回零
//	int ret = islower(ch);
//
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr[20];
//	//char* str = gets();
//	//char* s1 = str;
//	scanf("%s", arr);
//
//
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//	//printf("%s\n", s1);
//	return 0;
//}




//memcpy：直接拷贝内存块，无需考虑数值内容


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1, 20);
//
//	//int i = 0;
//	//int size = sizeof(arr1);
//	/*for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", arr2[i]);
//
//	}*/
//	return 0;
//}

//
//void* my_memcpy(void* dest, const void* src, size_t n)
//{
//	assert(dest && src);
//	while (n)
//	{
//		*((char*)dest) = *((char*)src);
//
//		//调整
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//		n--;
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	my_memcpy(arr2, arr1, 20);
//	return 0;
//}



//memmove

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	memmove(arr1+2, arr1, 20);//可以处理内存重叠的情况
//	return 0;
//}

// 
//void* my_memmove(void* dest, const void* src, size_t n)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	if (dest < src)//从前向后拷贝
//	{
//		while (n--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = *(char*)dest;
//			src = *(char*)src;
//		}
//	}
//	else//从后向前
//	{
//		while (n--)
//		{
//			*((char*)dest + n) = *((char*)src + n);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	my_memmove(arr1+2, arr1, 20);//可以处理内存重叠的情况
//	return 0;
//}


//void* my_memmove(void* dest, const void* src, size_t n)
//{
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (n--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}//循环20次
//	}
//	else
//	{
//		while (n--)
//		{
//			*((char*)dest + n) = *((char*)src + n);
//		}
//	}
//
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memmove(arr1 + 2, arr1, 20);
//	return 0;
//}





//memcmp

//int main()
//{
//
//	float arr1[] = { 1.0,2.0,3.0,4.0,5.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2,8);
//	printf("%d\n", ret);
//	return 0;
//}






//memset(void*ptr,int x,size_t n):把ptr所指向空间的n个字节的内容置为x 

int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 20);//20字节->五个元素

	return 0;
}