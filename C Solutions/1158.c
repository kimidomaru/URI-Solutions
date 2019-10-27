#include <stdio.h>
int main()
{
	int n;
	scanf("%d\n",&n);
	int i=0;
	int soma=0;
	for(i=0;i<n;i++){
		soma=0;
		int x,y;
		scanf("%d %d\n",&x,&y);
		int j,k;
		if(x%2!=0)
			j=x;
		else
			j=x+1;
		for(k=0;k<y;k++){
			soma+=j;
			j+=2;
		}
		printf("%d\n",soma);
	}

	return 0;
}