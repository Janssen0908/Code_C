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
	//二维数组
	char board[ROW][COL];

	//初始化棋盘为 空格 
	InitBoard(board, ROW, COL);

	//打印棋盘
	DisplayBoard(board, ROW, COL);


	//玩游戏阶段
	char ret = 0;//接收游戏状态
	while(1)
	{
		//玩家下棋
		playerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);//再次打印棋盘

		//判输赢
	    ret = IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);//再次打印棋盘


	    //判输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢了！\n");
	else if (ret == '#')
		printf("电脑赢了！\n");
	else
		printf("平局\n");
	DisplayBoard(board, ROW, COL);


}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//获取随机数七起点，定义在【电脑下棋】外是因为只需要设置一次起点即可
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	}
	while (input);//选择1，再次循环，选择零跳出循环
	return 0;
}