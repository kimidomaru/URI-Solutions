#include <stdio.h>
 
int main() {
 
    int x,y,i;
	int soma=0;
	int maior=0;
	int menor=0;
	scanf("%d %d\n",&x,&y);
	if(x>maior)
		maior=x;
	if(y>maior){
		maior=y;
		menor=x;
	}
	else
		menor=y;
	for(i=menor;i<=maior;i++){
		if(i%13!=0)
			soma+=i;
	}
	printf("%d\n",soma);
 
return 0;
}