#include<stdio.h>

int main(){
	
	double a, b, soma, produto, quociente, diferenca;
	
	printf("Digite um valor: ");
	scanf("%lf",&a);
	
	printf("digite um outro valor: ");
	scanf("%lf",&b);
	
	soma = a + b;
	produto = a * b;
	quociente = a / b;
	diferenca = a - b;
	
	printf("A soma, a multiplica��o, a divis�o  e a diferen�a entre os dois numeros s�o: %.3lf, %.3lf, %.3lf, %.3lf respectivamente.",soma, produto, quociente, diferenca);
	
	
}

