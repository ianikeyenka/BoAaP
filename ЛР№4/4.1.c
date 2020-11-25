#include <stdio.h>
int main()
{
  int k,z,ch,r;

  printf("Какая размерность будет в массиве?\n");
  scanf("%d",&k);
  int a[k];

  for(int i = 0; i < k; i ++) {
    printf("Введите элементы массива a[%d]=",i);
    scanf("%d",&a[i]);
  }
  printf("Ваш массив: {");
  for (int i = 0; i < k; i++) {
    printf("%d", a[i]);
    if (i < k-1) {
      printf(", ");
    } 
  }
  printf("}\n");

  printf("На сколько нужно сдвинуть элементы массива влево?\n");
  scanf("%d",&z);

  for (int j = 0; j < z; j++) {
    ch = a[0];
    for (int i = 0; i < k-1 ; ++i) {
      a[i] = a[i+1];
    }
    a[k-1] = ch;
  }

  printf("Массива после сдвига: {");
  for (int i = 0; i < k; i++) {
    printf("%d", a[i]);
    if (i < k-1) {
      printf(", ");
    }
  }
  printf("}\n");

  return 0;
} 
