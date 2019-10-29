#include <stdio.h>
int main()
{
	int n;
	scanf("%d\n",&n);
	int i,numero,j,soma=0;
	for(i=0;i<n;i++){
		soma=0;
		scanf("%d\n",&numero);
		for(j=1;j<numero;j++){
			if(numero%j==0)
				soma+=j;
		}
		if(soma==numero)
			printf("%d eh perfeito\n",numero);
		else
			printf("%d nao eh perfeito\n",numero);
	}

	return 0;
}