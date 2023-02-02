#define   _CRT_SECURE_NO_WARNINGS
#include "game.h"



//��ʼ������
void InitBoard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}



//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}


//�������
void playerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������壺>\n");
	while (1)
	{
		printf("���������꣺>");
		scanf("%d %d", &x, &y);//����������꿪ʼ����

		if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж�����������Ƿ�Ϸ�
		{
			if (board[x - 1][y - 1] == ' ')//���������0��ʼ�����������������Ӧ�ü�һ������ӳ�䵽������
			{
				board[x - 1][y - 1] = '*';// *�����������
				break;//����һ�Ӻ������˳���������塿
			}
			else
			{
				printf("λ���ѱ�ռ�ã�������\n");
			}
		}
		else
			printf("����Ƿ�������������\n");
	}

}


//�������壨������壩
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������:>\n");

	int x = rand() % row;//ģrow ʹ�õ������ɵ�����������̷�Χ�ڶ���3*3��������˵������0-2
	int y = rand() % col;//ͬ��
	while (1)
	{
		if (board[x][y] == ' ')//ע��͡�������塿��һ������x��y����Ҫ��һ����
		{
			board[x][y] = '#';
			break;
		}//�������岻��Ҫ��ʾ��һֱ��̨ѭ����ֱ���¶�Ϊֹ
	}
}



//�ж������Ƿ�����
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')//��Ϸ����
			    return 0;
		}
	}
	return 1;
}



//����Ӯ
char IsWin(char board[ROW][COL], int row, int col)
{


	//�ж���
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int player = 0;
		int computer = 0;

		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
				player++;
			else if (board[i][j] == '#')
				computer++;
		}

		if ((player == row && board[i][1] != ' ') || (computer == col && board[i][1] != ' '))
			return board[i][1];
	}

	//�ж���
	for (i = 0; i < col; i++)
	{
		int player = 0;
		int computer = 0;

		int j = 0;
		for (j = 0; j < row; j++)
		{
			if (board[i][j] == '*')
				player++;
			else if (board[i][j] == '#')
				computer++;
		}

		if ((player == row && board[1][i] != ' ') || (computer == col && board[1][i] != ' '))
			return board[1][i];
	}

	//�ж϶Խ���
	int order = 0;
	int reverse = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if ((i = j) && ((board[i][j] == '*') || (board[i][j] == '#')))
				order++;
			else if (j - i == 1 && ((board[i][j] == '*') || (board[i][j] == '#')))
				reverse++;
		}
	}
	if (order == row && board[1][1] != ' ')
		return board[1][1];



    //�ж�ƽ��
	//����������˷���1����������0��

	int num = IsFull(board, ROW, COL);
	if (num == 1)
	{
		return 'c';
	}
	else
		return 'Q';
}
