#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

//��ʾ����ַ����������м��ƶ�
//int main()//*************************************************************************
//{
//	char arr1[] = { "welcome to bit!!!!!!" };
//	char arr2[] = { "####################" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//ģ���û���¼����������ֻ�ܵ�¼����

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		//�����ַ����ıȽϲ�����==��Ӧ��ʹ��strcmp
//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}


//��������Ϸ
//1.�Զ�����һ��1-100������
//2.������
//3.a.�¶��ˣ���ϲ�㣬�¶���
//  b.�´��ˣ��������´��˻��ǲ�С�ˣ�ֱ���¶�
//5.��Ϸ����һֱ�棬�����˳���Ϸ



void menu()
{
	printf("#############################\n");
	printf("########  1.play   ##########\n");
	printf("########  0.exit   ##########\n");
	printf("#############################\n");
}

void game()
{
	int guess = 0;
	int ret = (rand()%100)-1;
	//printf("%d\n", ret);
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
				break;
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��������Ϸ:");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������");
			break;
		}
	} while (input);
	return 0;
}