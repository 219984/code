#include <stdio.h>

// 求补码二进制中1的个数
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int i = 0;
//     int count = 0;
//     scanf("%d", &a);
//     for (i = 0; i < 32; i++)
//     {
//         int tmp = a >> i;
//         b = tmp & 1;
//         if (b == 1)
//         {
//             count++;
//         }
//     }
//     printf("%d\n", count);
//     return 0;
// }


int main()
{
    int a = 0;
    int b = 0;
    scanf ("%d %d",&a,&b);
    int max =a>b?a:b;
    printf ("%d\n",max);
    return 0;
}