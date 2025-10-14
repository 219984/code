#include <stdio.h>
// void Swap(int *px, int *py)
// {
//     int num = *px;
//     *px = *py;
//     *py = num;
// }
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d %d %d", &a, &b, &c);
//     if (a < b)
//     {
//         Swap(&a, &b);
//     }
//     if (a < c)
//     {
//         Swap(&a, &c);
//     }
//     if (b < c)
//     {
//         Swap(&b, &c);
//     }
//     printf("%d %d %d\n", a, b, c);
//     return 0;
// }



//打印1-100之间所有3的倍数
// int main ()
// {
//     int i = 1;
//     for (i = 1;i <= 100;i ++)
//     {
//         if (i%3 == 0)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }


//找最大公约数
// int find(int a,int b)
// {
//     int i = 0;
//     if (a > b)
//     {
//        for (i = b;i >= 1;i--)
//        {
//         if (a % i== 0 && b % i == 0)
//         {
//             return i;
            
//         }
//        } 
//     }
//      else
//     {
//        for (i = a;i >= 1;i--)
//        {
//         if (a % i== 0 && b % i == 0)
//         {
//             return i;
            
//         }
//        } 
//     }
// }
// int main ()
// {
//     int a = 0;
//     int b = 0;
//     scanf ("%d %d",&a,&b);
//    int all = find (a,b);
//     printf("%d\n",all);
//     return 0;
// }

// 求十个整数的最大值
//  int max(int *p,int sz)
//  {
//      int i = 0;
//      int m = *p;
//      while(i<sz)
//      {
//          if(*(p+i)>m)
//          {
//              m =*(p+i);
//          }
//          i++;

//     }
//     return m;
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int sz = sizeof arr/sizeof arr[0];
//     printf("%d\n",max(arr,sz));
//     return 0;
// }

// int main()
// {
//     int arr[10] = {0};
//     int i = 0;
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int max = arr[0];
//     for (i = 1; i < 10; i++)
//     {
//         if (arr[i] > max)
//             max = arr[i];
//     }
//     printf("%d\n", max);
//     return 0;
// }



//打印乘法口诀表
int main()
{
    int i = 0;
    for (i= 1;i<=9;i++)
    {
        int j = 0;
        for(j = 1;j<=i;j++)
        printf("%d*%d=%2d ",i,j,i*j);
        printf("\n");
    }
    return 0;
}