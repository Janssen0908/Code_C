#define   _CRT_SECURE_NO_WARNING

#include <stdio.h>


/*int my_strlen(char* str )
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);
	return 0;
}    */


//ָ���������
//int main()
//{
//	//int arr[10] = { 0 };
//	////��������������Ԫ�صĵ�ַ
//	//printf("%p\n",arr);
//	//printf("%p\n",&arr[0]);
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p <==>  %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//������ͬ   *(p + 2) == arr[2];
//
//	printf("%d\n", 2[arr]);// [] ��һ����������2 �� arr ������������
//	return 0;
//}


//����ָ��


//int main()
//{
//	int a = 10;
//	int* pa = &a;//һ��ָ��
//
//	int** ppa = &pa;//����ָ��
//
//	**ppa = 3;
//	printf("%d\n", a);
//
//	return 0;
//}


//ָ������


//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 'q','w','e','r','t' };//�ַ�����
//
//	//ָ������
//		int* parr[10];//����ָ�������
//		char* pac[5];
//	return 0;
//}

//struct B
//{
//	char d;
//	int a;
//	double p;
//};
//struct stu
//{
//	struct B ns;
//	char name[20];
//	int age;
//	char id[20];
//	float high;//�����Ա����
//}; s1, s2;//�����ṹ���൱��int��char��float��
//
////s1 s2 ��ȫ�ֱ���
//
//int main()
//{
//
//	//sΪ�ֲ�����
//	struct stu s = { {'e',20,39.93},"����",18,23421412,178.4 };//�ṹ��ĳ�ʼ�� 
//	struct stu* ps = &s;
//	struct B* pb = &ns;
//	printf("%c ", s.ns.d);
//	printf("%d ", s.ns.a);
//
//	printf("%s ", s.name);
//	printf("%d ", ps->age);
//	printf("%c ", ps->ns.d);
//
//
//	return 0;
//}


//
//struct B
//{
//	char a;
//	int b;
//	double c;
//};
//struct stu
//{
//	struct B ns;
//	char name[20];
//	int age;
//	char id[20];
//	float high;
//};
//
//void print1(struct stu t)
//{
//	printf("%c %d %lf %s %d %s %f\n", t.ns.a, t.ns.b, t.ns.c, t.name, t.age, t.id, t.high);
//};
//
//void print2(struct stu* pa)
//{
//	printf("%c %d %lf %s %d %s %f\n", pa->ns.a, pa->ns.b, pa->ns.c, pa->name, pa->age, pa->id, pa->high);
//}
//int main()
//{
//	struct stu s = { {'e',20,39.93},"����",18,"1234435",178.4};
//
//	print1(s);//��ֵ
//	print2(&s);//��ַ������ѡ��
//	//ԭ�򣺲���Ҫ�ظ����ٿռ�
//	return 0;
//}
int Add(int a, int b)
{
	int z = 0;
	z = a + b;
	return z;
}
int main()
{
	int a = 9;
	int b = 6;
	int c = 0;
	c = Add(a, b);
	return 0;
}