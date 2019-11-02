#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	int i,t;
	char nome[5];
	for(i=0;i<n;i++){
		scanf("%s",nome);
		scanf("%d\n",&t);
		if(strcmp(nome,"Thor")==0)
			printf("Y\n");
		else
			printf("N\n");
	}

	return 0;
}