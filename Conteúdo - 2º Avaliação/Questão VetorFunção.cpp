#include<stdio.h>

int fatorial(int num){
int fat = 1;
	for(int contador = 1; contador <= num; contador++){
		fat = contador * fat;
	}
	return fat;
}


void inicializarVetor(int vetorN[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("Elemento [%d] do vetor: ", i);
		scanf("%d", &vetorN[i]);
	}
}


void vetores(int vetor1[], int vetor2[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		vetor2[i] = fatorial(vetor1[i]);
	}
}


void imprimeVetor(int vetor[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("Vetor[%d]: %d \n", i, vetor[i]);
	}
	printf("-------------------- \n");
}

int main(){
	int tamanho;
	printf("Tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int a[tamanho];
	int b[tamanho];
	
	inicializarVetor(a, tamanho);
	imprimeVetor(b, tamanho);
	vetores(a, b, tamanho);
	imprimeVetor(a, tamanho);
	imprimeVetor(b, tamanho);
}
