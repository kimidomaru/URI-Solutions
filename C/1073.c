#include <stdio.h>
 
int main() {
 
    int n,i,x,q;
    scanf("%d\n",&n);
    if(n>5 && n<2000){
			q=2;
			for(i=2;i<=n;i++){
				if(i%2==0){
					x=i*i;
					printf("%d^%d = %d\n",i,q,x);
		        }
	        }
    }
    return 0;
}