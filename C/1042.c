#include <stdio.h>
 
int main() {
 
    int a,b,c,maior,meio,menor;
    scanf("%d %d %d\n",&a,&b,&c);
    if(a>b && a>c)
        maior=a;
    else if(b>a && b>c)
        maior=b;
    else if(c>a && c>b)
        maior=c;
    
    if(a<maior && a>b || a<maior && a>c)
        meio=a;
    else if(b<maior && b>a || b<maior && b>c)
        meio=b;
    else if(c<maior && c>a || c<maior && c>b)
        meio=c;
        
    if(a<maior && a<meio)
        menor=a;
    else if(b<maior && b<meio)
        menor=b;
    else if(c<maior && c<meio)
        menor=c;
        
    printf("%d\n",menor);
    printf("%d\n",meio);
    printf("%d\n",maior);
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
 
 
    return 0;
}