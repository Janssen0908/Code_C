#define   _CRT_SECURE_NO_WARNINGS

#include "contact.h"


#define MAX_PEO 1000
void menu()
{
	printf("**************************************\n");
	printf("********1. add          2. del********\n");
	printf("********3. search       4. modify*****\n");
	printf("********5. sort         6. print******\n");
	printf("********         0. exit       *******\n");
	printf("**************************************\n");
}

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,
	MODIFY,
	SORT,
	PRINT

};

int main()
{
	int input = 0;

	//����ͨѶ¼

	Contact con;//Ƕ�׽ṹ��
	//һ��������1000���˵���Ϣ�Ľṹ�壬��ÿ���˵���Ϣ����һ���µĽṹ��


	InitContact(&con);
	//��ʼ��+��data����ռ��ڶ���
	//sz=0;capacity=��ǰ���ռ�
	
	do
	{

		menu();
		printf("��ѡ��_>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			SaveContact(&con);
			DestoryContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case PRINT:
			PrintContact(&con);//��Ȼ����ַ�����Ϳ���
			break;
		default:
			printf("�����������������:_>");
			break;
		}


	} while(input);
	return 0;
}