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
	printf("-----扫雷游戏------\n");
	int i = 0;
	for (i = 0; i <= col; i++)//打印行号
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("%d ", i);//打印列号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----扫雷游戏------\n");

}



//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = 10;//10个雷
	while (count)//放10次，count为0时全部布置完，刚好结束while循环
	{
		//随即下标
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
//排查雷
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	printf("请输入要排查雷的坐标：_\n");
	int x = 0;
	int y = 0;
	int num = 0;
	while (num<=row*col-10)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//先判断坐标合法性
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，炸死了\n");
				DisplayBoard(mine, ROW, COL);//打印失败棋盘
				break;
			}
			else
			{
				//不是雷，统计坐标周围有几个雷
				int count = get_mine(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);//显示排查出的信息
				num++;
				
			}



		}
		else
			printf("坐标不合法，请重新输入\n");
	}
	if (num == row * col - 10)
	{
		printf("恭喜你！排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}

}

