#include <stdio.h>
// int main ()
// {
//     int arr[3][4] = {1, 2, 3, 4, 2, 3, 4, 5, 3, 4, 5, 6};
//     int i = 0;
//     for (i= 0;i<3;i++)
//     {
//         int j=0;
//         for(j =0;j<4;j++)
//         {
//             scanf("%d",&arr[i][j]);
//             printf("%-2d ",arr[i][j]);
//         } 
//         printf ("\n");
//     }
    
//     return 0;
// }




//冒泡排序
void bubble_sort(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        int j = 0;
        for (j = 0; j < sz - 1 -1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
}
int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}