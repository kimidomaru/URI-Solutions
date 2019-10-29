#include <stdio.h>
int main()
{
	double n;
	scanf("%lf\n",&n);
	double vetor[100];
	int i;
	double j=n;
	for(i=0;i<100;i++){
		vetor[i]=j;
		printf("N[%d] = %.4lf\n",i,j);
		j=j/2;
	}

	return 0;
}