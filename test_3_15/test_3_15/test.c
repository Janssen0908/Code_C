#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	//(*(void(*)())0)();//��0��ʼ
//	////��0ǿ��ת��Ϊ����ָ�루����ֵΪvoid�Σ����ٽ����ã����ú���
//
//	////(*((void (*)())0))();
//	////void(*signal(int, void(*)(int)))(int);
//
//
//	//typedef void(*pfun_t)(int);
//
//	//pfun_t signal(int, pfun_t);
//
//
//
//
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	//int (*pf1)(int ,int ) = Add;
//	//int (*pf2)(int, int) = sub;
//
//	int (*pfarr[2])(int, int) = {Add,sub};//����ָ������
//
//	return 0;
//}

void menu()
{
	printf("*************************\n");
	printf("****  1.Add   2.sub  ****\n");
	printf("****  1.mul   2.div  ****\n");
	printf("****      0.exit     ****\n");
	printf("*************************\n");
}
int Add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}
int main()
{
	menu();
	int (*pfarr[5])(int, int) = { NULL,Add,sub,mul,div };
	int ret = 0;
	int input = 0;
	int x = 0;
	int y = 0;
	do {
		printf("������������ţ�");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("��������Ҫ�����ֵ��");
			scanf("%d %d", &x, &y);
			ret = (pfarr[input])(x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�����˳�");
		}
		else
		{
			printf("�����������������");
		}

	} while (input);
	
	return 0;
}