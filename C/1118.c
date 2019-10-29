#include <stdio.h>
int main()
{
	int j, i;
	float n, media;
	do{
		i=0;
		media=0.0;
		while(i<2)
		{
			scanf("%f", &n);
			if(n>=0.0 && n<=10.0)
			{
				i++;
				media+=n;
			}
			else
			{
			printf("nota invalida\n");
			}
		}
	printf("media = %.2f\n", media/2.0);
	do{

	printf("novo calculo (1-sim 2-nao)\n");

	scanf("%d", &j);

	}while(j!=1 && j!=2);

	}while(j!=2);

	return 0;
}