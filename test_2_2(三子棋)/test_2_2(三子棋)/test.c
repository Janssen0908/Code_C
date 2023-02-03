#define   _CRT_SECURE_NO_WARNINGS
#include "game.h"




void menu()
{
	printf("*********************************\n");
	printf("**********  1. play  ************\n");
	printf("**********  0. exit  ************\n");
	printf("*********************************\n");
}

void game()
{
	//��ά����
	char board[ROW][COL];

	//��ʼ������Ϊ �ո� 
	InitBoard(board, ROW, COL);

	//��ӡ����
	DisplayBoard(board, ROW, COL);


	//����Ϸ�׶�
	char ret = 0;//������Ϸ״̬
	while(1)
	{
		//�������
		playerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);//�ٴδ�ӡ����

		//����Ӯ
	    ret = IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		//��������
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);//�ٴδ�ӡ����


	    //����Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
		printf("���Ӯ�ˣ�\n");
	else if (ret == '#')
		printf("����Ӯ�ˣ�\n");
	else
		printf("ƽ��\n");
	DisplayBoard(board, ROW, COL);


}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��ȡ���������㣬�����ڡ��������塿������Ϊֻ��Ҫ����һ����㼴��
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}
	while (input);//ѡ��1���ٴ�ѭ����ѡ��������ѭ��
	return 0;
}