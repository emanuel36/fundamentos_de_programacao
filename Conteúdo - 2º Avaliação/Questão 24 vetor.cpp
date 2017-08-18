#include<stdio.h>

void inicializa(int vetor[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("Valor de V[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
}

int possibilidade(int vetor[], int tamanho){

}	

void reorganiza(int vetor[], int par[], int impar[], int tamanho){
	int np = 0, ni = 0;
	for(int i = 0; i < tamanho; i++){
		if(vetor[i] % 2 == 0){
			par[np] = vetor[i];
			np++;
		} else {
			impar[ni] = vetor[i];
			ni++;
		}
	}
	for(int i = 0; i < np + ni; i++){
		printf("%d ", par[i]);
		printf("%d ", impar[i]);
	}
}

int main(){
	int tamanho;
	printf("TAMANHO: ");
	scanf("%d", &tamanho);
	
	int a[tamanho];
	int b[tamanho];
	int c[tamanho];
	
	inicializa(a, tamanho);
	reorganiza(a, b, c, tamanho);
	
}

