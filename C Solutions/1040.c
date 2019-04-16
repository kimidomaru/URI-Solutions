#include <stdio.h>
 
int main() {
 
   float N1,N2,N3,N4,e;
   float media,x;
   scanf("%f %f %f %f\n",&N1,&N2,&N3,&N4);
   media=((2*N1)+(3*N2)+(4*N3)+(N4))/10;
   printf("Media: %.1f\n",media);
   if(media>=7.0){
       printf("Aluno aprovado.\n");
   }
   else if(media<5.0){
       printf("Aluno reprovado.\n");
   }
    else if(media>=5 && media<=6.9){
       printf("Aluno em exame.\n");
       scanf("%f\n",&e);
       printf("Nota do exame: %.1f\n",e);
       x=(media+e)/2;
       
       if(x>=5)
       printf("Aluno aprovado.\n");
   
       else if(x<=4.9)
       printf("Aluno reprovado.\n");
       
       printf("Media final: %.1f\n",x);
   }
    return 0;
}