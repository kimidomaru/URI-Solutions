#include <stdio.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	int i,t,menor,menorp;
	for(i=1;i<=n;i++){
		scanf("%d\n",&t);
		if(i==1){
			menor=t;
			menorp=i;
		}
		else if(menor>t){
			menor=t;
			menorp=i;
		}
	}
	printf("%d\n",menorp);

	return 0;
}