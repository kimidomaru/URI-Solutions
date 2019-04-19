#include <stdio.h>
 
int main() {
 
    int q,n,i;
    scanf("%d\n",&q);
    for(i=0;i<q;i++){
        scanf("%d\n",&n);
        if(n==0)
            printf("NULL\n");
        else{
            if(n%2==0)
                printf("EVEN ");
            if(n%2!=0)
                printf("ODD ");
            if(n>0)
                printf("POSITIVE\n");
            if(n<0)
                printf("NEGATIVE\n");
        }
    }
 
    return 0;
}