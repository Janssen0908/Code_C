#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()//����һ���˵���Ϣ
//{
//	int age = 20;//int-����;age-��������
//	double weight = 78.4;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}

//ȫ�ֱ���
//int a = 2000;
//int main()
//{
//	//�ֲ�����
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	//scanf()�����뺯��
	scanf("%d %d", &a,& b);
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}