#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int arr[] = { 1,2,(3,4),5,6 };
//	//���ű��ʽֻ����һ����������������һ�����ʽ�Ľ�� ��Ϊ4
//
//	int arr2[] = { 1,2,4,5,6 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}

//int main()
//{
//	char ch [] = "hello bit";
//	printf("%d %d\n", sizeof(ch), strlen(ch));
//	//sizeof����������ռ��С�ո��\0��һ���ֽ�,��Ϊ10������������������
//	//��strlen���ַ���ͷ��ʼ������\0����,��Ϊ9����������������
//	return 0;
//}


init(int a[],int b)
{
	int i = 0;
	for (i = 0; i < b; i++)
	{
		a[i] = 0;
	}
}

void my_print(int a[],int b)
{
	int i = 0;
	for (i = 0; i < b; i++)
	{
		printf("%d ", a[i]);

	}
}


void reverse(int a[],int b)
{
	int tmp = 0;
	int i = 0;
	for (i = 0; i < (b/2); i++)
	{
		tmp = a[i];
		a[i] = a[b];
		a[b] = tmp;
	}
}
int main()
{
	//char a[] = "abcdefg";
	//char b[] = { 'a','b','c','d','e','f','g'};
	////���ߴ�С��ͬ��a�ĳ��ȴ���b��a����\0��
	//return 0;
	int n = 0;
	int a[] = { 1,2,3,4,5 };
	int b = sizeof(a)/sizeof(a[0]);
	my_print(a, b);
	init(a,b);
	reverse(a, b);
	my_print(a,b);
}

