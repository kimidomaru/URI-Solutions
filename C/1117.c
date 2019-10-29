#include <stdio.h>
 
int main() {
 
        int i=0;
	    double notav=0;
		double media;
		while(i<2){
			double nota;
			scanf("%lf",&nota);
			if(nota>10.0 || nota<0.0)
				printf("nota invalida\n");
			else{
				i++;
				notav+=nota;
			}
			if(i==2){
			media=notav/i;
			printf("media = %.2lf\n",media);
			}
		}
 
    return 0;
}