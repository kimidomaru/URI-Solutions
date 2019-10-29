#include <stdio.h>
int main()
{
	int gol1, gol2;
	int gremio=0,inter=0,empate=0;
	int consulta;
	int quantidade=0;
	do{
		scanf("%d %d\n",&gol1,&gol2);
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d\n",&consulta);
		if(gol1>gol2){
			inter++;
			quantidade++;
		}
		else if(gol1<gol2){
			gremio++;
			quantidade++;
		}
		else{
			empate++;
			quantidade++;
		}
	}
	while(consulta!=2);
	printf("%d grenais\n",quantidade);
	printf("Inter:%d\n",inter);
	printf("Gremio:%d\n",gremio);
	printf("Empates:%d\n",empate);
	if(inter>gremio)
		printf("Inter venceu mais\n");
	else
		printf("Gremio venceu mais\n");



	return 0;
}