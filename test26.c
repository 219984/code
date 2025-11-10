#include <stdio.h>
int main ()
{
    int a = 0;
    int b = 0;
    int i = 0;
    do
    {
        scanf("%d %d",&a,&b);
    }while(a<1||a>100000||b<1||b>100000);
    int max = a > b?a:b;
    for(i=max;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            break;
        }
    }
    printf("%d\n",i);
    return 0;
}