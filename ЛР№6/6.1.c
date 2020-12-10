#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
void main()

{
    int *a,n,m,i;
    printf("%s\n", "Какое количество элементов будет в массиве? ");
	scanf("%d", &n);

    a = (int*) malloc( n*sizeof(*a) );
    for ( i = 0; i < n; i++) {
        printf("Введите элементы массива a[%d]=",i+1);
        scanf("%d",&*(a+i));
        } 

    printf("Ваш массив: {");
    for ( i = 0; i < n; i++) {
            printf("%d",*(a+i));
            if (i < n-1) {
                printf(", ");
        } 
    }
    printf("}\n");

    int number,max;
    max = *(a+0);
    for( i = 1; i < n; i++){
        if (abs(max) < abs(*(a+i))){
            max = *(a+i);
            number = i;
        }
    }
    printf("Модуль максимального элемента равен %d и находится под номером [%d]\n", max, number+1);

    int sum,j;
    for( i=0 ; i<n ; i++){
        sum = 0;
        if(*(a+i)>0){
            for( j = i + 1; j < n; j++){
                sum+ = *(a+j);
            }
            break;
        }
    }
    printf("Сумма равна: %d\n",sum);
}
