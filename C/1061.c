#include <stdio.h>

int main() {
 
   int dia,hora,min,seg;
   scanf("Dia %d",&dia);
   scanf("%d : %d : %d\n",&hora,&min,&seg);
   int dia2,hora2,min2,seg2;
   scanf("Dia %d",&dia2);
   scanf("%d : %d : %d\n",&hora2,&min2,&seg2);
   
   seg2=seg2-seg;
		if(seg2<0){
			min2--;
			seg2+=60;
		}
		min2=min2-min;
		if(min2<0){
			hora2--;
			min2+=60;
		}
		hora2=hora2-hora;
		if(hora2<0){
			dia2--;
			hora2+=24;
		}
		dia2=dia2-dia;
	printf("%d dia(s)\n",dia2);
	printf("%d hora(s)\n",hora2);
    printf("%d minuto(s)\n",min2);
    printf("%d segundo(s)\n",seg2);
 
    return 0;
}