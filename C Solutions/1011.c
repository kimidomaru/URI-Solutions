#include <stdio.h>
 
int main() {
 
    double R;
    double volume;
    scanf("%lf\n",&R);
    volume = (4/3.0)*3.14159*R*R*R;
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}