#include <stdio.h>
#include <string.h>
void reverse(char arr[],int len)
{
    char *left = arr;
    char *right = arr + len -1;
    while(left < right)
    {
        char tmp = 0;
        tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;

    }
}
int main()
{
    char arr[101] = {0};
    gets(arr);
    int len = strlen(arr);
    reverse(arr,len);
    char* start = arr;
    char* end = start;
    while(*end != ' '&& *end !='\0')
    {
        end++;
    } 
    reverse(start,end-1);
    start = end;
    printf("%s\n",arr);

    return 0;
}