#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//if (a >= 18)
//	//{
//	//	printf("test1������\n");
//	//}
//	//else
//	//	printf("δ����\n");
//
//	int age = 70;
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age < 26)
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else
//		printf("����\n");
//
//	return 0;
//}


//�ж�һ�����Ƿ�Ϊ����

//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	if (0 == num % 2)
//	{
//		printf("num��ż��");
//	}
//	else
//		printf("num������");
//	return 0;
//}

//���1-100֮�������

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (0 != i % 2)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//	};
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


int main()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}