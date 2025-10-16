#include <stdio.h>
#define ROW 3
#define COL 3
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL],int row,int col);

//初始化棋盘
void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < ROW;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}

void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)
	{
		int j = 0;
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
			printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0;j < col;j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}

}





void game()
{
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	initboard(board, ROW, COL);
	displayboard(board, ROW, COL);
}
void menu()
{
	printf("*********************\n");
	printf("*** 1.play 0.exit ***\n");
	printf("*********************\n");

}
int main()
{
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择:>");
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
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}