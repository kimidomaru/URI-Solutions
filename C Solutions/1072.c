#include <stdio.h>
 
int main() {
 
    int q,n,i;
    int j=0;
    int k=0;
    scanf("%d\n",&q);
    for(i=0;i<q;i++){
        scanf("%d\n",&n);
        if(n>=10 && n<=20)
            j++;
        else
            k++;
    }
    printf("%d in\n",j);
    printf("%d out\n",k);
 
    return 0;
}