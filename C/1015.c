#include <stdio.h>
 
int main() {
 
    float x1,y1,x2,y2,d;
    scanf("%f %f %f %f\n",&x1,&y1,&x2,&y2);
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.4f\n",d);
 
    return 0;
}