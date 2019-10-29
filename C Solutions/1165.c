#include <stdio.h>
 
int main() {
 
   int teste,x,i,j,contador;
   scanf("%d\n",&teste);
   for(i=1;i<=teste;i++){
        scanf("%d\n",&x);
        contador=0;
        for(j=1; j<=x; j++){
            if(x%j==0)
            contador++;
        }
        if(contador==2)
            printf("%d eh primo\n",x);
        else
            printf("%d nao eh primo\n",x);
    }
    return 0;
}