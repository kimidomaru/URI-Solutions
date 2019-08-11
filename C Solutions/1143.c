#include <stdio.h>
int main()
{
	int n;
	int i;
	scanf("%d\n",&n);
	for (i = 1; i<=n; i++)
	{
		printf("%d %d %d\n",i,(i*i),(i*i*i));
	}

	return 0;
}