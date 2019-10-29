#include <stdio.h>
int main()
{
	int n,i=0;
	float soma=0;
	float media;
	do{
		scanf("%d\n",&n);
		if(n>=0){
			i++;
			soma+=n;
		}
	}
	while(n>=0);
	media=soma/i;
	printf("%.2f\n",media);

	return 0;
}