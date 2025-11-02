#include <stdio.h>

char* my_strcpy(char*dist,char* star)
{
    char* ret = dist;
    while(*dist++=*star++)

    {
        ;
    }
    return ret;
}
int main ()
{   int a = 0;
    char arr1[20]={0};
    char arr2[]="hell0 world";
    printf("%s\n",my_strcpy(arr1,arr2));
    return 0;
}