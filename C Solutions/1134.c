#include <stdio.h>
int main()
{
	int tipo[4] = {1,2,3,4};
	int codigo;
	int alcool=0,gasolina=0,diesel=0;
	do{
		scanf("%d\n",&codigo);
		if(codigo==1)
			alcool++;
		else if (codigo==2)
			gasolina++;
		else if(codigo==3)
			diesel++;
	}
	while(codigo!=4);
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",alcool);
	printf("Gasolina: %d\n",gasolina);
	printf("Diesel: %d\n",diesel);

	return 0;
}