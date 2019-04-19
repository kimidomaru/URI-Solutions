#include <stdio.h>
 
int main() {
 
   int n,i;
   int maior,pos=0;
   for(i=1;i<=100;i++){
			scanf("%d\n",&n);
			if(n>maior){
				maior=n;
				pos=i;
			}
		}
	printf("%d\n",maior);
	printf("%d\n",pos);
 
    return 0;
}