#include <stdio.h>
int main()
{
	int n;
	do{
		scanf("%d\n",&n);
		int i,soma=0;
		if(n==0)
			break;
		else if(n%2==0){
			for(i=n; i<=n+8; i+=2)
				soma+=i;
        }
        else
        {
            for(i=(n+1);i<=n+9;i+=2)
            	soma+=i;
        }
        printf("%d\n", soma);
		}
	while(n!=0);

	return 0;
}