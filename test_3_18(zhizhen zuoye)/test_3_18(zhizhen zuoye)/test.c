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



//杨氏矩阵

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
//		printf("找到了");
//		printf("下标为：%d %d\n", x, y);
//	}
//
//	else
//		printf("找不到");
//	return 0;
//}




//左旋转字符串

void left_reverse(char* str, int k)
{
	//int* left = str;
	//int* right = str + sz - 1;
	//char tmp = 0;
	//if (k == 1)
	//{
	//	tmp = *left;
	//	*left = *right;
	//	*right = tmp;
	//}
	//else
	//{
	//	int i = 0;
	//	right = str + sz - k;
	//	for (i = 0; i <= k; i++)
	//	{
	//		tmp = *left;
	//		*left = *right;
	//		*right = tmp;
	//	}
	//}
	int n = strlen(str);
	int i = 0;
	for (i = 0; i < k; i++)
	{
		char tmp = *str;
		int j = 0;
		for (j = 0; j < n; j++)
		{
			*(str + j) = *(str + j + 1);
		}

		*(str + n - 1) = tmp;

	}
}


int main()
{
	char arr[] = "abcdefgh";
	int k = 2;
	left_reverse(arr, k);

	printf("%s\n",arr);

	return 0;
}
