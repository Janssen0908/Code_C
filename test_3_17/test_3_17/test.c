#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48�ֽ�
//	printf("%d\n", sizeof(a[0][0]));//4�ֽ�
//	printf("%d\n", sizeof(a[0]));//16�ֽ�-��һ�е�������
//	printf("%d\n", sizeof(a[0]+1));//4/8�ֽڣ���һ�еڶ���Ԫ�صĵ�ַ�Ĵ�С*********
//	printf("%d\n", sizeof(*(a[0]+1)));//4�ֽڣ�һ�ж���Ԫ�صĴ�С
//	printf("%d\n", sizeof(a+1));//4/8�ֽڣ�a[1]��ַ�Ĵ�С
//	printf("%d\n", sizeof(*(a+1)));//16
//	printf("%d\n", sizeof(&a[0]+1));//4/8�ֽ� - �ڶ��еĵ�ַ��С
//	printf("%d\n", sizeof(*(&a[0]+1)));//16�ֽ� - �ڶ��еĴ�С
//	printf("%d\n", sizeof(*a));//16�ֽ� - ��ά������Ԫ��Ϊ��һ��*******************
//	printf("%d\n", sizeof(a[3]));// ֵ���ԡ���������sizeof��������Խ�����a[3]*******************
//	return 0;
//}



//int main()
//{
//	short a = 5;
//	int b = 4;
//	printf("%d\n", sizeof(a = b + 6));
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//      2  5
//
//	return 0;
//}



//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;//p:�ṹ��ָ��->����Ԫ��
//����p ��ֵΪ0x100000�� ���±��ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
int main()
{
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
	return 0;