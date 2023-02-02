#define   _CRT_SECURE_NO_WARNINGS
#include "game.h"



//初始化棋盘
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



//打印棋盘
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


//玩家下棋
void playerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋：>\n");
	while (1)
	{
		printf("请输入坐标：>");
		scanf("%d %d", &x, &y);//玩家输入坐标开始下棋

		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断输入的坐标是否合法
		{
			if (board[x - 1][y - 1] == ' ')//由于数组从0开始，所以玩家输入坐标应该减一，才能映射到棋盘上
			{
				board[x - 1][y - 1] = '*';// *代表玩家棋子
				break;//下完一子后立马退出【玩家下棋】
			}
			else
			{
				printf("位置已被占用，请重下\n");
			}
		}
		else
			printf("坐标非法，请重新输入\n");
	}

}


//电脑下棋（随机下棋）
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");

	int x = rand() % row;//模row 使得电脑生成的随机数在棋盘范围内对于3*3的棋盘来说，就是0-2
	int y = rand() % col;//同上
	while (1)
	{
		if (board[x][y] == ' ')//注意和【玩家下棋】不一样的是x，y不需要减一修正
		{
			board[x][y] = '#';
			break;
		}//电脑下棋不需要提示，一直后台循环，直到下对为止
	}
}



//判断棋盘是否已满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')//游戏继续
			    return 0;
		}
	}
	return 1;
}



//判输赢
char IsWin(char board[ROW][COL], int row, int col)
{


	//判断行
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

	//判断列
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

	//判断对角线
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



    //判断平局
	//如果棋盘满了返回1，不满返回0；

	int num = IsFull(board, ROW, COL);
	if (num == 1)
	{
		return 'c';
	}
	else
		return 'Q';
}
