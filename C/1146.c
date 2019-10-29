#include <stdio.h>
int main()
{
	int n,j=0,i;
	do{
		scanf("%d\n",&n);
		i=1;
		for(i=1;i<=n;i++){
			if(j==(n-1)){
			printf("%d",i);
			j++;
			}
			else{
				printf("%d ",i);
				j++;
			}
			if(j==n){
				printf("\n");
				j=0;
			}
		}
	}
	while(n!=0);
	

	return 0;
}