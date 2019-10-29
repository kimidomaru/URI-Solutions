#include <stdio.h>
int main()
{
	int i,j,k=0,x=1;
	char T;
	scanf("%c\n",&T);
	double soma=0;
	double matriz[12][12];
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%lf\n",&matriz[i][j]);
			if(j>=x && j<=11-x){
				soma+=matriz[i][j];
				k++;
			}
		}
		x++;
	}
	if(T=='M')
		soma=soma/k;
	printf("%.1lf\n",soma);

	return 0;
}