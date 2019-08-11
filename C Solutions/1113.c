#include <stdio.h>
 
int main() {
 
    int x,y;
		do{
			scanf("%d %d\n",&x,&y);
			if(x!=y){
				if(x>y)
					printf("Decrescente\n");
				else
					printf("Crescente\n");
			}
		}
		while(x!=y);
 
    return 0;
}