#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>


//char* my_strstr(char* str1,const char* str2)
//{
	//assert(str1 && str2);
	//char* s1 = NULL;
	//char* s2 = NULL;
	//char* ss1 = str1;
	//if (*str2 == '\0')
	//{
	//	return str1;
	//}
	//while (*ss1)
	//{
	//	s1 = ss1;
	//	s2 = str2;

	//	while (s1 && s2 && (* s1 == *s2))
	//	{
	//		s1++;
	//		s2++;
	//	}
	//	if (*s2 == '\0')
	//	{
	//		return (char*)ss1;
	//	}
	//	ss1++;                                  
	//}
	//return NULL;
//
//	assert(str1 && str2);
//	//int ret = strcmp(str1, str2);
//	int len = strlen(str1);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cp = str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		if (strncmp(s1, s2, len) == 0)
//		{
//			return (char*)cp;
//		}
//		cp++;
//		s2 = str2;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "asdbfjdsgh";
//	char arr2[] = "bfj";
//
//	char* ret = my_strstr(arr1, arr2);
//
//	if (ret == NULL)
//	{
//		printf("没找到");
//	}
//	else
//		printf("找到了");
//	return 0;
//}



