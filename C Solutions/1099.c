#include <stdio.h>
 
int main() {
    int teste;
    scanf("%d\n",&teste);
    int n1,n2;
    int i,j;
    int soma=0;
    for(i=0;i<teste;i++){
        scanf("%d %d\n",&n1,&n2);
        if(n1<=n2){
            soma=0;
        for(j=(n1+1);j<n2;j++){
            if(j%2!=0)
                soma+=j;
        }
        }
        else{
            soma=0;
            for(j=(n2+1);j<n1;j++){
            if(j%2!=0)
                soma+=j;
        }
        }
        printf("%d\n",soma);
    }
 
    return 0;
}