#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//if (a >= 18)
//	//{
//	//	printf("test1：成年\n");
//	//}
//	//else
//	//	printf("未成年\n");
//
//	int age = 70;
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else
//		printf("老年\n");
//
//	return 0;
//}


//判断一个数是否为奇数

//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	if (0 == num % 2)
//	{
//		printf("num是偶数");
//	}
//	else
//		printf("num是奇数");
//	return 0;
//}

//输出1-100之间的奇数

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
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
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