#include <stdio.h>
int main(){
int i,k,j;
printf("Какая размерность будет в массиве?\n");
scanf("%d",&k);
int a[k];

for(i=0;i<k;i++) {
printf("Введите элементы массива a[%d]=",i);
scanf("%d",&a[i]);
}
printf("Ваш массив: {");
for (i = 0; i < k; i++) {
printf("%d", a[i]);
if (i < k-1) {
printf(", ");
}
}
printf("}\n");


int h=0,count=0;
for(i=0;i<k;i++){
  for(j=0;j<k;j++){
    if(a[i]==a[j] && i!=j){
        h=h+1;
    }
  }
    if (h==0) {
    count=count+1; 
    }
  h=0;
  }

printf("Количество не повторяющихся элементво равно %d\n",count);

return 0;
} 
