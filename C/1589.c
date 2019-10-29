#include <stdio.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	int i;
	for(i=0;i<n;i++){
		int a,b,soma;
		scanf("%d %d\n",&a,&b);
		soma=a+b;
		printf("%d\n",soma);
	}

	return 0;
}