#include <stdio.h>
// struct stu 
// {
//     char name[20];
//     char sex[10];
//     int age;
//     char tele[12];
// } ;
// void print(struct stu* ps )
// {
//     printf("%s %s %d %s\n",ps->name,ps->sex,ps->age,ps->tele);
// }
// int main ()
// {
//     struct stu s = {"zhamgsna","nan",20,"12345678123"};
//     print(&s); 
//     return 0;
// }
// int main ()
// {
//     int a = 0;
//     int b = 2;
//     if (a == 1)
//     {
//         if (b == 2)
//             printf("hehe\n");
//         else
//             printf("haha\n");
//     }
//     return 0;
// }
// int main()
// {
//     int i = 0;
//     while(i<=100) 
//     {
//         if (i%2 == 1)
//         printf (" %d", i );
//     }
//     return 0;
//     }
    
// int main ()
// {
//     int day = 0;
//     scanf("%d",&day);
//     switch (day)
//     {
//         case 1:
//         printf("星期一\n");
//         break; 
//         default:
//         printf("输入错误\n");
//         break;

//     }
//     return 0;
// }
// int main ()
// {
//     int ch = 0;
//     while((ch = getchar()) != EOF)
//     {
//         putchar(ch);
//     }
//     return 0;

// int main ()
// {
//     int arr[] ={73,32,99,97,110,32,100,111,32,105,116,33};
//     int i = 0;
//     int sz = sizeof arr / sizeof arr[0];
//     while (i<sz)
//     {
//         printf ("%c",arr[i]);
//         i ++;
//     }
//     return 0;
// }

//出生日期输入输出
// int main ()
//  {   //输入
//     int year = 0;
//     int month = 0;
//     int day = 0;
//     scanf("%4d%2d%2d",&year,&month,&day);
//     printf ("year=%d\n",year);
//     printf ("month=%02d\n",month);
//     printf ("day=%02d\n",day);
//     return 0;
//  }
// int main ()
// {
//    int id = 0;
//    float c = 0.0f;
//    float math = 0.0f;
//    float eng = 0.0f;//0.0f是为了说明是float类型
//    //输入
//    scanf ("%d.%f,%f,%f",&id,&c,&math,&eng);
//    //输出
//    printf ("The each subject score of No. %d is %.2f, %.2f ,%.2f.",id,c,math,eng);
//    return 0;
// }
// int main ()
// {
//    int n = printf("Hello world!");
//    printf ("\n%d\n",n);
//    return 0 ;
// }
// int main ()
// {
//    int arr[4] = {0};
//    int i = 0;
//    while(i<4)
//    {
//       scanf("%d",&arr);
//       i ++;
//    }
//    int max = arr[0];
//    while(i<4)
//    {
//       if(arr[i]>max)
//       {
//          max = arr[i];
//       }
//       i ++;
//    } 
//    printf ("%d\n",max);
//    return 0;
// }
// int main ()
// {
//    int i = 1;
//    int n = 0;
//    int max = 0;
//    scanf ("%d",&max);
//    while (i < 4)
//    {
//       scanf ("%d",&n);
//       if (n > max)
//       {
//          max = n;
//       }
//       i  ++;
//    }
//    printf ("%d\n",max);
//    return 0;
// }
// int main ()
// {
//    double r = 0.0;
//    double v = 0.0;
//    scanf ("%lf",&r);
//    v = 4/3.0*3.1415926*r*r*r;
//    printf ("%.3lf\n",v);
//    return 0;
// }
int main()
{
   int weight = 0;
   int high = 0;
   scanf ("%d %d",&weight ,&high);
   float bmi = weight/(high/100.0)/(high/100.0);
   printf ("%.2f\n",bmi);
   return 0;
}