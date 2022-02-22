#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c, d;
	
	printf("digite um valor: ");
	scanf("%d",&a);
	
	printf("digite um valor: ");
	scanf("%d",&b);
	
	printf("digite um valor: ");
	scanf("%d",&c);	
	
	printf("digite um valor: ");
	scanf("%d",&d);
	
	if (b>c && c>d && c+d>a+b && c>=0 && d>=0 && a % 2 == 0)
	printf("verdadeiro");
	else printf("falso");

}
