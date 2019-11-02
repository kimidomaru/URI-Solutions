#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	int i;
	char sheldon[10],raj[10];
	int resultado;
	for(i=0;i<n;i++){
		scanf("%s %s",sheldon,raj);
		if(strcmp(sheldon,raj)==0)
			resultado=0;
		else if(strcmp(sheldon,"tesoura")==0){
			if(strcmp(raj,"papel")==0 || strcmp(raj,"lagarto")==0)
				resultado=1;
			else if(strcmp(raj,"pedra")==0 || strcmp(raj,"Spock")==0)
				resultado=-1;
		}
		else if(strcmp(sheldon,"papel")==0){
			if(strcmp(raj,"pedra")==0 || strcmp(raj,"Spock")==0)
				resultado=1;
			else if(strcmp(raj,"lagarto")==0 || strcmp(raj,"tesoura")==0)
				resultado=-1;
		}
		else if(strcmp(sheldon,"pedra")==0){
			if(strcmp(raj,"tesoura")==0 || strcmp(raj,"lagarto")==0)
				resultado=1;
			else if(strcmp(raj,"papel")==0 || strcmp(raj,"Spock")==0)
				resultado=-1;
		}
		else if(strcmp(sheldon,"lagarto")==0){
			if(strcmp(raj,"papel")==0 || strcmp(raj,"Spock")==0)
				resultado=1;
			else if(strcmp(raj,"pedra")==0 || strcmp(raj,"tesoura")==0)
				resultado=-1;
		}
		else if(strcmp(sheldon,"Spock")==0){
			if(strcmp(raj,"pedra")==0 || strcmp(raj,"tesoura")==0)
				resultado=1;
			else if(strcmp(raj,"lagarto")==0 || strcmp(raj,"papel")==0)
				resultado=-1;
		}
		printf("Caso #%d",(i+1));
		if(resultado==0)
			printf(": De novo!\n");
		else if(resultado>0)
			printf(": Bazinga!\n");
		else
			printf(": Raj trapaceou!\n");
	}
	return 0;
}