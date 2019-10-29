#include <stdio.h>
 
int main() {
 
   int n;
   scanf("%d\n",&n);
   int i;
   int prod=0;
   if(n>2){
   for(i=1;i<=10;i++){
       prod=i*n;
       printf("%d x %d = %d\n",i,n,prod);
   }
   }
 
    return 0;
}