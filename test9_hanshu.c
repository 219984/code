#include <stdio.h>
// int get_max(int x, int y)
// {
//     int z = 0;
//     z = (x > y ? x : y);
//     return z;
// }
// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);
//     int m = get_max(a, b);
//     printf("%d\n", m);
//     return 0;
// }


//交换两个数的值
// void exchange(int *px, int *py)
// {
//     int z = *px;
//     *px = *py;
//     *py = z;
// }
// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d%d", &a, &b);
//     printf("交换前的值 a = %d,b = %d\n", a, b);
//     exchange(&a, &b);
//     printf("交换后的值 a = %d,b = %d\n", a, b);

//     return 0;
// }



//判断素数
#include <math.h>
// int main()
// {
//     int a = 0 ;
//     scanf ("%d",&a);
//     int i = 1;
//     int b = 1;
//     for (i=2;i<=sqrt(a);i++)
//     {
//         b= a%i;
//         if (b==0)
//         {
//             printf ("不是素数\n");
//             break;
//         }
//     }
//     if (i == a)
//     {
//         printf ("是素数\n");
//     }
//     return 0;
// }

// int judge(int n)
// {
//     int i = 2;
//     for (i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {

//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int a = 0;
//     scanf("%d", &a);
//     if (judge(a))
//     {
//         printf("是素数");
//     }
//     else
//         printf("不是素数");
//     return 0;
// }


//二分查找
int binary_search(int k, int arr[], int sz)
{
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (k < arr[mid])
        {
            right = mid-1;
        }
        else if (k > arr[mid])
        {
            left = mid+1;
        }
        else
        {
            return mid;
            
        }
    }
    if (left > right)
    {
        return -1;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int k = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    scanf("%d", &k);
    int c = binary_search(k, arr, sz);
    if (c==-1)
    {
        printf ("找不到");
    }
    else 
    {
        printf ("找到啦，下标是%d\n",c);
    }
    return 0;
}