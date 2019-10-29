#include <stdio.h>
int main()
{
	int x,z;
	int i=0,soma=0;
	scanf("%d %d\n",&x,&z);
	if(z<=x){
		while(z<=x)
			scanf("%d \n",&z);
	}
	while(soma<=z){
		soma+=x;
		x++;
		i++;
	}
	printf("%d\n",i);

	return 0;
}