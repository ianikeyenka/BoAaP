#include <stdio.h>
#include <string.h>
char  s1[1000],s2[1000];
void search(char * ,char*);
void main(){
	printf("Введите длинную строку используя только латинские буквы\n(после окончания ввода нажмите Enter,после чего Ctrl+D):\n");
	scanf("%s",s2);
    search(s1,s2);
}
void search(char s1[1000],char s2[1000]){
    int l1,l2;
    l2 = strlen(s2);
	while (scanf("%s", s1) == 1){
		l1 = strlen(s1);
		if ( l1< l2 ){
			l2 = l1;
			strcpy(s2,s1);
		}
	}
	printf("Слово минимальной длины состоит из %d элементов.Слово минимальной длины: %s.\n", l2, s2);
}
