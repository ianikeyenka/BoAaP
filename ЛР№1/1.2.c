#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main(void) {
    float x,y,z,s,r,l,a,o,m;
    printf("Введите переменную x:");
    scanf("%f",&x);

    printf("Введите переменную y:");
    scanf("%f",&y);
    
    printf("Введите переменную z:");
    scanf("%f",&z);

    a = pow(x, 1.0 / 3.0);
    o = pow(x, y + 2.0);
    s = (10.0 * (a + o));
    m = sqrt(s);
    l = asin(z);
    r = m * (pow(l, 2.0) - fabs(x - y));
    printf("%f",r);
}
