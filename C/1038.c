#include <stdio.h>
int main() {
 
    int n,q;
    float valor;
    scanf("%d %d\n",&n,&q);
    switch(n){
        case 1:
            valor=4.00*q;
        break;
        case 2:
            valor=4.50*q;
        break;
        case 3:
            valor=5.00*q;
        break;
        case 4:
            valor=2.00*q;
        break;
        case 5:
            valor=1.50*q;
        break;
    }
    printf("Total: R$ %.2f\n",valor);
    
    
 
    return 0;
}