#include <stdio.h>
 
int main() {
 
        double salario;
        scanf("%lf\n",&salario);
		double imposto;
		int milhar=1000;
		double resto;
		if(salario>=0 && salario<=2000)
			imposto=0;
		else if(salario>2000 && salario<=3000){
			salario=salario-2000;
			imposto=salario*0.08;
		}
		else if(salario>3000 && salario<=4500){
			salario=salario-2000;
			resto=salario-milhar;
			salario=salario-resto;
			imposto=resto*0.18+salario*0.08;
		}
		else{
			salario=salario-2000;
			resto=salario-milhar;
			salario=salario-resto;
			if(resto>1500)
				resto=resto-1500;
			imposto=salario*0.08+1500*0.18+resto*0.28;
		}
		if(imposto==0)
			printf("Isento\n");
		else
		    printf("R$ %.2lf\n",imposto);
 
    return 0;
}