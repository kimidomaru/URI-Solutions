#include <stdio.h>
 
int main() {
 
   int teste,i;
   float x,y,z,media;
   scanf("%d\n",&teste);
   for(i=0;i<teste;i++){
			scanf("%f %f %f\n",&x,&y,&z);
			media=((2*x)+(3*y)+(5*z))/10;
		    printf("%.1f\n",media);
		}
 
    return 0;
}