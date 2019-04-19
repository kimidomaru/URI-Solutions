#include <stdio.h>
 
int main() {
 
    int i=1;
    int j=7;
    for(i=1;i<=9;i+=2){
        for(j=7;j>=5;j--){
             printf("I=%d J=%d\n",i,j);
        }
    }
 
    return 0;
}