#include <stdio.h>
 
int main() {
 
   float a,b,c,x;
   scanf("%f %f %f\n",&a,&b,&c);
   if(a<b){
        x=a;
        a=b;
        b=x;
   }
    if(a<c){
        x=a;
        a=c;
        c=x;
    }
   if(b<c){
        x=b;
        b=c;
        c=x;
   }
    if(a>=b+c)
        printf("NAO FORMA TRIANGULO\n");
    else{
        if(a*a==(b*b)+(c*c))
            printf("TRIANGULO RETANGULO\n");
        if(a*a>(b*b)+(c*c))
            printf("TRIANGULO OBTUSANGULO\n");
        if(a*a<(b*b)+(c*c))
            printf("TRIANGULO ACUTANGULO\n");
        
        if(a==b && a==c)
            printf("TRIANGULO EQUILATERO\n");
        else if(a==b ||b==c||c==a)
            printf("TRIANGULO ISOSCELES\n");
    }
 
    return 0;
}