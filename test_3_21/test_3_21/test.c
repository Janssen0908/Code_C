#define   _CRT_SECURE_NO_WARNINGS

#include "strcuct.h"



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



//struct S
//{
//	int i;
//	char c;
//};
//
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d", sizeof(s));//���8������5�����ڴ���롷
//	return 0;
//}


//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));//12
//	return 0;
//
//
//	//�ṹ���һ����Ա�����ڴ��д洢λ�õ�0ƫ������
//	//�������г�Ա���ڶ���������������
//	//����������Ա��С��Ĭ�϶���������Сֵ��vs��Ĭ��8
//	//�ṹ����ܴ�СΪ���ж�����������������
//
//
//}

//eg

//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));//16
//
//	return 0;
//}

//int main()
//{
	//struct S2
	//{
	//	char c1;
	//	char c2;
	//	int i;
	//};
	//printf("%d\n", sizeof(struct S2));
	//struct S3
	//{
	//	double d;
	//	char c;
	//	int i;
	//};
	//printf("%d\n", sizeof(struct S3));//16s


//#pragma pack(2)
//	struct S3
//	{
//		double d;
//		char c;
//		int i;
//	};
//	//printf("%d\n", sizeof(struct S3));
//
//	struct S4
//	{
//		char c1;
//		struct S3 s3;//���뵽s3������������������
//		double d;
//	};
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}
//#pragma pack() 


//
//#include <stddef.h>
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
//	return 0;
//}
//offsetof




//�ṹ�崫�Σ�����ַ��

//struct S
//{
//	int data[1000];
//	int num;
//};


//λ�Σ�Ŀ���ǽ�ʡ�ռ䣬��ʵ����ȡֵ����ĳ�Ա����

//struct S
//{
//	int _a : 2;//_a��Առ2������λ
//	int _b : 5;//5bit λ
//	int _c : 10;//10bit λ
//	int _d : 30;//30bit λ//��ʱ�����ţ��ڿ���4���ֽ�
//	//����һ����8���ֽ�
//
//	//������һ��int���ȸ�4�ֽڣ�32bitλ������ʼ�ţ��������ٴ���
//};






//ö�٣�����һһ�оٵ�����


//enum Color//����ö������
//{
//	RED = 5,//Ϊ����������ȡֵ������������������ṹ���еĳ�Ա
//	GREEN,
//	BLUE,
//	//RED = 8
//};
//enum Sex
//{
//	man,
//	women,
//	unknown
//};
//
//int main()
//{
//
//	//enum Color c = 2;//err
//
//	enum Color c = BLUE;
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	return 0;
//}

//
//void menu()
//{
//
//	printf("*************************************\n");
//	printf("********1. add        2. sub*********\n");
//	printf("********3. mul        4. div*********\n");
//	printf("********       0. exit      *********\n");
//	printf("*************************************\n");
//}
//
//
//
//enum Option
//{
//	EXIT,//0
//	ADD,//1
//	SUB,//2
//	MUL,//3
//	DIV//4
//};//��ǿ����Ŀɶ���
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("�����룺_>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case ADD:
//				break;
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
//	return 0;
//}


//�����塢������
//�������Ͷ���ı���Ҳ����һϵ�еĳ�Ա����������Щ��Ա����ͬһ��ռ䣨��������Ҳ�й����壩
//

//union un
//{
//	//�������Ա
//	char c;
//	int i;
//
//	//i��c�����˵�һ���ֽڵĿռ䣬����������Ա�Ĵ�С
//
//};
//
//int main()
//{
//	union un u = {10};
//	u.i = 1000;
//	u.c = 'e';//ͬһʱ�䣬ֻ����һ������
//
//	//�����Ա������ͬһ���ռ�
//	printf("%d\n", sizeof(u));//4�ֽ�
//
//
//
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);//�������һ��
//	return 0;
//}

//
//int check_sys()
//{
//	union check
//	{
//		char c;
//		int i;
//	}h;
//	h.i = 1;
//	return h.c;
//}
//
//int main()
//{
//	//int a = 0x11223344;
//	//int a = 0x00000001;
//	//if (*((char*)&a) == 1)
//	//{
//	//	printf("С�˴洢\n");
//	//}
//	//else
//	//	printf("��˴洢\n");
//
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С�˴洢\n");
//	}
//	else
//		printf("��˴洢\n");
//
//
//	return 0;
//}






union Un
{
	//���ϵĴ�С����������Ա�Ĵ�С��
	//������Ա��С����������������������ʱ�򣬾�Ҫ���뵽������������������
	//char a[5];//1--5
	//char c;//4


	short s[5];//���뵽12
	int i;
	//����������s:2     i:4   ->4�ֽ�

};


int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}