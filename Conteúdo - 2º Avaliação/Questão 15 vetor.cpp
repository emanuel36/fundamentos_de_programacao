#include<stdio.h>

void inicializar(int vetorA[], int vetorB[]){
	printf("\n-----VetorA-----\n");
	for(int i = 0; i < 5 ; i++){
		printf("Elemento vetorA[%d]: ", i);
		scanf("%d", &vetorA[i]);
	}
	printf("\n-----VetorB------\n");
	for(int i = 0; i < 5; i++){
		printf("Elemento vetorB[%d]: ", i);
		scanf("%d", &vetorB[i]);
	}
}

int verifica(int vetor[], int elemento, int k){
	int resultado = 0;
	for(int i = 0; i < k; i++){
		if(elemento == vetor[i]){
			resultado = 1;
			break;
		} 
	}
	return resultado;
}

void uniao(int vetorA[], int vetorB[], int vetorC[]){
	printf("\n------UNIAO------\n");
	int k = 0;
	for(int i = 0; i < 5 ; i++){
		int x = verifica(vetorC, vetorA[i], k);
		if(x == 0){
			vetorC[k] = vetorA[i];
			k++;
		}
	}
	for(int l = 0; l < 5 ; l++){
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

void interseccao(int vetorA[], int vetorB[], int vetorE[]){
	int resultado;
	int t = 0;
	printf("\n------INTERSECCAO------\n");
	
	for(int i = 0; i < 5 ; i++){
		resultado = verifica(vetorB, vetorA[i], 5);
		if(resultado == 1){
			resultado = verifica(vetorE, vetorA[i], t);
			if(resultado == 0){
				vetorE[t] = vetorA[i];
				t++;	
			} 
		}
	}
	for(int a = 0; a < t; a++){
		printf("%d ", vetorE[a]);
	}
}

void diferenca(int vetorA[], int vetorB[], int vetorD[]){
	int res;
	int k = 0;
	printf("\n------DIFERENCA------\n");
	for(int i = 0; i < 5 ; i++){
		res = verifica(vetorB, vetorA[i], 5);
		if(res == 0){
			res = verifica(vetorD, vetorA[i], k);
			if(res == 0){
				vetorD[k] = vetorA[i];
				k++;
			}
		}
	}
	for(int a = 0; a < k; a++){
		printf("%d ", vetorD[a]);
	}
}

void soma(int vetorA[], int vetorB[]){
	printf("\n-----SOMA-----\n");
	for(int i = 0; i < 5 ; i++){
		int soma = vetorA[i] + vetorB[i];
		printf("%d ", soma);
	}	
}

void produto(int vetorA[], int vetorB[]){
	printf("\n-----PRODUTO-----\n");
	for(int i = 0; i < 5 ; i++){
		int produto = vetorA[i] * vetorB[i];
		printf("%d ", produto);
	}	
}

int main(){
	int a[5];
	int b[5];
	int c[10];
	int d[5];
	int e[10];
	
	inicializar(a, b);
	uniao(a, b, c);
	diferenca(a, b, d);
	interseccao(a, b, e);
	soma(a, b);
	produto(a, b);
}
