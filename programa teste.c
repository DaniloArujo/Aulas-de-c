#include<stdio.h>
#include<math.h>
int main(){
	int idade;
	
	printf("Digite uma idade: ");
	scanf("%d",&idade);
	
	
    if(idade >0 && idade<=10)
		printf("Crian�a\n");
		else if (idade>11 && idade<18)
			printf("adolescente\n");
				else if (idade>19 && idade<100)
				printf("idoso\n");
					else if (idade>101 && idade<150)
					    printf("zumbi\n");
				    	else printf("idade inv�lida");
    
}
