#include <stdio.h>
#include <string.h>
// 输入密码作业复习
//  int main()
//  {
//      int i = 0;
//      char password[20] = {0};
//      for (i = 0; i < 3; i++)
//      {
//          printf("请输入密码：");
//          scanf("%s", password);
//          if (strcmp(password, "123456") == 0)
//          {
//              printf("密码正确，通过验证");
//              break;
//          }
//          else
//          {
//              printf("密码错误，请重新输入密码\n");
//          }
//      }
//      if (i == 3)
//      {
//          printf("次数用尽，请退出程序\n");
//      }
//      return 0;
//  }

// 猜数字游戏
#include <stdlib.h>
#include <time.h>
void menu()
{
    printf("*********欢迎游玩**********\n");
    printf("**************************\n");
    printf("******    1.play   *******\n");
    printf("******    0.exit   *******\n");
    printf("**************************\n");
}

void game()
{
    int guess = 0;
    // 1.生成随机数
    int ret = rand() % 100 + 1; // 生成随机数
                                // printf("%d\n", ret);
    // 2.猜数字
    printf("那么就来猜数字吧！");
    printf("请猜数字：>");
    int i = 0;
    while (i < 1000)
    {
        i++;
        if (i == 5)
        {
            printf("兄弟你不行啊！\n");
        }
        scanf("%d", &guess);
        if (guess < ret)
        {
            printf("猜小了\n");
        }
        else if (guess > ret)
        {
            printf("猜大了\n");
        }
        else
        {
            printf("恭喜你猜对了\n");
            printf("继续游玩或退出\n");
            break;
        }
    }
}
int main()
{
    srand((unsigned int)time(NULL));
    int input = 0;

    do
    {
        menu();
        printf(("请选择：>"));
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game(); // 猜数字的整个逻辑
            break;
        case 0:
            printf("*********退出游戏**********\n");
            break;
        default:
            printf("*********输入无效**********\n");
            break;
        }
    } while (input);
    return 0;
}