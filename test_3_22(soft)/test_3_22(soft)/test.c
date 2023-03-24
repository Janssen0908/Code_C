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

	//创建通讯录

	Contact con;//嵌套结构体
	//一个包含了1000个人的信息的结构体，而每个人的信息又是一个新的结构体


	InitContact(&con);
	//初始化+给data申请空间在堆区
	//sz=0;capacity=当前最大空间
	
	do
	{

		menu();
		printf("请选择：_>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			SaveContact(&con);
			DestoryContact(&con);
			printf("退出通讯录\n");
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
			PrintContact(&con);//仍然传地址，降低开销
			break;
		default:
			printf("输入错误，请重新输入:_>");
			break;
		}


	} while(input);
	return 0;
}