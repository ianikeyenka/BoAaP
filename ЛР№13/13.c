#include <stdio.h>
#include <stdlib.h>
void record(int *, int );
void search(int *,int );
void deleteZero(int *, int , int ,int );
void sortingPlus(int *, int, int );
void sortingMinus(int *, int ,int );
void showMe(int *,int );
int main(){
    int size;
    printf("Введите размер вашего массива X[]:\n");
    scanf("%d",&size);
    int X[size];
    int ott=-10;
    int dot=20;
    for( int i = 0; i < size; i++)
    {
        X[i]=ott+rand()%(dot - ott + 1);
            printf("Ваш одномерны массив X[%d]=%d\n",i+1,X[i]);
    }
    record(X,size);
    return 0;
}
void record(int X[], int size)
{
    int Y[size];
    printf("Элементы массива X записаны в Y и отсортирован:\n");
    for(int i = 0; i < size; i++){
        Y[i]=X[i];
    }
        search(Y,size);
}
//находит количество положительных, отрицательных и нуливых элементов
void search(int Y[],int size)
{
    int plus = 0;
    int minus = 0;
    int zero = 0;
    for(int i = 0; i < size; i++){
            if(Y[i] > 0){
                plus++;
        }
        if(Y[i] < 0){
            minus++;
        }
        if(Y[i] == 0){
            zero++;
        }
    }
    deleteZero(Y,plus,zero,size);
}
//убирает нули из массива
void deleteZero(int Y[],int plus, int zero,int size)
{
    for(int i = 0; i < size; i++){
        for(int j = size; j >= i; j--){
            if(Y[j] == 0 && i+1 < size){
                int sort=Y[j];
                Y[j]=Y[j+1];
                Y[j+1]=sort;
            }
        }
    }
    int newSize = size - zero;
    sortingPlus(Y,plus,newSize); 
}
//сортирует положительные элементы по возрастанию в начале
void sortingPlus(int Y[], int plus, int newSize)
{
    for(int i = 0; i < newSize; i++){
        for(int j = 0; j < newSize;j++){
            if( Y[j] > 0 && (j-1 >= 0)) {
                int sort=Y[j];
                Y[j]=Y[j-1];
                Y[j-1]=sort;
            }
        }
    }
    for(int i = 0; i < plus ; i++){
        for(int j = 0; j < plus ;j++){
            if(Y[j] > Y[j+1] && (j+1) < plus){
                int sort=Y[j];
                Y[j]=Y[j+1];
                Y[j+1]=sort;
            }
        }
    }
    sortingMinus(Y,plus,newSize);
}
//сортирует отрицательные элементы в конце
 
void sortingMinus(int Y[], int plus, int newSize)
{
    for(int i = plus; i < newSize - 1; i++){
        for(int j = plus; j < newSize - 1;j++){
            if(Y[j] < 0 && Y[j] < Y[j+1]){
                int sort=Y[j];
                Y[j]=Y[j+1];
                Y[j+1]=sort;
            }
        }
    }
    showMe(Y,newSize);
}
//выводит сортированный массив на экран
void showMe(int Y[],int newSize)
{
    printf("Полученный массив: {");
  for (int i = 0; i < newSize; i++) {
    printf("%d", Y[i]);
    if (i < newSize - 1) {
      printf(", ");
    } 
  }
  printf("}\n");
}
