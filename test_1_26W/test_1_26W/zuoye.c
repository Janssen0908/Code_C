#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��һ����ҵ����bվ27�ڣ�
//1.C   2.D   3.1(ȫ����ֲ������ظ����ֲ�����)   4.C   5.C   6.C   7.B   8.B   9.B   10.C ��#define��#include��Ԥ����ָ�  11.B   12.C   13.C(contiune)  14.



//int a = 10;
//int main()
//{
//	int a = 1;
//	printf("%d\n", a);
//	return 0;
//}


//int count(int x, int y)//18����33�������������ֵ
//{
//	x > y ? x : y;//����һ
//	if (x > y)
//		return x;
//	else
//		return y;//������
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	int max = count(a, b);
//	printf("���ֵΪ��%d\n", max);
//	return 0;
//}


//
//int main()
//{
//	static int a = 0;
//	a = 80;
//	printf("%d\n", a);
//	return 0;
//}

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", sum(a));
//	}
//	return 0;
//}


int main()//�ж�һ�������Ƿ��ܱ�5����

{
	int a = 0;
	scanf("%d", &a);
	if (a % 5 == 0)
	{
		printf("YES\n");
	}
	else
		printf("NO\n");
	return 0;
}