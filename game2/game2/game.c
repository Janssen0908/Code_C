#define   _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}



void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("-----ɨ����Ϸ------\n");
	int i = 0;
	for (i = 0; i <= col; i++)//��ӡ�к�
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----ɨ����Ϸ------\n");

}



//������
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = 10;//10����
	while (count)//��10�Σ�countΪ0ʱȫ�������꣬�պý���whileѭ��
	{
		//�漴�±�
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

static int get_mine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y - 1] +
		mine[x + 1][y + 1] - 8 * '0';
}
//�Ų���
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	printf("������Ҫ�Ų��׵����꣺_\n");
	int x = 0;
	int y = 0;
	int num = 0;
	while (num<=row*col-10)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//���ж�����Ϸ���
		{
			if (mine[x][y] == '1')
			{
				printf("���ź���ը����\n");
				DisplayBoard(mine, ROW, COL);//��ӡʧ������
				break;
			}
			else
			{
				//�����ף�ͳ��������Χ�м�����
				int count = get_mine(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);//��ʾ�Ų������Ϣ
				num++;
				
			}



		}
		else
			printf("���겻�Ϸ�������������\n");
	}
	if (num == row * col - 10)
	{
		printf("��ϲ�㣡���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}

}

