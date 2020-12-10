#include <stdio.h>
#include <math.h>

void main() {
    int N, M, T,pos;
    printf("Введите число людей,стоящих в кругу (от 5 и больше):\n");
    scanf("%d",&N);
    printf("До скольки введётся счет:\n");
    scanf("%d ",&M);
    printf("С какого игрока начинается счет:\n");
    scanf("%d",&T);
    int a[N],w[N];
    T--;
    for (int i =0 ; i < N; i++) {
        a[i]=i+1;
    }
    for (int i = 0; i < N; i++) {
        w[i] = 0;
    }
    for (int i = N; i > 0; i--) {
        pos = ((M + T) % i);
        if (pos == 0) {     
            pos = i; 
            }
        w[i-1] = a[pos-1];
        for (int j = pos-1; j < i; j++) {
            a[j] = a[j + 1];
        }
        T = pos-1;
    }
    printf("Первая пятёрка выбывших игроков:\n%d\n %d\n %d\n %d\n %d\n", w[N-1], w[N - 2], w[N - 3], w[N - 4], w[N - 5]);
    printf("Победитель:\n%d\n",w[0]);
}
