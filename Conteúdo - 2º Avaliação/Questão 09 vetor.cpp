#include<stdio.h>

void inicializar(int vetor[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("Elemento Vetor[%d]", i);
		scanf("%d", &vetor[i]);
	}
}

int pesquisar(int vetor[], int tamanho, int elemento){
	int res = 0;
	
	for(int i = 0; i < tamanho; i++){
		if(elemento == vetor[i]){
			res = i;
		}
	}
	return res;
}

int main(){
	int tamanho;
	int a[tamanho];
	
	printf("Tamanho vetor: ");
	scanf("%d", &tamanho);
	
	inicializar(a, tamanho);
	
	int elemento;
	
	printf("Pesquisar no vetor, o elemento: ");
	scanf("%d", &elemento);
	
	int x = pesquisar(a, tamanho, elemento);
	if(x == 0){
		printf("Nao encontrado");
	} else {
		printf("Existe, vetor[%d]", x);
	}
}
