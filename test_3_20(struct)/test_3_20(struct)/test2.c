#define   _CRT_SECURE_NO_WARNINGS
#include "struct.h"

//���Ӷ���

//������int�͡�char�͵ȣ�����һ���������
//
//struct Book
//{
//
//	//����������ԣ�������
//	char name[20];
//	float price;
//	char id[20];
//
//}b4,b5,b6;//b4,b5,b6�൱��ֱ�Ӵ��������ģ���ͬ�ڵ�24�У����������ﴴ����ȫ�ֱ������������ⴴ����
//
//
//struct
//{
//	int a;
//	char b;
//	float c;
//
//}S;//�����ṹ������
//
//
//struct
//{
//	int a;
//	char b;
//	float c;
//
//}* ps;


//struct Node
//{
//	int data;
//	struct Node* next;//�ṹ�������ã���������ͬ�ṹ�����͵�ָ��
//};
//
//typedef struct  Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
///*	struct Book b1;
//	struct Book b2;
//	struct Book b3;*///�ֲ�����
//
//	//ps = &S;
//	return 0;
//}



//
//struct S
//{
//	char c;
//	int i;
//}s1,s2;
//
//
//struct B
//{
//	double d;
//	struct S e;
//};
//int main()
//{
//	struct S s3 = {'d',20};
//	struct S s4 = {'u',2};
//
//	struct B ns = { 3.23,{'s',100}};
//	printf("%lf\n",ns.d);
//	printf("%c\n",ns.e.c);
//	printf("%d\n",ns.e.i);
//	return 0;
//}



struct S
{
	int i;
	char c;
};


int main()
{
	struct S s = { 0 };
	printf("%d", sizeof(s));//���8������5�����ڴ���롷
	return 0;
}