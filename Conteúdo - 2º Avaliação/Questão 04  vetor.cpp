#include<stdio.h>

void inicializar(int vetor[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("Elemento Vetor[%d]", i);
		scanf("%d", &vetor[i]);
	}
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

int maiorRepete(int vetor[], int tamanho, int maior){
	int repetiu = -1;
	for(int i = 0; i < tamanho; i++){
		if(maior == vetor[i]){
			repetiu++;
		}	
	}
	return repetiu;
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
	int tamanho;
	
	printf("Tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int A[tamanho];
	
	inicializar(A, tamanho);
	int x = maior(A, tamanho);
	int z = maiorRepete(A, tamanho, x);
	int y = menor(A, tamanho);
	
	printf("Maior Elemento: %d \n", x);
	printf("Maior se repete %d vezes", z);
	printf("Menor Elemento: %d \n", y);
	
}
