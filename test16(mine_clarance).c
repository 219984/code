#include <stdio.h>
#define ROW 9
#define COL 9

#define ROWS 11
#define COLS 11

#define EASY_COUNT 10

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
 //设置雷
void SetMine(char board[ROWS][COLS], int row, int col);
int Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);


void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------------------\n");
	for (i = 0;i <= col;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		printf("%d ", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------------\n");

}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = EASY_COUNT;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
		
	}
}


int Get_mine_Count(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = -1;i <=1;i++)
	{
		for (j = -1;j <= 1;j++)
		{
			if (board[x + i][y + j] == '1')
				count++;
		}
	}
	return count;
}

//展开一片功能
void SearchMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col,int x,int y,int *win)
{
	if (x<1 || x>row || y<1 || y>col)
	{
		/*printf("输入无效\n");*/
		return;
	}
	(*win)++;
	char ret = Get_mine_Count(mine, x, y) + '0';
	if (ret == '0')
	{
		show[x][y] = ' ';
		int i = 0;
		int j = 0;
		for (i = -1;i <= 1;i++)
		{
			for (j = -1;j <= 1;j++)
			{
				int nx = x + i;
				int ny = y + j;
				if (show[nx][ny] == '*')
					SearchMine(mine, show, ROW, COL, nx, ny, &win);
			}
		}
	}
	else
	{
		show[x][y] = ret;
	}
}

//排查雷
int Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int x = 0;
	int y = 0;
	int game_over = 0;
	while (win < row * col - 10&&game_over==0)
	{
		int choice = 0;
		printf("如果要排查雷，请输入：1\n");
		printf("如果要标记雷，请输入：2\n");
		printf("请选择:>");
		scanf("%d", &choice);
		switch (choice)
		{
			//选1排查雷
		case 1:
		{
			printf("请玩家输入你要排查的位置:>");
			scanf("%d %d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (show[x][y] != '*')
					printf("此处已经排查过\n");
				else
				{
					if (mine[x][y] == '1')
					{
						printf("抱歉，你被炸死了！\n");
						DisplayBoard(mine, ROW, COL);
						game_over = 1;
						break;
					}
					else
					{
						
						//展开一片功能
						SearchMine(mine,show,ROW,COL,x,y,&win);
						DisplayBoard(show, ROW, COL);
					}
				}
			}
			else
			{
				printf("输入坐标无效，请重新输入:>\n");
			}
			break;
		}
		//选2标记雷
		case 2:
		{
			printf("输入你要标记的坐标:>");
			scanf("%d %d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (show[x][y] == '*')
				{
					//如果是*，可以标记为#
					show[x][y] = '#';
					printf("成功标记\n");
					//打印
					DisplayBoard(show, ROW, COL);
				}
				else
				{
					printf("此处无法标记\n");
				}
			}
			else
			{
				printf("标记坐标超出范围\n");
			}
			break;
		}
		default:
		{
			printf("请输入1或2\n");
		}
		}

	}
}

void menu()
{
	printf("******************\n");
	printf("****  1.play  ****\n");
	printf("****  0.exit  ****\n");
	printf("******************\n");

}
void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出雷的信息
	//初始化数组内容
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//设置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//排查雷
	Findmine(mine, show, ROW, COL);


}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷游戏\n");
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