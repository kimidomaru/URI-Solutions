#include <stdio.h>
 
int main() {
 
   int codigo,numero,codigo2,numero2;
   float valor,valor2;
   float x;
   scanf("%d %d %f\n",&codigo,&numero,&valor);
   scanf("%d %d %f\n",&codigo2,&numero2,&valor2);
   x=(numero*valor)+(numero2*valor2);
   printf("VALOR A PAGAR: R$ %.2f\n",x);
 
    return 0;
}