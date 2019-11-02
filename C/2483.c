#include <stdio.h>

int main() {
    double v, d, r,pi =3.14;

    while(scanf("%lf %lf",&v,&d)!=EOF){
        r=d/2;
        double area = pi*r*r;
        double altura=v/area;
        printf("ALTURA = %.2lf\n",altura);
        printf("AREA = %.2lf\n",area);
    }

    return 0;
}
