#include <stdio.h>
 
int main() {
 
    int i,j2;
    int j=7;
    for(i=1;i<=9;i+=2){
        j2=j;
        for(j=j2;j>=(j2-2);j--){
            printf("I=%d J=%d\n",i,j);
        }
        j+=5;
    }
 
    return 0;
}