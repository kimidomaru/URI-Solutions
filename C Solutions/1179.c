#include <stdio.h>

int main()
{
	int n,i,j=0,k=0,count;
	int impar[5],par[5];
	for(i=0;i<15;i++){
		scanf("%d\n",&n);
		if(n%2==0){
			par[j]=n;
			j++;
		}
		else{
			impar[k]=n;
			k++;
		}
		if(j==5){
			for(count=0;count<j;count++){
				printf("par[%d] = %d\n",count,par[count]);
			}
			j=0;
		}
		if(k==5){
			for(count=0;count<k;count++){
				printf("impar[%d] = %d\n",count,impar[count]);
			}
			k=0;
		}
		if(i==14){
			for(count=0;count<k;count++){
				printf("impar[%d] = %d\n",count,impar[count]);
			}
			for(count=0;count<j;count++){
				printf("par[%d] = %d\n",count,par[count]);
			}
		}
	}
	return 0;
}