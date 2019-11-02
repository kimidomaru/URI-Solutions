#include <stdio.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	int i,t;
	for(i=1;i<=n;i++){
		scanf("%d\n",&t);
		if(t%2==0)
			printf("0\n");
		else
			printf("1\n");
	}

	return 0;
}