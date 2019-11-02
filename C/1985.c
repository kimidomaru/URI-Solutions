#include <stdio.h>
int main(){
	int t;
	scanf("%d\n",&t);
	int codigo,qt,i;
	float preco,valor=0;
	for(i=0;i<t;i++){
		scanf("%d %d",&codigo,&qt);
		if(codigo==1001)
			preco=1.50;
		else if(codigo==1002)
			preco=2.50;
		else if(codigo==1003)
			preco=3.50;
		else if(codigo==1004)
			preco=4.50;
		else if(codigo==1005)
			preco=5.50;
		valor+=preco*qt;
	}
	printf("%.2f\n",valor);
	return 0;
}