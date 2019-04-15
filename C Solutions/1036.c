#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A,B,C;
    double delta;
    double r1,r2;
    scanf("%lf %lf %lf",&A,&B,&C);
    delta=B*B+(-4*A*C);
    if(A!=0 && delta>0){
        r1=(-B+sqrt(delta))/(2*A);
        r2=(-B-sqrt(delta))/(2*A);
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}