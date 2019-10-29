#include <stdio.h>
 
int main() {
 
    int vetor[10];
    int n;
    scanf("%d\n",&n);
    int i;
    for(i=0;i<10;i++){
        if(i==0)
            vetor[i]=n;
        else{
            vetor[i]=2*n;
            n=vetor[i];
        }
    }
    for(i=0;i<10;i++){
        printf("N[%d] = %d\n",i,vetor[i]);   
    }
 
    return 0;
}