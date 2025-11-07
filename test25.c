#include <stdio.h>
// int main ()
// {
//     int line = 0;
//     int i = 0;
//     int j = 0;
//     printf("输入菱形上半部分行数:>");
//     scanf("%d",&line);
//     for(i =0;i<line;i++)
//     {
//         for(j=0;j<line-1-i;j++)
//         {
//             printf(" ");
//         }
//         for(j=0;j<(2*i + 1);j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(i=0;i<line-1;i++)
//     {
//         for(j=0;j<=i;j++)
//         {
//             printf(" ");
//         }
//         for(j=0;j<2*(line-1-i)-1;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//喝汽水问题
int BottleNumber(int m,int sum)
{
    sum = m;
    if(m >= 2)
    {
        sum += (sum/2);
        BottleNumber(m/2,sum);
    }
    return sum;
}
int main ()
{
    int m = 20;
    int sum = 0;
    int num = BottleNumber(m,sum);
    printf("%d\n",num);
    return 0;
}