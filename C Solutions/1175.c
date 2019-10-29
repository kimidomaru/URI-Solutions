#include <stdio.h>
 
int main() {
 
   int vetor[20];
   int i=0;
   int j;
   for(i=0;i<20;i++){
       scanf("%d\n",&vetor[i]);
   }
   for(i=0, j=19;j>=0;j--){
       printf("N[%d] = %d\n",i,vetor[j]);
       i++;
   }
 
    return 0;
}