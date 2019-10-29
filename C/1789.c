#include <stdio.h>

int main()
{
	int n;
	int qt,maior=0;
	while(scanf("%d\n",&n)!=EOF){
		maior=0;
		int i;
		for(i=0;i<n;i++){
			scanf("%d ",&qt);
			if(maior<qt)
				maior=qt;
		}
		if(maior<10)
			printf("1\n");
		else if(maior<20)
			printf("2\n");
		else if(maior>=20)
			printf("3\n");
	}

	return 0;
}