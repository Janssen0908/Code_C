#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3


//函数的声明

void InitBoard(char board[ROW][COL], int row, int col);//初始化棋盘


void DisplayBoard(char board[ROW][COL], int row, int col);//打印棋盘


void playerMove(char board[ROW][COL], int row, int col);//玩家下棋


void ComputerMove(char board[ROW][COL], int row, int col);//电脑下棋


char IsWin(char board[ROW][COL], int row, int col);//判输赢



