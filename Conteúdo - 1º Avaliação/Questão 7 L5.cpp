#include<stdio.h>

int main(){
	
	int num, contador = 0, resto1, resto2, soma;
	
	printf("Numero: ");
	scanf("%d", &num);

	while(contador < num){
		
		resto1 = contador % 3;
		resto2 = contador % 7;
		
		if(resto1 == 0 && resto2 != 0){
			printf("%d \n", contador);
			soma = soma + contador;
		}
			contador++;				
	}
	
	printf("Soma: %d", soma);
}
