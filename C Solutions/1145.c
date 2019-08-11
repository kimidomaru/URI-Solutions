#include <stdio.h>
int main()
{
	int n,x,i;
	int count=0;
	scanf("%d %d\n",&x,&n);
	for (i = 1; i<=n; i++)
	{
		if(count==(x-1)){
			printf("%d",i);
			count++;
		}
		else{
			printf("%d ",i);
			count++;
		}
		if(count==x){
			printf("\n");
			count=0;
		}
	}

	return 0;
}