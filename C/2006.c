#include <stdio.h>
int main(){
	int t;
	scanf("%d\n",&t);
	int numero[5],qt=0,i;
	for(i=0;i<5;i++){
			scanf("%d ",&numero[i]);
			if(numero[i]==t)
				qt++;
	}
	printf("%d\n",qt);

	return 0;
}