#include<stdio.h>
#include<math.h>

int main(){
	float nota1, nota2, media;
	int freq;
	
	printf("digite a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("digite outra nota: ");
	scanf("%f",&nota2);
	
	printf("digite a frequencia do aluno: ");
	scanf("%d",&freq);
	
	
	media = (nota1+nota2)/2;
	
	if (media >7 && freq < 10)
	    printf("voce esta aprovado.");

}
