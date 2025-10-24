#include <stdio.h>
int main ()
{
    int a = 0;
    int *p = &a;
    *p = 8;
    printf ("%d\n",a);

}