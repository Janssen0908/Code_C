#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{


	//***********************���������С

	//int a[] = { 1,2,3,4 };
	////aΪ����
	////sizeof:�����ʽΪaʱ�����������������a�Ĵ�С����λ�ֽ�
	////�����ʽΪ&aʱ�������������a�ĵ�ַ�Ĵ�С
	////�����������������������Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(a));//16�ֽ�
	//printf("%d\n", sizeof(a+0));//a+0Ϊ����a��Ԫ�ص�ַ+0����ʾ��һ��Ԫ�ص�ַ��4/8�ֽ�
	//printf("%d\n", sizeof(*a));//4�ֽ�
	//printf("%d\n", sizeof(a+1));//4/8�ֽ�
	//printf("%d\n", sizeof(a[1]));//4�ֽ�

	//printf("%d\n", sizeof(&a));//��������ĵ�ַ 4/8�ֽ�
	//printf("%d\n", sizeof(*&a));//���� 16�ֽ�
	//printf("%d\n", sizeof(&a + 1));//���ǵ�ͬ��&a��4/8�ֽ�
	//printf("%d\n", sizeof(&a[0]));//4/8�ֽ�
	//printf("%d\n", sizeof(&a[0] + 1));//4/8�ֽ�



	////**************�����ַ������С

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6�ֽ�-���������С
	//printf("%d\n", sizeof(arr+0));//4/8�ֽ�-��1��Ԫ�ص�ַ��С
	//printf("%d\n", sizeof(*arr));//1�ֽ�-arr�����þ��������һ��Ԫ�ش�С
	//printf("%d\n", sizeof(arr[1]));//1�ֽ�-����ڶ���Ԫ�ش�С********��		
	//printf("%d\n", sizeof(&arr));//4/8�ֽ�-���������ַ��С
	//printf("%d\n", sizeof(&arr + 1));//4/8�ֽ�-��ͬ�����������ַ��С
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8-����Ԫ�ص�ַ��С

	//printf("%d\n", strlen(arr));//���ֵû��'\0'
	//printf("%d\n", strlen(arr+0));//���ֵ
	//printf("%d\n", strlen(*arr));//*arrΪ�ַ�'a',������strlen�����ڲ�����ʽ���ᱨ��
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr+1));//���ֵ
	//printf("%d\n", strlen(&arr[0]+1));//���ֵ





	//*******************�ַ�������

	//char arr[] = "abcdef";
	////��'\0'
	//printf("%d\n", sizeof(arr));//7�ֽ�-��������Ĵ�С
	//printf("%d\n", sizeof(arr + 0));//4/8 �ֽ�
	//printf("%d\n", sizeof(*arr));//1�ֽ�
	//printf("%d\n", sizeof(arr[1]));//1�ֽ�
	//printf("%d\n", sizeof(&arr));//4/8�ֽ�-��������ĵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(&arr + 1));//4/8�ֽ�-��ͬ����������ĵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8�ֽ�-�ڶ���Ԫ�صĵ�ַ�Ĵ�С


	//printf("%d\n", strlen(arr));//6�ֽ�-��'\0'
	//printf("%d\n", strlen(arr + 0));//6�ֽ�-ͬ��
	//printf("%d\n", strlen(*arr));//����-�ǵ�ַ
	//printf("%d\n", strlen(arr[1]));//err-ȡ������arr����ڶ���Ԫ�أ��ǵ�ַ*****************
	//printf("%d\n", strlen(&arr));//6�ֽ�
	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
	//printf("%d\n", strlen(&arr[0] + 1));//5

	



	char* p = "abcdef";//***********************
	//printf("%d\n", sizeof(p));//4/8�ֽ�-ָ���С
	//printf("%d\n", sizeof(p + 1));//4/8�ֽ�
	//printf("%d\n", sizeof(*p));//1�ֽ�-Ԫ��a
	//printf("%d\n", sizeof(p[0]));//p[0]�ȼ���*(p+0)   1�ֽ�****************
	//printf("%d\n", sizeof(&p));//4/8�ֽ�
	//printf("%d\n", sizeof(&p+1));//4/8�ֽ�
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 �ڶ���Ԫ�ص�ַ�Ĵ�С

	printf("%d\n", strlen(p));//6�ֽ�
	printf("%d\n", strlen(p+1));//5�ֽ�
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//************err-ͬ��
	printf("%d\n", strlen(&p));//���
	printf("%d\n", strlen(&p+1));//���
	printf("%d\n", strlen(&p[0]+1));//5�ֽ�

	return 0;
}