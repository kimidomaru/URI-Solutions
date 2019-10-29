#include <stdio.h>
int main()
{
	int t;
	scanf("%d\n",&t);
	int i;
	int vetor[1000];
	int j=0;
	for(i=0;i<1000;i++){
		vetor[i]=j;
		if(j==t)
			j=0;
		printf("N[%d] = %d\n",i,j);
		j++;
	}

	return 0;
}