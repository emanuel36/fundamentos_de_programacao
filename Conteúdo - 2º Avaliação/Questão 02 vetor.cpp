#include<stdio.h>

void inicializar(int vetor[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("Elemento vetor[%d]", i);
		scanf("%d", &vetor[i]);
	}
}

int busca(int vetor[], int tamanho){
	int posicao = -1, elemento;
	
	printf("PROCURAR: ");
	scanf("%d", &elemento);
	
	for(int i = 0; i < tamanho; i++){
		printf("PROCURAR: ");
		scanf("%d", &elemento);
		
		if(elemento == vetor[i]){
			posicao = i;
			break;
		} else {
			printf("NUMERO NAO ENCONTRADO\n");
			i = i - 1;	
		}
	}
	return posicao;
}

int main(){
	int tamanho;
	printf("TAMANHO: ");
	scanf("%d", &tamanho);
	
	int a[tamanho];
	inicializar(a, tamanho);
	int x = busca(a, tamanho);
	
	if(x == -1){
		printf("NUMERO NAO ENCONTRADO");
	} else {
		printf("NUMERO ENCONTRADO, NA POSICAO %d", x);
	}
}
