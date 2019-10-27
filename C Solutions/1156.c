#include <stdio.h>
int main()
{
	float s=1,i=1;
	float soma=0;
	for (i = 1; i <=39;i+=2)
	{
		soma+=i/s;
		s*=2;
	}
	printf("%.2f\n",soma);

	return 0;
}