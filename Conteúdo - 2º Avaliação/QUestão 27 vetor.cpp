#include<stdio.h>

void inicializar(int vetor[], int tamanhoNum){
	for(int i = 0; i < 7; i++){
		vetor[i] = 0;
	}
	int j = 0;
	for(int i = 7 - tamanhoNum; i < 7; i++){
		
		printf("Digite o algarismo %d: ", j);
		scanf("%d", &vetor[i]);
		j++;
	}
	for(int i = 0; i < 7; i++){
		printf("%d ", vetor[i]);
	}
}

int main(){
	int tamanhoNum;
	int a[7];
	
	printf("Tamanho do numero: ");
	scanf("%d", &tamanhoNum);
	
	inicializar(a, tamanhoNum);
}
