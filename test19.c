#include <stdio.h>
// struct stu
// {
//     char name[20];
//     char sex[5];
//     char number[12];
//     int hight;
// };
// int main()
// {
//     struct stu p1 = {"张三", "男", "13785896688", 181};
//     printf("%s %s %s %d\n", p1.name, p1.sex, p1.number, p1.hight);
//     return 0;
// }


//写一个函数返回二进制位中1的个数
//way1
// int main ()
// {
//     int a = 0;
//     int count = 0;
//     scanf("%d",&a);
//     int i = 0;
//     while(a)
//     {
//         if(a%2==1)
//         count++;
//         a = a/2;
//     }
//     printf ("%d\n",count);
//     return 0;
// }

//way2
// int main()
// {
//     int num = 0;
//     scanf ("%d",&num);
//     int i = 0;
//     int count = 0;
//     for(i = 0;i<32;i++)
//     {
//         if(((num>>i)&1)==1)
//         count ++;
//     }
//     printf ("%d\n",count);
//     return 0;
// }

//高手写法
int count_1(int n)
{
    int count = 0;
    while(n)
    {
        count ++;
        n = n & (n-1);
    }
    return count;
}
int main ()
{
    int n = 0;
    scanf("%d",&n);
    int num = count_1(n);
    printf ("%d\n",num);
    return 0;
}