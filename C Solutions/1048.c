#include <stdio.h>
 
int main() {
 
   double salario,salariof;
   int percentual;
   scanf("%lf\n",&salario);
   if(salario>=0 && salario <=400){
        salariof=salario*1.15;
        percentual=15;
        printf("Novo salario: %.2lf\n",salariof);
        printf("Reajuste ganho: %.2lf\n",salariof-salario);
        printf("Em percentual: %d %\n",percentual);
    }
    else if(salario>400 && salario <=800){
        salariof=salario*1.12;
        percentual=12;
        printf("Novo salario: %.2lf\n",salariof);
        printf("Reajuste ganho: %.2lf\n",salariof-salario);
        printf("Em percentual: %d %\n",percentual);
    }
     else if(salario>800 && salario <=1200){
        salariof=salario*1.10;
        percentual=10;
        printf("Novo salario: %.2lf\n",salariof);
        printf("Reajuste ganho: %.2lf\n",salariof-salario);
        printf("Em percentual: %d %\n",percentual);
    }
    else if(salario>1200 && salario <=2000){
        salariof=salario*1.07;
        percentual=7;
        printf("Novo salario: %.2lf\n",salariof);
        printf("Reajuste ganho: %.2lf\n",salariof-salario);
         printf("Em percentual: %d %\n",percentual);
    }
     else if(salario>2000){
        salariof=salario*1.04;
        percentual=4;
        printf("Novo salario: %.2lf\n",salariof);
        printf("Reajuste ganho: %.2lf\n",salariof-salario);
         printf("Em percentual: %d %\n",percentual);
    }
 
    return 0;
}