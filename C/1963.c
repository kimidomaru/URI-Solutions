#include <stdio.h>
int main(){
	double a,b,x;
	scanf("%lf %lf\n",&a,&b);
	x*=a;
	x=(b*100)/a;
	x=x-100;
	printf("%.2lf%%\n",x);

	return 0;
}