#include <stdio.h>
#include <stdlib.h>

void vvod(int**, int, int);
void vivod(int**, int, int);
void proverka(int**, int, int);

int main(){
    int **matr;
    int n,m;
    printf("Введите количество строк:\n");
    scanf("%d",&n);
    printf("Введите количество столбцов:\n");
    scanf("%d",&m);
    vvod(matr,n,m);
}
void vvod(int **a, int n,int m){
    a = (int**)malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++) 
    {
        a[i]= (int*)malloc(m * sizeof(int));
        for(int j = 0;j < m;j++)
        {
            printf("Введите элемент a[%d][%d]: ",i+1,j+1);
            scanf("%d",(a[i]+j));
        }
     }
     vivod(a,n,m);
}
void vivod (int **a, int n,int m)
{
    printf("Введённая вами матрица:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%4d",*(a[i]+j));
        }
        printf("\n");
    }
    proverka(a,n,m);
}
void proverka(int **a, int n, int m)
{
    int rows,collumn;
    int p = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(*(a[i]+j) < 0 && p == 0){
                rows = i;
                collumn = j;
                printf("Отрицательный элемент находится расположен под номером: [%d][%d]\n",rows+1,collumn+1);
                p = 1;
            }
        }
    }
    if(p == 0)
    printf("В матрице нету отрицательных элементов\n");           
}
