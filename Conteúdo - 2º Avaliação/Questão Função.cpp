#include<stdio.h>

void inicializarVetores(int vetor1[], int vetor2[], int tamanho){
	printf("-----Vetor1------ \n \n");
	
	for(int i = 0; i < tamanho; i++){
		printf("Elemento vetor1[%d]: ", i);
		scanf("%d", &vetor1[i]);
	}
	printf("-----Vetor2------\n \n");
	
	for(int i = 0; i < tamanho; i++){
		printf("Elemento vetor2[%d]: ", i);
		scanf("%d", &vetor2[i]);
	}
	printf("-------------- \n \n");
}

int pertence(int vetor[], int tamanho, int elemento){
	int res = 0;
	for(int i = 0; i < tamanho; i++){
		if(vetor[i] == elemento){
			res = 1;
		}
	}
	return res;
}

void imprimeVetor(int vetorA[], int vetorB[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		int res = pertence(vetorB, tamanho, vetorA[i]);
		if(res == 1){
			printf("Interseccao: %d \n", vetorA[i]);
		} 
	}
}


int main(){
	int tamanho;
	int a[tamanho];
	int b[tamanho];
	
	printf("Tamanho vetor: ");
	scanf("%d", &tamanho);
	
	inicializarVetores(a, b, tamanho);
	imprimeVetor(a, b, tamanho);
}


