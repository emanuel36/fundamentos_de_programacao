
#include<stdio.h>

int parImpar(int vetor[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("Valor de V[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	int numImpar = 0;
	
	for(int i = 0; i < tamanho; i++){
		int resto = vetor[i] % 2;
		if(resto == 1){
			numImpar++;
		}
	}
	return numImpar;
}

int main(){
	int tamanho;
	int par[tamanho];
	
	printf("Tamanho da funcao: ");
	scanf("%d", &tamanho);
	
	int x = parImpar(par, tamanho);
	int y = (tamanho - x);
	
	printf("Numeros impares: %d \n", x);
	printf("Numeros pares: %d \n", y);
}
