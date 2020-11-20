#include <stdio.h>
void main(){
    int a,b,c,m, i;
    printf("Введите m рублей\n");
    scanf("%d",&m);
    i =0;

    for ( a=0; a<10; a++)
    {
        for ( b=0; b<=10; b++)
        {
            for ( c=0; c<10; c++)
            {
            if (a+3*b+5*c==m && a+b+c==10 && i == 0) {
            printf("Yes\n");
            i=1;
            }
            }
        }
    }
    if ( i==0)
    printf("No\n");
}
