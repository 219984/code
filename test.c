#include<stdio.h>
int max(int a,int b)
{
    int z= 0;
    if(a>b)
    {
        z = a;
    }
    else
    {
        z = b;
    }
    return z;
}
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d",&a,&b);
    c = max(a,b);
    printf ("%d\n",c);
}