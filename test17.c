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


// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf ("%d %d",&a,&b);
//     int max =a>b?a:b;
//     printf ("%d\n",max);
//     return 0;
// }


// int main()
// {
//     char a = 0xb6;
//     //if(a==0xb6)
//     printf ("%d\n",a);
//     return 0;
// }

//小乐乐走台阶
// int fib (int n)
// {
//     if (n<=2)
//     {
//         return n;
//     }
//     else 
//     {
//         return fib(n-1)+fib(n-2);
//     }
// }
// int main ()
// {
//     int n = 0;
//     scanf ("%d",&n);
//     int m = fib(n);
//     printf ("%d\n",m);
//     return 0;
// }

// int main()
// {
//     int arr[] = {4, 3, 2, 5, 8, 7, 2, 0, 9};
//     int i = 0;
//     int j = 0;
//     int del = 0;
//     int count = 0;
//     scanf("%d", &del);
//     for (i = 0; i < 9; i++)
//     {
//         if (arr[i] != del)
//         {
//             arr[j++] = arr[i];
//         }
//         else
//             count++;
//     }
//     for (i = 0; i < 9 - count; i++)
//         printf("%d ", arr[i]);
//     return 0;
// }

// int main()
// {
//      int arr[] = {4, 3, 2, 5, 8, 7, 2, 0, 9};

//     return 0;
// }


int main()
{
    int n = 0;
    scanf ("%d",&n);
    int arr[10]={0};
    int i = 0;
    for (i=0;i<10;i++)
    {
        scanf ("%d",&arr[i]);
    }
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        int j = 0;
        for (j=0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp = 0;
                tmp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    printf ("%d\n",arr[0]);
    printf ("%d\n",arr[sz-1]);


    return 0;
}