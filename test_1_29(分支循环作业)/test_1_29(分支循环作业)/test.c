#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//��5��ֵ��i���ʽΪ�棬for��ѭ����ӡ5
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//int main()//������������������������ĴӴ�С����
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a,b,c);
//	return 0;
//}


//int main()//��ӡ1-100 ֮��3�ı�����
//{
//	int i = 3;
//	while (i < 100)//for(i = 3;i<100;i+=3)
//	{
//		//printf("%d\n", i);
//		//i = i * 3;
//		if (0 == i % 3)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}

//int main()//�����Լ��
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int max = n > m ? m : n;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ��Ϊ��%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

////////////////շת�����
///////��С��������m*n�������Լ��
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int t = 0;
//	while (m % n)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//	}
//	printf("���Լ����%d\n", t);
//	return 0;
//}





//////////////��ӡ1000-2000֮�������
// //1.�ܱ�4���������ǲ��ܱ�100����
// //2.�ܱ�400����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0))||(i%400==0))//**********************
//		{
//			printf("%d ", i);
//		    count++;
//		}
//	}
//	printf("%d ", count);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//
//		for (j = 2; j < i ; j++)�Ż���
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}


///////�ػ�����
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
	again:
	printf("��ע�⣬���ĵ��Խ�����2�����ڹػ������룺�������ͻ�ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//int main()
//{
//
//	return 0;
//}