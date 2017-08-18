#include<stdio.h>

int main(){
	
	int num = 1, contador = 0, quantidade, soma1 = 0, soma, media;
	
	while(num>0){
		
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if(num > 0){
			soma = num + soma1;
			soma1 = soma;	
			
			contador++;
		}
		
		media = soma / contador;
	}
	
	printf("Soma: %d \n", soma);
	printf("Quantidade: %d \n", contador);
	printf("Media:: %d \n", media);
}
