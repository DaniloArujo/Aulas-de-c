#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, delta, bhascara1, bhascara2;
	
	printf("Escreva o valor de A: ");
	scanf("%f",&a);
	printf("Escreva o valor de B: ");
	scanf("%f",&b);
	printf("Escreva o valor de C: ");
	scanf("%f",&c);
	
	delta = pow(b,2)-4*a*c;
	bhascara1 = ((-1)*b + sqrt(delta))/(2*a);
	bhascara2 = ((-1)*b - sqrt(delta))/(2*a);
	
	if(delta < 0)
		printf("impossível calcular");
		
		else printf("%f  e %f sao as raizes da equacao.",&bhascara1,&bhascara2);
	
	
}
