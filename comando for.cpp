#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int i;
    
    
    for(i = 1; i <= 4; i ++ ) // (++)incremento, pode ser usado o auto decremento tambem (--)
        printf("Um rapaz sem paci�ncia, intelig�ncia, empatia, lucidez, autoestima ou qualquer habilidade perceptivel.\n");

    return 0;
}

