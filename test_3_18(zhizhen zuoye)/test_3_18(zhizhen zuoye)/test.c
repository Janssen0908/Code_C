#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	//int* p = NULL;
//	//int arr[10] = { 0 };
//	//int (*ptr)[10] = &arr;
//
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3 = "hello bit.";
//	return 0;
//}



//���Ͼ���

//
//int Find_num(int arr[3][3], int k, int*xp, int* yp)
//{
//	int x = 0;
//	int y = *yp - 1;
//	while (x < *xp && *yp >= 0)
//	{
//		if (arr[x][y] < k)
//			x++;
//		else if (arr[x][y] > k)
//			y--;
//		else
//		{
//			*xp = x;
//			*yp = y;
//
//			//printf("%d %d\n", x, y);
//			return 1;
//		}
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = Find_num(arr, k, &x, &y);
//
//	if (ret == 1)
//	{
//		printf("�ҵ���");
//		printf("�±�Ϊ��%d %d\n", x, y);
//	}
//
//	else
//		printf("�Ҳ���");
//	return 0;
//}




//����ת�ַ���

//void left_reverse(char* str, int k)
//{
//	//int* left = str;
//	//int* right = str + sz - 1;
//	//char tmp = 0;
//	//if (k == 1)
//	//{
//	//	tmp = *left;
//	//	*left = *right;
//	//	*right = tmp;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	right = str + sz - k;
//	//	for (i = 0; i <= k; i++)
//	//	{
//	//		tmp = *left;
//	//		*left = *right;
//	//		*right = tmp;
//	//	}
//	//}
//	int n = strlen(str);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//
//		*(str + n - 1) = tmp;
//
//	}
//}
//
//
//int main()
//{
//	char arr[] = "abcdefgh";
//	int k = 2;
//	left_reverse(arr, k);
//
//	printf("%s\n",arr);
//
//	return 0;
//}



//************������ת����������

//
#include <assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//left_reverse(char* str, int k)
//{
//
//	int n = strlen(str);
//	reverse(str,str+k-1);//���
//	reverse(str + k, str + n - 1);//�ұ�
//	reverse(str,str+n-1);//����
//}
//
//
//int main()
//{
//	char arr[] = "abcdefgh";
//	int k = 2;
//	left_reverse(arr, k);
//
//	printf("%s\n",arr);
//
//	return 0;
//}



//������ٷ�

//int is_string_rotate(char* str1, char* str2)
//{
//	int n = strlen(str1);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		char tmp = *str1;
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//
//		*(str1 + n - 1) = tmp;
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//
//	int ret = is_string_rotate(arr1, arr2);
//
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//		printf("no\n");
//	return 0;
//}


//
//
//int is_string_rotate(char* str1, char* str2)
//{
//	int n = strlen(str1);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		char tmp = *str1;
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//
//		*(str1 + n - 1) = tmp;
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}


//int is_string_rotate(char* str1, char* str2)
//{
//	if (strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//	int len = strlen(str1);
//	//strcat(str1, "qwe");
//	strncat(str1, str1,len);//�Լ�׷���Լ�
//
//	char* ret = strstr(str1, str2);//�ж�һ���ַ����ǲ�����һ���ַ������ִ���
//	//AABCDAABCD
//	//BCDAA
//	//�ҵ��˷���str1ƥ�����ʼ��ַ���Ҳ�������һ����ָ��
//	return (ret == NULL) ? 0 : 1;
//}
//
//
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "BCDAA";
//
//	int ret = is_string_rotate(arr1, arr2);
//
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//		printf("no\n");
//	return 0;
//}




