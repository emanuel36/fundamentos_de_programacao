#include<stdio.h>

void inicializar(int vetor[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("Elemento vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
}

void rotacionarD(int vetor[], int tamanho){
	int ultimo = vetor[tamanho - 1];
	
	for(int i = tamanho - 1; i > 0; i--){	
		vetor[i] = vetor[i - 1];
	}
	vetor[0] = ultimo;
}

void rotacionarE(int vetor[], int tamanho){
	int primeiro = vetor[0];
	
	for(int i = 0; i < tamanho; i++){
		vetor[i] = vetor[i + 1];
	}
	vetor[4] = primeiro;
}

void imprime(int vetor[], int tamanho){
	printf("\n-----Vetor rotacionado, para direita----- \n");
	for(int i = 0; i < tamanho; i++){
		printf("%d ", vetor[i]);
	}
}

void imprime2(int vetor[], int tamanho){
	printf("\n-----Vetor rotacionado, para esquerda----- \n");
	for(int i = 0; i < tamanho; i++){
		printf("%d ", vetor[i]);
	}
}

int main(){
	int tamanho;
	
	printf("Tamanho vetor: ");
	scanf("%d", &tamanho);
	
	int a[tamanho];
	
	inicializar(a, tamanho);
	rotacionarD(a, tamanho);
	imprime(a, tamanho);
	rotacionarE(a, tamanho);
	imprime2(a, tamanho);
	
}
