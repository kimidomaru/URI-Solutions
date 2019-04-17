#include <stdio.h>
 
int main() {
 
    int i,j=0;
		int n;
		for(i=0;i<=4;i++){
			scanf("%d\n",&n);
			if(n%2==0){
				j++;
			}
		}
		printf("%d valores pares\n",j);
 
    return 0;
}