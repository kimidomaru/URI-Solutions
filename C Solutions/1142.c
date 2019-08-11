#include <stdio.h>
 
int main() {
 
        int n;
        scanf("%d\n",&n);
		int j,i2;
		int i=1;
		for(j=0;j<n;j++){
			i2=i;
			for(i=i2;i<(i2+3);i++){
				printf("%d ",i);
			}
			printf("PUM\n");
			i+=1;
		}
 
    return 0;
}