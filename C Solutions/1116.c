#include <stdio.h>
 
int main() {
 
   int n;
   scanf("%d\n",&n);
   int i;
   int x,y;
   float q;
   for(i=0;i<n;i++){
       scanf("%d %d\n",&x,&y);
       if(y==0)
            printf("divisao impossivel\n");
        else{
            q=x/(y*1.00);
            printf("%.1f\n",q);
        }
   }
 
    return 0;
}