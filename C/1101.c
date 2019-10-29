#include <stdio.h>
 
int main() {
 
        int n;
		int m;
		int soma=0;
		int menor=0;
		int maior=0;
		int i;
		
		do{
		scanf("%d %d\n",&n,&m);
		if(m>0 && n>0){
			soma=0;
			if(maior<=m)
				maior=m;
			if(maior<n)
				maior=n;
			if(n<maior){
				menor=n;
			}
			else if(m<maior){
				menor=m;
			}
			for(i=menor;i<=maior;i++){
				soma+=i;
				printf("%d ",i);
			}
			printf("Sum=%d\n",soma);
		}
		}
		while(n>0 && m>0);
 
    return 0;
}