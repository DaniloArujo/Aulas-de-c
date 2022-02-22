#include <stdio.h>

int main(){
	int idade;
	int i;
	printf("Programa para a verificação da idade!\n");
	
	for(i = 0; i < 3; i++ ){
	    printf("Digite a idade: ");
	    scanf("%d",&idade);
	    if (idade <= 18)
	        printf("jovem\n");
	        else printf("adulto\n");
	    
	}
	printf("Fim!");
}
