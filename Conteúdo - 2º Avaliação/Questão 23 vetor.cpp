#include<stdio.h>

void inicializar(int vetor[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("Elemento vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
}

void medianaVetor(int vetor[], int tamanho){
	int resto = tamanho % 2;
	int mediana;
	int elemento;
	if(resto == 1){
		elemento = tamanho / 2;
		mediana = vetor[elemento];	
	} else {
		elemento = (tamanho / 2);
		mediana = (vetor[elemento] + vetor[elemento - 1]) / 2;
	}
	printf("Mediana: %d", mediana);
}

int main(){
	int tamanho;
	printf("Tamanho Vetor: ");
	scanf("%d", &tamanho);
	
	int a[tamanho];
	
	inicializar(a, tamanho);
	medianaVetor(a, tamanho);
}
