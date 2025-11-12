#include <stdio.h>
#include <string.h>
void reverse(char *left,char * right)
{
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
    char *left = arr;
    char *right = arr+len-1;
    reverse(left,right);
    char *start = arr;
    char *end = start;
    while (*start != '\0')
    {
        while (*end != ' ' && *end != '\0')
        {
            end++;
        }
        reverse(start, end - 1);
        if(*end!='\0')
        end++;
        start = end;
    }
    printf("%s\n", arr);

    return 0;
}