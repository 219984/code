#include <stdio.h>
// int main ()
// {
//     int arr[] = {1,2,3,4,5};
//     short* p = (short*)arr;
//     int i = 0;
//     for(i = 0;i<4;i++)
//     {
//         *(p+i)=0;
//     }
//     for(i= 0;i<5;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

#include <string.h>
//字符串逆序
void back(char arr[],int len)
{
    int left = 0;
    int right = len - 1;
    char tmp = 0;
    while(left<right)
    {
        tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left ++;
        right --;
    }
}
int main()
{
    char arr[]="I am a student";
    int len = strlen(arr);
    back(arr,len);
    printf("%s\n",arr);
    return 0;
}