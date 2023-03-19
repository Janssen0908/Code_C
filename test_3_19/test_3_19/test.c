#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//			count++;
//			str++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "abcd";
//	//char arr[] = { 'a','b','c' };
//	printf("%d\n",my_strlen(arr));
//
//	//my_strlen(arr);
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//找dest中的'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	//char arr2[] = "hello bit.";
//	char arr2[] = "hello bit.";
//	//strcpy(arr1, arr2);
//	//strcpy(arr1, p);
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	char arr[20] = "abcd";
//	strncat(arr, arr, 4);
//	printf("%s\n", arr);
//	return 0;
//}



//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 =='\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//	    return 1;
//	}
//	else if (*str1 < *str2)
//	{
//		return -1;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char arr1[] = "hello bit.";
//	char arr2[] = "hello bit.";
//	//int ret = strcmp(arr1, arr2);//相同返回0；不同返回<0/>0
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr1[20] = "abcdefg";
//	char arr2[] = "abcf";
//	//strncpy(arr1, arr2, 2);
//
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//
//
//
//	int ret = strncmp(arr1, arr2, 3);
//	printf("%d\n", ret);
//
//
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "bcdi";
//
//	//在arr1中查找arr2；
//	char* ret = strstr(arr1,arr2);//找第一次出现的位置
//	if (ret == NULL)
//	{
//		printf("没找到");
//	}
//	else
//		printf("找到了：%s\n", ret);//找到了返回地址
//	return 0;
//}


//char* my_strstr(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	char* s1 = str1;
//	char* s2 = str2;
//
//}
//
//
//
//
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "bcdi";
//
//	//在arr1中查找arr2；
//	char* ret = my_strstr(arr1, arr2);//找第一次出现的位置
//	if (ret == NULL)
//	{
//		printf("没找到");
//	}
//	else
//		printf("找到了：%s\n", ret);//找到了返回地址
//	return 0;
//}


//int main()
//{
//	char arr[] = "Janssen0908@163.com";
//	char* p = "@.";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//
//	char* ret = NULL;
//	//ret = strtok(tmp, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}


int main()
{
	printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	printf("%s\n", strerror(3));
	printf("%s\n", strerror(4));
	printf("%s\n", strerror(5));
	return 0;
}