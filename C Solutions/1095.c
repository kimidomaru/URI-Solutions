#include <stdio.h>
 
int main() {
 
    int i=1;
    int j=60;
    for(i=1,j=60;j<=60;i+=3,j-=5){
        printf("I=%d J=%d\n",i,j);
        if(j==0)
            break;
    }
 
    return 0;
}