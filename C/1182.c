#include <stdio.h>
int main()
{
	int l;
	scanf("%d\n",&l);
	int i,j;
	char T;
	scanf("%c\n",&T);
	float soma=0;
	float matriz[12][12];
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%f\n",&matriz[i][j]);
			if(j==l)
				soma+=matriz[i][j];
		}
	}
	if(T=='M')
		soma=soma/12;
	printf("%.1f\n",soma);

	return 0;
}