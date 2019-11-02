#include <stdio.h>
#include <string.h>
int main() {
 
    int n;
    char hex[20];
    scanf("%d\n",&n);
    int i=0, resto,j,tam;
    while(n>0){
        resto=n%16;
        n=n/16;
         if(resto<=9)  
            hex[i] = resto+48;  
        else if(resto==10)  
            hex[i] = 'A';  
        else if(resto==11)  
            hex[i] = 'B';  
        else if(resto==12)  
            hex[i] = 'C';  
        else if(resto==13)  
            hex[i] = 'D';  
        else if(resto==14)  
            hex[i] = 'E';  
        else if(resto==15)  
            hex[i] = 'F';  
        i++;  
    }
    hex[i]='\0';
    tam=strlen(hex);
    for(j=tam-1;j>=0;j--)
        printf("%c",hex[j]);
    printf("\n");
 
    return 0;
}