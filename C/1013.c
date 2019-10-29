#include <stdio.h>
 
int main() {
 
   int a,b,c;
   scanf("%d %d %d\n",&a,&b,&c);
   if(a>b)
        if(a>c)
        printf("%d eh o maior\n",a);
    if(b>a)
        if(b>c)
        printf("%d eh o maior\n",b);
    if(c>a)
        if(c>b)
        printf("%d eh o maior\n",c);
 
    return 0;
}