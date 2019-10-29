#include <stdio.h>
 
int main() {
 
   int funcionario,hora;
   float salario,x;
   scanf("%d %d %f",&funcionario,&hora,&salario);
   x=hora*salario;
   printf("NUMBER = %d\n",funcionario);
   printf("SALARY = U$ %.2f\n",x);
 
    return 0;
}