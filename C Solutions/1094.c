#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n;
    scanf("%d\n",&n);
    char tipo[3];
    int somar=0;
    int somac=0;
    int somas=0;
    int total=0;
    int i,quantia;
    for(i=0;i<n;i++){
        scanf("%d %s\n",&quantia,tipo);
        if(strcmp(tipo,"C")==0){
                somac+=quantia;
        }
        else if(strcmp(tipo,"S")==0){
                somas+=quantia;
        }
        else if(strcmp(tipo,"R")==0){
                somar+=quantia;
        }
    }
    total=somar+somac+somas;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",total,somac,somar,somas);
    printf("Percentual de coelhos: %.2f %\n", (float)somac * 100.0 / total);
    printf("Percentual de ratos: %.2f %\n", (float)somar * 100.0 / total);
    printf("Percentual de sapos: %.2f %\n", (float)somas * 100.0 / total);
    
    return 0;
}