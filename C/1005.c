#include <stdio.h>
 
int main() {
 
    double A,B;
    double MEDIA;
    scanf("%lf %lf",&A,&B);
    MEDIA=(A*3.5+B*7.5)/11;
    printf("MEDIA = %.5lf\n",MEDIA);
    return 0;
}