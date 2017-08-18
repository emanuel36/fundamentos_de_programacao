#include<stdio.h>

int main(){
	
	int nesimo, sequencia, contador, num1 = 1;
	
	printf("Digite o nesimo numero: ");
	scanf("%d", &nesimo);
	
	while(contador < nesimo){
		
		sequencia = (num1 * 2) + 1;
		num1 = sequencia;
		
		contador++;
	}
	
	printf("%d", sequencia);
}
