#include <stdio.h>
#include <string.h>
// 字符串逆序
//  void back(char arr[],int len)
//  {
//      int left = 0;
//      int right = len - 1;
//      char tmp = 0;
//      while(left<right)
//      {
//          tmp = arr[left];
//          arr[left] = arr[right];
//          arr[right] = tmp;
//          left ++;
//          right --;
//      }
//  }
//  int main()
//  {
//      char arr[]="I am a student";
//      int len = strlen(arr);
//      back(arr,len);
//      printf("%s\n",arr);
//      return 0;
//  }

// 递归写法
// void back(char arr[], int left, int right)
// {
//     int tmp = 0;
//     if (left < right)
//     {
//         tmp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = tmp;

//         back(arr, left + 1, right - 1);
//     }
// }
// int main()
// {
//     char arr[]="I am a student";
//     int len = strlen(arr);
//     int left = 0;
//     int right = len - 1;
//     back(arr,left,right);
//     printf("%s\n",arr);
//     return 0;
// }


//变种水仙花
#include <math.h>
int main()
{
    int i = 0;
    int j = 1;
    for(i=1;i<=100000;i++)
    {
        int n = 1;
        int num = i;
        while(num/10)
        {
            n++;
            num/=10;
        }
        num = i;
        int sum = 0;
        while(num)
        {
            sum += pow((num%10),n);
            num/=10;
        }
        if(i == sum)
        {
            printf("%d ",i);
        }
    }

    return 0;
}