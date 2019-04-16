#include <stdio.h>
 
int main() {
 
   int horai,horaf,duracao;
   scanf("%d %d\n",&horai,&horaf);
   if(horai>=horaf)
        horaf+=24;
    duracao=horaf-horai;
    printf("O JOGO DUROU %d HORA(S)\n",duracao);
 
    return 0;
}