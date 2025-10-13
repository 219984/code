#include <stdio.h>
//接受一个整形，按顺序打印他的每一位
// void print(unsigned int n)
// {
//     if (n >= 10)
//     {
//         print(n / 10);
//     }
//     printf("%d ", n % 10);
// }
// int main()
// {
//     unsigned int num = 0;
//     scanf("%u", &num);
//     print(num);
//     return 0;
// }

// int my_strlen(char *st)
// {
//     int count = 0;
//     while (*st != '\0')
//     {
//         count++;
//         st++;
//     }
//     return count;
// }
// int main()
// {
//     char arr[] = "abcd";
//     int len = my_strlen(arr);
//     printf("%d\n", len);
//     return 0;
// }

// int my_strlen(char *st)
// {
//     if (*st != '\0')
//     {
//         return 1 + my_strlen(st + 1);
//     }
//     else
//         return 0;
// }
// int main()
// {
//     char arr[] = "abcd";
//     int len = my_strlen(arr);
//     printf("%d\n", len);
//     return 0;
// }


//递归算阶乘
// int factorial(int b)
// {
//     if (b > 1)
//     {
//         return b * factorial(b - 1);
//     }
//     else
//         return 1;
// }
// int main()
// {
//     int num = 0;
//     scanf("%d", &num);
//     int a = factorial(num);
//     printf("%d", a);
//     return 0;
// }




//第N个斐波那契数
int feb(int n)
{
    int i = 0;
    int a = 1;
    int b = 1;
    int c = 1;
    if (n<=2)
    {
        return 1;
    }
    for (i=3;i<=n;i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main ()
{
    int ret = 0;
    int n = 0;
    scanf ("%d",&n);
    ret = feb(n);
    printf("%d\n",ret); 
}