#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d\n",&n);
    int fat=1;
    int i;
    for(i=n;i>1;i--){
        fat*=i;
    }
    printf("%d\n",fat);
 
    return 0;
}