#include<stdio.h>

int main(){
	
	int num, qtdNumPrimos = 0, numTestado = 2, primo = 1, contador = 2, resto;
	
	printf("Quantidade numeros primos: ");
	scanf("%d", &num);
	
	while(qtdNumPrimos < num){
		
		while(contador < numTestado){
			resto = numTestado % contador;
			if(resto == 0){
				primo = 0;
				qtdNumPrimos++;
			}
			if(primo == 1){
				printf("%d \n", numTestado);
			} contador++;
		} numTestado++;
	}
}
