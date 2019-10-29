#include <stdio.h>
int main()
{
	int i,j,k=0;
	char T;
	scanf("%c\n",&T);
	double soma=0;
	double matriz[12][12];
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%lf\n",&matriz[i][j]);
			if(j<i && j+i<11){
				soma+=matriz[i][j];
				k++;
			}
		}
	}
	if(T=='M')
		soma=soma/k;
	printf("%.1lf\n",soma);

	return 0;
}