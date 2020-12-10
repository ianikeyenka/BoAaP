#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Введите размер квадратной матрицы:\n");
    scanf("%d",&n);
    int a[n][n];

    printf("Ваша матрица будет заполнена случайными числами от -1 до 10\n");
    int p,o;
    p=10;
    o=-1;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            a[i][j]=o+rand()%(p - o +1);
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

    int i,f,q,j;
    q=1;

    for(int j=0;j<n;j++){
        int p = 0;
        int sum=0;
        for (int i = 0; i < n; i++) 
        if(a[i][j]>=0) p++;
        if(p==n){
            for(int k=0;k<n;k++)
            sum+=a[k][j];
            printf("Сумма столбцов с положительными элементами: %d\n",sum);
            q=0;
        }
    }
        if(q==1)
    {
        printf("Нету таких сталбцов\n");
    }
    
    int sum,summin;
    for (int i = 0; i< n - 1; i++)
    {
        int sum = 0;
        for (int j = 0; j <= i; j++)
        {
            if (j != n - 1)
            {
                sum += abs(a[i - j][j]);
            }
            if ((i == 0) || (summin > sum))
            {
                summin = sum;
            }
        }
    }
    
    for (int i = 1; i< n - 1; i++) 
    {
        int sum = 0;
        for (int j = 0; j < n - i; j++)
        {
            sum += abs(a[i + j][n - i - j]);
        }
        if (summin > sum)
        {
            summin = sum;
        }
    }
    if (abs(a[n - 1][n - 1]) < summin)
    {
        summin = abs(a[n - 1][n - 1]);
    }
    printf("Минимальная сумма модулей элементов диагонали,параллельной побочной: %d\n",summin);
    return 0;
}
