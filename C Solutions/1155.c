#include <stdio.h>
int main()
{
	float s=1,i=1;
	float soma=0;
	for (i = 1; i <=100;i++)
	{
		soma+=s/i;
	}
	printf("%.2f\n",soma);

	return 0;
}