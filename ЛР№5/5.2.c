#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n,i,j;
    printf("Введите количество строк матрицы:\n");
    scanf("%d",&n);
    printf("Введите количесво столбцов матрицы:\n");
    scanf("%d",&m);
    int a[n][m];
    

    for( i = 0;i < n;i++){
        for( j = 0;j < m;j++){
            printf("Введите элемент матрицы[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Введённая вами матрица:\n");
    for( i = 0;i < n;i++){
        for( j = 0;j < n;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

    int sum[n],zamen_str, zamen;
    for( i = 0;i < n;i++){
        sum[i]=0;
        for(j=0;j<m;j++){
            if(a[i][j]>0 && a[i][j]%2==0){
                sum[i]+=a[i][j];
            }
        }
    }

    for(i = 0 ; i < n - 1; i++) {
        for(j = 0 ; j < n - i - 1 ; j++) 
            if(sum[j] > sum[j+1]) {
                zamen=sum[j];
                sum[j]=sum[j+1] ;
                sum[j+1]=zamen;
                for(int k=0;k<m;k++){
                    zamen_str=a[j][k];
                    a[j][k]=a[j+1][k];
                    a[j+1][k]=zamen_str;
                }
            }
    }
    printf("Матрица изменена в соответствии с ростом характеристик:\n");

    for( i = 0;i < n; i++){
        for( j = 0; j < m; j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
