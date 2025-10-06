#include <stdio.h>
int main()
{
    //输入
    int x = 0;
    scanf ("%d",&x);
    //输出
    int y = 0;
    if (x>0)
    y = -1;
    else if  (x<0)
    y = 1;
    else 
    y = 0;
    printf("%d\n",y);

    return 0;
}


