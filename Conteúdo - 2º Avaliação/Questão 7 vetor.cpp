#include<stdio.h>

void inicializar(int vetorP[], int vetorI[], int tamanho){
	int a;
	for(int i = 0; i < tamanho; i++){
		printf("Elemento vetorPar[%d]: ", i);
		scanf("%d", &a);
		if(a % 2 == 0){
			vetorP[i] = a;
		} else {
			printf("ENTRADA INVALIDA, DIGITE UM NUMERO PAR\n");
			i = i - 1;
		}
	}
	for(int i = 0; i < tamanho; i++){
		printf("Elemento vetorImpar[%d]: ", i);
		scanf("%d", &a);
		if(a % 2 == 1){
			vetorP[i] = a;
		} else {
			printf("ENTRADA INVALIDA, DIGITE UM NUMERO IMPAR\n");
			i = i - 1;
		}
	}
}

int verifica(int vetor[], int elemento, int tamanho){
	int res = 0;
	for(int i = 0; i < tamanho; i++){
		if(elemento == vetor[i]){
			res = 1;
			break;
		}
	}
	return res;
}


void uniao(int vetorA[], int vetorB[], int vetorC[], int tamanho){
	printf("\n------UNIAO------\n");
	int k = 0;
	for(int i = 0; i < tamanho ; i++){
		int x = verifica(vetorC, vetorA[i], k);
		if(x == 0){
			vetorC[k] = vetorA[i];
			k++;
		}
	}
	for(int l = 0; l < tamanho ; l++){
		int x = verifica(vetorC, vetorB[l], k);
		if(x == 0){
			vetorC[k] = vetorB[l];
			k++;
		}
	}
	for(int j = 0; j < k; j++){
		printf("%d ", vetorC[j]);
	}
}

int main(){
	int tamanho;
	printf("TAMANHO: ");
	scanf("%d", &tamanho);
	
	int a[tamanho];
	int b[tamanho];
	int c[tamanho*2];
	
	inicializar(a, b, tamanho);
	uniao(a, b, c, tamanho);
}

