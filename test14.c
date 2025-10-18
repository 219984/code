#include <stdio.h>

//依次打印一个数的每一位
// void print(int n)
// {
//     if (n > 9)
//     {
//         print(n / 10);
//     }
//     printf("%d ", n % 10);
// }
// int main()
// {
//     int num = 0;
//     scanf("%d", &num);
//     print(num);
//     return 0;
// }

//strlen 模拟
// int my_strlen(char arr[])
// {
//     int a = 0;
//     int count = 0;
//     if (arr[a] == '\0')
//     {
//         return 0;
//     }
//     return 1 + my_strlen(arr + 1);
// }
// int main()
// {
//     char arr[] = "abcdef";
//     int sum = my_strlen(arr);
//     printf("%d\n", sum);
//     return 0;
// }


//逆序排序字符

// int main()
// {
//     int i = 0;
//     char arr[] = "abcdef";
//     int sz = strlen(arr);
//     int count = 0;
//     while (i < sz - 1)
//     {
//         int a = 0;
//         a = arr[i];
//         arr[i] = arr[sz - 1];
//         arr[sz - 1] = a;
//         i++;
//         sz--;
//     }
//     printf("%s\n", arr);
//     return 0;
// }

//递归逆转字符串排序
// #include <string.h>
// void reverse(char *str)
// {
//     char tmp = *str;
//     int len = strlen(str);
//     *str = *(str + len - 1);
//     *(str + len - 1) = '\0';
//     if (strlen(str + 1) >= 2)
//         reverse(str + 1);
//     *(str + len - 1) = tmp;
// }
// int main()
// {
//     char arr[] = "abcdef";
//     reverse(arr);
//     printf("%s\n", arr);
//     return 0;
// }

// int digitsum(unsigned int n)
// {
//     if(n>=10)
//    return n%10+digitsum(n/10);
//    else 
//    return n;
// }
// int main()
// {
//     unsigned int n = 0;
//     scanf ("%u",&n);
//     int sum = digitsum(n);
//     printf ("%d\n",sum);
//     return 0;
// }


//递归实现n的k次方
// double Pow(int n, int k)
// {
//     if (k > 0)
//         return n * Pow(n, k - 1);
//     else if (k == 0)
//         return 1;
//     else
//         return 1.0 / Pow(n, -k);
// }
// int main()
// {
//     int n = 0;
//     int k = 0;
//     scanf("%d%d", &n, &k);
//     double ret = Pow(n, k);
//     printf("%lf", ret);
//     return 0;
// }


//斐波那挈数列
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int a = 1;
    int b = 1;
    int c = 0;
    if (n<=2)
    {
        printf ("1");
    }
    else
    {
        for (i = 3; i <= n; i++)
        {

            c = a + b;
            a = b;
            b = c;
        }
            printf ("%d\n",c);
    }
    return 0;
}