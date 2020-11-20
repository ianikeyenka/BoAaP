#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main(void) 
{
    setlocale(LC_ALL,"Russian");

    float x,m,z;
    
    printf("Введите переменную x:");
    scanf("%f",&x);
    m=pow(x,3);
    z=8*m;
    printf("%f", z);
}
