#include<stdio.h>

int main(){
	
	int num, numPrimo, resto, contador = 2;
	
	printf("Numero: ");
	scanf("%d", &num);
	
	while(contador < num){
		resto = contador%2;
		
		if(resto == 1){
			printf("%d \n", contador);
		}
		contador++;
	}
}
