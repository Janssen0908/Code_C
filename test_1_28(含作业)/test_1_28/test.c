#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//
//
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//**数组的数组名本来就是地址，所以不用取地址&
//	printf("请确认密码(Y/N):>");
//	int clean = 0;
//	while ((clean=getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if ('Y'==ch)
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//
//
//	return 0;
//}

//
//int main()//基本书写形式
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//循环零次，因为表达式k=0，意味着表达式为假，不执行
//	{
//		k++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do {
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	do {
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do {
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 1;
//	int add = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		for (sum = 1,j = 1; j <= i; j++)//计算n的阶乘之前把sum的值置为1；
//		{
//			
//			sum *= j;
//		}
//		add += sum;
// 
// 
// //法2  
//	
//	printf("%d\n", add);
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 1;
	int left = 0;
	int right = 9;
	int mid = 0;
	//int i = 0;
	//for (i = 0;i < right;i++)
	//{
	//	mid = (left + right) / 2;
	//	if (arr[mid] == k)
	//	{
	//		printf("已找到，下标为：%d\n", mid);

	//		break;
	//	}
	//	else if (k > arr[mid])
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		right = mid - 1;
	//	}

	//}
	while (left != right)
	{
		mid = (right + left) / 2;
		if (k > arr[mid])
		{
			left = mid + 1;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了：下标为%d\n", mid);
			break;
		}
	}
	return 0;
}