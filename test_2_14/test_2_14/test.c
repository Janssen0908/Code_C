#define   _CRT_SECURE_NO_WARNINGS
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	int i;
//	double d;//8
//};
//
//
//struct S3
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S4
//{
//	double d;
//	char c;
//	int i;
//};
//struct S5
//{
//	char c1;
//	struct S4 s4;
//	double d;
//};
//#include <stdio.h>
//int main()
//{
//	struct S s = {0};
//	struct S2 s2 = { 0 };
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	struct S5 s5 = { 0 };
//	printf("%d\n", sizeof(s5));//?
//	//printf("%d\n", sizeof(s));
//	//printf("%d\n", sizeof(s2));
//	//printf("%d\n", sizeof(s3));
//	//printf("%d\n", sizeof(s4));//?
//	return 0;
//}


//8:00 ����

#include <stdio.h>

//Ĭ�϶�������8

//��Ĭ�϶�������Ϊ2

//#pragma pack(2)
//struct S
//{
//	char c1;//0
//	int i;//
//	char c2;//
//};
//#pragma pack()

//#pragma pack(1)
//struct S
//{
//	char c1;//1 1 1
//	int i;//4 1 1
//	char c2;//1 1 1
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//
//
//	return 0;
//}


//offsetof

#include <stddef.h>
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//
//	return 0;
//}
//

//
//47 32+15
//

//�Ա� - 3
//00 ��
//01 Ů
//10 ����
//11
//
//struct A
//{
//	//4���ֽ� - 32bit
//	int _a : 2;//_a ��Առ2��bitλ
//	int _b : 5;//_b ��Առ5��bitλ
//	int _c : 10;//_c ��Առ10��bitλ
//	//15
//	//4���ֽ� - 32bit
//	int _d : 30;//_b ��Առ30��bitλ
//};
//16λ - int - 2byte - 16 bit
//32λ - int - 4byte - 32 bit
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}

//#define RED 5
//#define GREEN 8
//#define BLUE 9

//����ö������
//enum Color
//{
//	RED=5,//5
//	GREEN=8,//8
//	BLUE//9
//};
//
//int main()
//{
//	//CPP �﷨�������ϸ�
//	enum Color c = BLUE;
//	printf("%d\n", sizeof(c));
//
//	/*printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);*/
//	printf("%d\n", Color::RED);
//	return 0;
//}


//ö�����;���һ������
//���ξ�������

//
//void menu()
//{
//	printf("*****************************\n");
//	printf("****  1. add    2. sub  *****\n");
//	printf("****  3. mul    4. div  *****\n");
//	printf("****  0. exit          *****\n");
//	printf("*****************************\n");
//}
//
//enum Option
//{
//	EXIT,//0
//	ADD,//1
//	SUB,//2
//	MUL,//3
//	DIV//4
//};
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			break;
//		case SUB:
//			break;
//		case MUL:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		default:
//			break;
//		}
//	} while (input);
//
//
//	return 0;
//}