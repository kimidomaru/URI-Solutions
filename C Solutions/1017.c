#include <stdio.h>
 
int main() {
 
    float tempo, velocidade;
    float litros;
    scanf("%f %f\n",&tempo,&velocidade);
    litros=(tempo*velocidade)/12;
    printf("%.3f\n",litros);
    return 0;
}