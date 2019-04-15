#include <stdio.h>
 
int main() {
 
    int X;
    float Y;
    float valor;
    
    scanf("%d %f\n",&X,&Y);
    valor=X/Y;
    printf("%.3f km/l\n",valor);
    
 
    return 0;
}