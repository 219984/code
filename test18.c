#include <stdio.h>
// int main ()
// {
//     int a = 0;
//     int *p = &a;
//     *p = 8;
//     printf ("%d\n",a);

// }


// int main ()
// {
//     int arr[10]={0};
//     int *p=arr;
//     int i = 0;
//     for (i=0;i<10;i++)
//     {
//         *p = 1;
//         p++;
//         printf ("%d ",arr[i]);
//     }
    

//     return 0;
// }

int my_strlen(char* str)
{
    char *start = str;
    while(*str != '\0')
    {
        str++;
    }
    return (str-start);
}
int main ()
{
    char arr[]="abcdef";
    int len = my_strlen(arr);
    printf ("%d\n",len);
    return 0;
}