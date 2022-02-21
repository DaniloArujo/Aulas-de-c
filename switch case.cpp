#include<stdio.h>
#include<math.h>

int main(){
	int idade;
	printf("Digite a idade: ");
	sanf("%d",&idade);
	
	switch (idade){
		case 10: printf("criança");break;
		case 18: printf("adulto");break;
		case 60: printf("idoso");break;
		case 100: printf("zumbi");break;
		default: printf("idade invalida");
		
		
	}
}
