#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int mmain()
//{
//	{
//		auto int a = 10;//�Զ������Զ�����
//		int a = 10; //auto��ʡ��
//	}
//	return 0;
//}
//typedef unsigned int u_int;//typedef-����������
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 199;
//	return 0;
////}
//void test()
//{
//	static int a = 1;//a�Ǿֲ�������static���ξֲ��������ٴν���û���½�a
//	a++;
//	printf("%d\n",a);
//}//a������
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//extern int Add(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 4;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//#define ADD(X,Y) X+Y 
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//} 
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//%p-ר��������ӡ��ַ
//	int *pa = &a;
//
//	//*˵��pa��ָ�����
//	//int˵��paָ��Ķ�����int���͵�
//
//
//	char ch = 'w';
//	char *pc = &ch;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(float *));
//	printf("%d\n", sizeof(double *));
//	printf("%d\n", sizeof(long *));
//	printf("%d\n", sizeof(long long *));
//
//
//	//ָ��Ĵ�С��ͬ��ָ���ж��ȡ�����������ռ䣬32λ������ָ���С����4�ֽڣ�64λ�����Ͼ���8�ֽڡ�
//
//
//	return 0;
//}


//�ṹ����Դ����µ�����

//һ��ѧ��
struct Stu
{
	char name[20];//��Ա����
	int age;
	double score;
};

//һ����
struct book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct Stu s = { "����",18,85.4 };
	printf("1:%s %d %lf\n", s.name, s.age, s.score);


	struct Stu* pc = &s;
	printf("2:%s %d %lf\n", (*pc).name, (*pc).age, (*pc).score);

	printf("2:%s %d %lf\n", pc->name, pc->age, pc->score);
	return 0;
}
