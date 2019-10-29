#include <stdio.h>
 
int main() {
 
    int idade;
    int ano,mes,dia,x;
    scanf("%d\n",&idade);
    ano=idade/365;
    x=idade%365;
    mes=x/30;
    dia=x%30;
    
    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dia);
    return 0;
}