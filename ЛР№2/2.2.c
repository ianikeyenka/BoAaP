#include <stdio.h>
void main()
{ 
    int a,b,c;
     printf("Введите переменную a:");
     scanf("%d",&a);
     printf("Введите переменную b:");
     scanf("%d",&b);
     printf("Введите переменную c:");
     scanf("%d",&c);
     if (a+b>c && b+c>a && a+c>b) {
         printf("Yes");
     }else {
         printf("No");
     }
}
