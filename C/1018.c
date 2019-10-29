#include <stdio.h>
 
int main() {

    int N,n1,n2,n3,n4,n5,n6,n7;
    int u,v,w,x,y,z;
    scanf("%d\n",&N);
    n1=N/100;
    u=N%100;
    n2=u/50;
    v=u%50;
    n3=v/20;
    w=v%20;
    n4=w/10;
    x=w%10;
    n5=x/5;
    y=x%5;
    n6=y/2;
    z=y%2;
    
    printf ("%d\n",N);  
    printf ("%d nota(s) de R$ 100,00\n",n1);  
    printf ("%d nota(s) de R$ 50,00\n",n2);  
    printf ("%d nota(s) de R$ 20,00\n",n3);  
    printf ("%d nota(s) de R$ 10,00\n",n4);  
    printf ("%d nota(s) de R$ 5,00\n",n5);  
    printf ("%d nota(s) de R$ 2,00\n",n6);  
    printf ("%d nota(s) de R$ 1,00\n",z);  
    return 0;
}