#define   _CRT_SECURE_NO_WARNINGS
#include "game.h"


//��Ϸ�������
void menu()
{
	printf("***********************************\n");
	printf("*********    1. play     **********\n");
	printf("*********    0. exit     **********\n");
	printf("***********************************\n");
}

//ɨ����Ϸ���
void game()
{

	char mine[ROWS][COLS];//��Ų����׵���Ϣ
	char show[ROWS][COLS];//�����Χ�׵���Ϣ
	InitBoard(mine, ROWS, COLS,'0');//ȫ����ʼ��Ϊ��*��
	InitBoard(show, ROWS, COLS,'*');//ȫ����ʼ��Ϊ��0��

    //��ӡ����
	DisplayBoard(mine, ROW, COL);//ֻ��Ҫ��ӡ�м�9*9��
	DisplayBoard(show, ROW, COL);//ֻ��Ҫ��ӡ�м�9*9��

	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);//ֻ��Ҫ��ӡ�м�9*9��



	//�Ų���
	FindMine(mine,show, ROW, COL);//��mine

}




int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��_\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);//0ֱ��������1�����档
	return 0;
}