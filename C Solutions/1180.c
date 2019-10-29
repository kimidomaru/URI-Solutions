#include <stdio.h>
 
int main() {
 
   int n;
   scanf("%d\n",&n);
   int vetor[n];
   int i,menor,posicao;
   for(i=0;i<n;i++){
       scanf("%d",&vetor[i]);
       if(i==0)
            menor=vetor[i];
        else if(vetor[i]<menor){
            menor=vetor[i];
            posicao=i;
        }
   }
   printf("Menor valor: %d\n",menor);
   printf("Posicao: %d\n",posicao);
 
    return 0;
}