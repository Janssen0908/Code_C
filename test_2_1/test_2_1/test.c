#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//1 4 7 10 13 16 19 22


//��д������һ��1-100�������г��ֶ��ٸ�����9��

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	float num = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		//if (i % 2 != 0)//����ĸiΪ����ʱ
//		//{
//		//	num += 1.0 / i;
//		//}
//		//else//��ĸiΪż��
//		//{
//		//	num -= 1.0 / i;
//		//}
//
//		//��2
//		num += flag * (1.0 / i);
//		flag = -flag;
//	}
//
//	printf("%f\n", num);
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { -20,-12,-34,56,23,87,-47,-83,-32,-38 };//�������
//	int i = 0;
//	int MAX = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > MAX)
//		{
//			MAX = arr[i];
//		}
//	}
//	printf("%d\n", MAX);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//			for (j = 1; j <= i; j++)
//			{
//				printf(" %d * %d = %-2d ",i,j, i*j);
//			}
//			printf("\n");
//	}
//	return 0;
//}

//void print_table(int n)//�����������������ܹ���ӳ�����Ĺ��ܡ�
//{
//	int j = 0;
//	int k = 0;
//	for (j = 1; j <= n; j++)
//	{
//		for (k = 1; k <= j; k++)
//		{
//			printf("%d * %d = %-2d", j, k, j * k);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print_table(i);
//	return 0;
//}


//my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//
////�ݹ鷽����
////void reverse_string(char* str)
////{
////	char tmp = *str;
////	int len = my_strlen(str);
////	*str = *(str + len - 1);
////	*(str + len -1) = '\0';
////
////	if (my_strlen(str + 1) > 1)
////	{
////		reverse_string(str + 1);
////	}
////	*(str + len - 1) = tmp;
////}
//int main()
//{
//	char arr[] = { "abcdef" };
//	printf("��תǰ��%s\n", arr);
//	reverse_string(arr);
//	printf("��ת��%s\n", arr);
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//		return  DigitSum(n / 10) + (n % 10);
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n", DigitSum(i));
//	return 0;
//}


//int Pow(int x, int y)
//{
//	if (y == 0)
//		return 1.0;
//	if (y == 1)
//		return x;
//	if (y > 1)
//	{
//		while (y) 
//		{
//			return x * Pow(x, y - 1);
//		}
//	}
//}
double Pow(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k > 0)
		return n * Pow(n, k - 1);
	else
		return 1.0 / (Pow(n, -k));
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%d��%d�η�= %lf\n", n,k,ret);
	return 0;
}

