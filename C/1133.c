#include <stdio.h>
 
int main() {
 	int x,y;
 	scanf("%d\n",&x);
 	scanf("%d\n",&y);
 	int maior=0;
 	int menor=0;
 	if(x>=y){
 		maior=x;
 		menor=y;
 	}
 	else {
 		maior=y;
 		menor=x;
 	}
 	int i;
 	for(i=(menor+1);i<maior;i++){
 		if(i%5==2 || i%5==3){
 			printf("%d\n",i);
 		}
 	}
 
    return 0;
}