#include <stdio.h>

int main(){
	
	double raio, area;
	int n;
	
	printf("Digite o valor do raio: ");
	scanf("%lf",&raio);
	
	n = 3.14159;
	area = n * (raio * raio);
	
	printf("A area do circulo e de %lf",area);
	
	
}

