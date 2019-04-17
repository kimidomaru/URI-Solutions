#include <stdio.h>
 
int main() {
 
        int i,j=0;
		double n;
		double soma=0;
		double media=0;
		for(i=0;i<=5;i++){
			scanf("%lf \n",&n);
			if(n>0){
				j++;
				soma+=n;
			}
		}
		media=soma/j;
		printf("%d valores positivos\n",j);
		printf("%.1lf\n",media);
    return 0;
}