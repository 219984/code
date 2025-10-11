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
void exchange (int*px,int*py)
{
    int z = *px;
    *px = *py;
    *py = z;
}
int main()
{
    int a = 0;
    int b = 0;
    scanf ("%d%d",&a,&b);
    printf ("交换前的值 a = %d,b = %d\n",a,b);
    exchange(&a,&b);
    printf ("交换后的值 a = %d,b = %d\n",a,b);

    return 0;
}