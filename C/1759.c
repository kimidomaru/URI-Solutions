#include <stdio.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	int i;
	for(i=0;i<n;i++){
		if(i==n-1)
			printf("Ho!\n");
		else
			printf("Ho ");
	}

	return 0;
}