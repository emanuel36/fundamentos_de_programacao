#include<stdio.h>

void inicializar(int vetorA[], int vetorB[], int tamanhoA, int tamanhoB){
	printf("\n ----Vetor A---- \n");
	for(int i = 0; i < tamanhoA; i++){
		printf("Elemento vetorA[%d]: ", i);
		scanf("%d", &vetorA[i]);
	}	
		printf("\n ----Vetor B---- \n");
	for(int i = 0; i < tamanhoB; i++){
		printf("Elemento vetorB[%d]: ", i);
		scanf("%d", &vetorB[i]);
	}	
}

int somaPares(int vetorA[], int vetorB[], int tamanhoA, int tamanhoB){
	int soma = 0;
	int somaf = 0;
	for(int i = 0; i < tamanhoA; i++){
		int resto = vetorA[i] % 2;
		if(resto == 0){
		soma = vetorA[i] + soma; 
		}
	}
			for(int i2 = 0; i2 < tamanhoB; i2++){
			somaf = soma + vetorB[i2];
			soma = somaf;
	}
	return soma;
}

int main(){
	int tamanhoA;
	int tamanhoB;
	
	printf("Tamanho vetor A: ");
	scanf("%d", &tamanhoA);

	printf("Tamanho vetor B: ");
	scanf("%d", &tamanhoB);
	
	int a[tamanhoA];
	int b[tamanhoB];
	
	inicializar(a, b, tamanhoA, tamanhoB);
	int x = somaPares(a, b, tamanhoA, tamanhoB);
	
	printf("Soma dos pares e do vetor B: %d", x);
}
