#include <stdio.h>

int main()
{
	char frase[34]={'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M'
					,' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
	int i,n;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		printf("%c",frase[i]);
	}
	printf("\n");
	

	return 0;
}