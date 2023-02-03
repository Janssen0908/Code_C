#define   _CRT_SECURE_NO_WARNINGS
#include "game.h"


//游戏进入界面
void menu()
{
	printf("***********************************\n");
	printf("*********    1. play     **********\n");
	printf("*********    0. exit     **********\n");
	printf("***********************************\n");
}

//扫雷游戏框架
void game()
{

	char mine[ROWS][COLS];//存放布置雷的信息
	char show[ROWS][COLS];//存放周围雷的信息
	InitBoard(mine, ROWS, COLS,'0');//全都初始化为‘*’
	InitBoard(show, ROWS, COLS,'*');//全都初始化为‘0’

    //打印棋盘
	DisplayBoard(mine, ROW, COL);//只需要打印中间9*9的
	DisplayBoard(show, ROW, COL);//只需要打印中间9*9的

	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);//只需要打印中间9*9的



	//排查雷
	FindMine(mine,show, ROW, COL);//在mine

}




int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：_\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}

	} while (input);//0直接跳出，1继续玩。
	return 0;
}