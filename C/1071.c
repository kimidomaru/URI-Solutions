#include <stdio.h>
 
int main() {
 
    int x,y,i;
    int soma=0;
    scanf("%d %d\n",&x,&y);
        for(i=y+1;i<x;i++){
            if(i%2!=0)
                soma+=i;
        }
    printf("%d\n",soma);    
 
    return 0;
}