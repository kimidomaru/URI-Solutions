#include <stdio.h>
 
int main() {
 
    int segundos;
    int hora,min,sec,x;
    scanf("%d\n",&segundos);
    min=segundos/60;
    sec=segundos%60;
    hora=min/60;
    x=min%60;
    
    printf("%d:%d:%d\n",hora,x,sec);
 
    return 0;
}