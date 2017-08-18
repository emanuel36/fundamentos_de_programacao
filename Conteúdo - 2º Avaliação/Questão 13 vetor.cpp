#include<stdio.h>

void inicializar(int vetor[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("Elemento vetor[%d]", i);
		scanf("%d", &vetor[i]);
	}
}

int somaElementos(int vetor[], int tamanho){
	int soma = 0;
	for(int i = 0; i < tamanho; i++){
		soma = vetor[i] + soma;
	}
	return soma;
}

int mediaElementos(int vetor[], int tamanho){
	int media;
	int soma = somaElementos(vetor, tamanho);
	for(int i = 0; i < tamanho; i++){
			media = soma / tamanho;
	}
	return media;
}

int somapi(int vetor[], int tamanho){
	int somaPares = 0;
	int somaImpares = 0;
	int somaSub = 0;
	for(int i = 0; i < tamanho; i++){
		int resto = vetor[i] % 2;
		if(resto == 0){
			somaPares = somaPares + vetor[i];
		} else {
			somaImpares = somaImpares + vetor[i];
		}
		somaSub = somaPares - somaImpares;
	}
	return somaSub;
}

int maior(int vetor[], int tamanho){
	int maiorE = vetor[0];
	for(int i = 0; i < tamanho; i++){
		if(vetor[i] > maiorE){
			maiorE = vetor[i];
		}
	}
	return maiorE;
}

int maior2(int vetor[], int tamanho){
	int maiorEE = vetor[0];
	int mmaior = 0;
	for(int i = 0; i < tamanho; i++){
		if(vetor[i] > maiorEE){
			mmaior = maiorEE;
			maiorEE = vetor[i];
		}
	}
	return mmaior;
}

int menor(int vetor[], int tamanho){
	int menorE = vetor[0];
	for(int i = 0; i < tamanho; i++){
		if(vetor[i] < menorE){
			menorE = vetor[i];
		}
	}
	return menorE;
}

int main(){
	int tamanho, a[tamanho];
	printf("Tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	inicializar(a, tamanho);
	int soma = somaElementos(a, tamanho);
	int media = mediaElementos(a, tamanho);
	int somapi1 = somapi(a, tamanho);
	int maior1 = maior(a, tamanho);
	int menor1 = menor(a, tamanho);
	int maiorr  = maior2(a, tamanho);
	
	printf("Soma dos elementos: %d \n", soma);
	printf("Media dos elementos: %d \n", media);
	printf("Elementos pares - Impares: %d \n", somapi1);
	printf("Maior elemento: %d \n", maior1);
	printf("Menor elemento: %d \n", menor1);
	printf("Dois maiores elementos: %d e %d \n", maior1, maiorr);
}
