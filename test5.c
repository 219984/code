#include <stdio.h>
// typedef unsigned int  unit;  
// int main ()
//     {
//         unsigned int num1 = 0;
//         unit num2 = 2;
//      return 0;
//     }

// void test()
// {
//     static int a = 1;
//     a++;
//     printf ("%d\n",a);
// }
// int main ()
// {
//     int i = 0;
//     while (i < 10)
//     {
//         test();
//         i++;
//     }

//     return 0 ;
// }
int main ()
{
    int a = 10;
    int*p = &a;
    printf ("%p\n",p);
    return 0;
}