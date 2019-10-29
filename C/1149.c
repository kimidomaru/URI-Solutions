#include <stdio.h>
int main()
{
	int n,a;
	int i,soma=0;
	scanf("%d %d\n",&a,&n);
	if(n<=0){
		while(n<=0)
			scanf("%d \n",&n);
	}
	for(i=0;i<n;i++){
		soma+=a;
		a++;
	}
	printf("%d\n",soma);

	return 0;
}