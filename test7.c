#include <stdio.h>

// int main()
// {
//     int i = 1;      // 初始化
//     while (i <= 10) // 判断
//     {
//         printf("%d ", i);
//         i++; // 调整
//     }
//     return 0;
// }


// int main()
// {
//     int i = 0;
//     int j = 0;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("hehe!\n");
//         }
//     }
//     return 0;
// }


//do while 循环
// int main()
// {
//     int i = 0;
//     do
//     {
//         printf("haha\n");
//         i++;
//     } while (i < 10);

//     return 0;
// }



///计算n的阶乘
// int main()
// {
//     int i = 1;
//     int n = 0;
//     int ret = 1;
//     int ret2 = 0;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         ret = ret * i;
//     }
//     printf("%d\n", ret);

//     return 0;
// }

// 阶乘相加
// int main()
// {
//     int i = 1;
//     int n = 0;
//     int ret = 1;
//     int ret2 = 0;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         ret = ret * i;
//         ret2 = ret2 + ret;
//     }
//     printf("%d\n", ret);
//     printf("%d\n", ret2);
//     return 0;
// }



//用while写
// int main()
// {
//     int i = 1;
//     int n = 0;
//     int ret = 1;
//     int ret2 = 0;
//     scanf("%d", &n);
//     while (i <= n)
//     {
//         ret = ret * i;
//         ret2 = ret2 + ret;
//         i++;
//     }
//     printf("%d\n", ret);
//     printf("%d\n", ret2);

//     return 0;
// }




//有序数组中找实数
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int i = 0;
//     int k = 7;
//     int sz = sizeof arr / sizeof arr[0];
//     for (i = 0; i < sz; i++)
//     {
//         if (arr[i] == k)
//         {
//             printf("找到啦，下标为%d\n", i);
//             break;
//         }
//     }
//     if (i == sz)
//         printf("找不到\n");
//     return 0;
// }



//折中法找下标
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int k = 7;
//     int sz = sizeof arr / sizeof arr[0];
//     int left = arr[0];
//     int right = arr[sz] - 1;

//     while (left <= right)
//     {
//         int mid = (left + right) / 2;

//         if (arr[mid] < k)
//             left = mid + 1;
//         else if (mid > k)
//             right = mid;
//         else
//         {
//             printf("找到啦，我真NB，下标是%d\n", mid-1);
//             break;
//         }
//     }
//     if (left > right)
//     {
//         printf("找不到了！！！");
//     }
//     return 0;
// }

// 编写代码，演示多字符从两端移动，向中间汇聚
// #include <windows.h>
// #include <stdlib.h>
// int main()
// {

//     char arr1[] = "Welcome to anhui university!!!";
//     char arr2[] = "******************************";
//     int left = 0;
//     int right = strlen(arr2) - 1; // 或者= sizeof(arr2)/sizeof(arr[0])-2
//     while (left <= right)
//     {
//         arr2[left] = arr1[left];
//         arr2[right] = arr1[right];
//         printf("%s\n", arr2);
//         Sleep(500);
//         // 清空屏幕
//         system("cls"); // 头文件———>#include <stdlib.h>
//         left++;
//         right--;
//     }
//     printf("%s\n", arr2);

//     return 0;
// }

// 登录场景
#include <string.h>
int main()
{
    int i = 0;
    char password[20] = {0};

    for (i = 0; i < 3; i++)
    {
        printf("请输入密码：");
        scanf("%s", password);
        if (strcmp(password, "123456") == 0)
        {
            printf("密码正确\n");
            break;
        }
        else
            printf("密码错误，请重新输入密码\n");
    }
    if (i == 3)
    {
        printf("无次数，请退出程序");
    }
    return 0;
}