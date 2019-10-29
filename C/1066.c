#include <stdio.h>
 
int main() {
 
        int i,j=0;
        int k=0;
		int l=0;
		int m=0;
		int n;
		for(i=0;i<=4;i++){
			scanf("%d\n",&n);
			if(n%2==0)
				j++;
			if(n%2!=0)
				k++;
			if(n>0)
				l++;
			if(n<0)
				m++;
		}
		printf("%d valor(es) par(es)\n",j);
		printf("%d valor(es) impar(es)\n",k);
		printf("%d valor(es) positivo(s)\n",l);
		printf("%d valor(es) negativo(s)\n",m);
 
    return 0;
}